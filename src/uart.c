#define F_CPU 16000000UL
#include "uart.h"
#include "avr/io.h"
#include <inttypes.h>
#include <stdio.h>

uart_buffer rx_buffer;

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

void uartTransmitChar(uint8_t cp)

{
	if (bit_is_set(UCSR0A, UDRE0))
		UDR0 = cp;
}

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

void check_uart_error()
{
	if (bit_is_set(UCSR0A, FE0))
		uartTransmitStr("Frame receive error\n");
	else if (bit_is_set(UCSR0A, DOR0))
		uartTransmitStr("Data overrun errori\n");
	else if (bit_is_set(UCSR0A, UPE0))
		uartTransmitStr("Parity error\n");
}

static uint8_t _buffer_is_full()
{
	if (rx_buffer.length == UART_BUFFER_SIZE)
		return 1;
	return 0;
}

static uint8_t _buffer_is_empty()
{
	if (rx_buffer.length == 0)
		return 1;
	return 0;
}

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

uint8_t read_buffer(uint8_t *dest)
{
	uint8_t empty = _buffer_is_empty();
	if (empty)
	{
		return 0;
	}

	*dest = *(rx_buffer.buffer + rx_buffer.tail);
	rx_buffer.length--;
	rx_buffer.tail++;
	if (rx_buffer.tail == UART_BUFFER_SIZE)
		rx_buffer.tail = 0;
	return 1;
}