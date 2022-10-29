#define F_CPU 16000000UL
#include "uart.h"
#include "avr/io.h"
#include <inttypes.h>
#include <stdio.h>

static uint8_t uart_buffer[UART_BUFFER_SIZE];

/**
 * @brief Initialize UART interface
 *
 * @param ubrr
 */
void initUART(uint8_t ubrr)
{
	// Set Baud Rate
	UBRR0H = (UBRR >> 8);
	UBRR0L = UBRR;
	// Enable receiving and transmitting + interrupts
	// UCSR0A |= _BV(1);

	UCSR0B |= _BV(RXEN0) | _BV(TXEN0) | _BV(RXCIE0);

	// Set up frame format
	UCSR0C |= _BV(UCSZ01) | _BV(UCSZ00);
}

/**
 * @brief Transmits a character via UART
 *
 * @param cp
 */
void uartTransmitChar(uint8_t *cp)

{
	if (bit_is_set(UCSR0A, UDRE0))
		UDR0 = *cp;
}

/**
 * @brief Trnsmits a string via UART
 *
 * @param str
 */
void uartTransmitStr(uint8_t *str)
{
	uint8_t *cp;
	cp = str;
	while (*cp)
	{
		while (bit_is_clear(UCSR0A, UDRE0))
			;
		uartTransmitChar(cp);
		cp++;
	}
}

/**
 * @brief Checks the UART error registers
 *
 */
void check_uart_error()
{
	if (bit_is_set(UCSR0A, FE0))
		uartTransmitStr("Frame receive error\n");
	else if (bit_is_set(UCSR0A, DOR0))
		uartTransmitStr("Data overrun errori\n");
	else if (bit_is_set(UCSR0A, UPE0))
		uartTransmitStr("Parity error\n");
}

/**
 * @brief Checks how much data the buffer contains
 *
 * @return uint8_t the number of bytes
 */
uint8_t checkUartBuffer()
{
	if (uart_buffer[0])
	{
		for (uint8_t i = 0; i < UART_BUFFER_SIZE; i++)
		{
			if (uart_buffer[i] == 0)
				return i - 1;
		}
	}
	else
		return 0;
}

/**
 * @brief echoes the content of the buffer for debugging purposes
 *
 */
void echoUartBuffer(void)
{
	// uartTransmitChar("E");
	uartTransmitStr(uart_buffer);
}


ISR(USART1_RX_vect)
{
	uartTransmitChar('I');
	static uint8_t allow_reception = 0;
	uint8_t *bp;
	uint8_t data = UDR0;
	bp = uart_buffer;
	if (data == ":" && !allow_reception)
		allow_reception = 8;

	if (allow_reception)
	{
		while (*bp)
			bp++;
		*bp = data;
		allow_reception--;
	}
}