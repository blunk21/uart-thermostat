#define F_CPU 16000000UL
#include "uart.h"
#include "avr/io.h"
#include <inttypes.h>




void initialize_uart(uint8_t ubrr)
{
	//Set Baud Rate
	UBRR0H = (UBRR>>8);
	UBRR0L = UBRR;
	// Enable receiving and transmitting + interrupts
	UCSR0A |= _BV(1);

	UCSR0B |= _BV(RXEN0) | _BV(TXEN0) | _BV(RXCIE0);  

	//Set up frame format
	UCSR0C |= _BV(UCSZ01) | _BV(UCSZ00);
		
}
void uart_transmit_char(uint8_t* cp)
		
{
	if(bit_is_set(UCSR0A,UDRE0)) UDR0 = *cp;
}

void uart_transmit_str(uint8_t* str)
{
	uint8_t* cp;
	cp = str;
	while(*cp)
	{
		while(bit_is_clear(UCSR0A,UDRE0));
		uart_transmit_char(cp);
		cp++;
	}

}


void check_uart_error()
{
	if(bit_is_set(UCSR0A,FE0)) uart_transmit_str("Frame receive error\n");
	else if(bit_is_set(UCSR0A,DOR0))uart_transmit_str("Data overrun errori\n");
	else if(bit_is_set(UCSR0A,UPE0)) uart_transmit_str("Parity error\n");
}
