#include <avr/io.h>
#include <avr/interrupt.h>
#include "uart.h"
#define F_CPU 16000000UL

#include <util/delay.h>
#include "lm35.h"

void main()
{
    initializeUART(UBRR);
    initializeADC();
    sei();

    while (1)
    {

    }
}