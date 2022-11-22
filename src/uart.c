#define F_CPU 16000000UL
#include "uart.h"
#include "avr/io.h"
#include <inttypes.h>
#include <stdio.h>

uart_buffer rx_buffer;

/**
 * @brief Initialize UART interface
 *
 * @param ubrr
 */
void initUART(uint8_t ubrr)
{
	rx_buffer.head = 0;
	rx_buffer.tail = 0;
	rx_buffer.length = 0;
	// Set Baud Rate
	UBRR0H = (UBRR >> 8);
	UBRR0L = UBRR;
	// Enable receiving and transmitting + interrupts
	UCSR0A |= _BV(U2X0); // double the uart speed

	UCSR0B |= _BV(RXEN0) | _BV(TXEN0) | _BV(RXCIE0);

	// Set up frame format
	UCSR0C |= _BV(UCSZ01) | _BV(UCSZ00);
}

/**
 * @brief Transmits a character via UART
 *
 * @param cp
 */
void uartTransmitChar(uint8_t cp)

{
	if (bit_is_set(UCSR0A, UDRE0))
		UDR0 = cp;
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
		uartTransmitChar(*cp);
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
 * @brief echoes the content of the buffer for debugging purposes
 *
 */
// void echoUartBuffer(void)
// {
// 	// uartTransmitStr("E");
// 	uint8_t len = '0' + rx_buffer.length;
// 	uint8_t *bytes[10];
// 	// uartTransmitChar(&len);
// 	// uartTransmitStr("\n");
// 	if (rx_buffer.length >= 10)
// 	{
// 		uint8_t i = 0;
// 		read_buffer(bytes, 5);
// 		// bytes[5]=0;
// 		uartTransmitStr(bytes);

// 		// uartTransmitStr("Bytes:");
// 		// uartTransmitStr(bytes);
// 		// uartTransmitStr("\n");
// 	}
// 	check_uart_error();
// }

/**
 * @brief check if the buffer is full
 *
 * @return uint8_t 1 if true
 */
static uint8_t _buffer_is_full()
{
	if (rx_buffer.length == UART_BUFFER_SIZE)
		return 1;
	return 0;
}

/**
 * @brief check if buffer is empty
 *
 * @return uint8_t 1 if empty 0 if not
 */
static uint8_t _buffer_is_empty()
{
	if (rx_buffer.length == 0)
		return 1;
	return 0;
}

/**
 * @brief Writes a character to the buffer if there is space
 *
 * @param data
 */
void write_buffer(uint8_t data)
{
	uint8_t full = _buffer_is_full();
	if (full)
	{
		uartTransmitStr("buffer full\n");
		return;
	}
	else
	{
		*(rx_buffer.buffer + rx_buffer.head) = data;
		rx_buffer.head++;
		rx_buffer.length++;
	}
	if (rx_buffer.head == UART_BUFFER_SIZE)
	{
		rx_buffer.head = 0;
	}
}

/**
 * @brief read buffer into destination
 * 
 * @param dest 
 * @return uint8_t 1 on successful read, 0 on empty
 */
uint8_t read_buffer(uint8_t *dest)
{
	uint8_t empty = _buffer_is_empty();
	if (empty)
	{
		// uartTransmitStr("buffer empty\n");
		return 0;
	}

	*dest = *(rx_buffer.buffer + rx_buffer.tail);
	rx_buffer.length--;
	rx_buffer.tail++;
	if (rx_buffer.tail == UART_BUFFER_SIZE)
		rx_buffer.tail = 0;
	
	

	// terminating null
	// uint8_t retval = *(rx_buffer.buffer + rx_buffer.tail);
	// rx_buffer.length--;
	// rx_buffer.tail++;
	// if (rx_buffer.tail == UART_BUFFER_SIZE)
	// 	rx_buffer.tail = 0;
	return 1;
}