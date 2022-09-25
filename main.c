#include <avr/io.h>
#include <avr/interrupt.h>
#include "uart.h"
#define F_CPU 16000000UL

#include <util/delay.h>

void main()
{
    initialize_uart(UBRR);

    while (1)
    {
    }
}