#include <avr/io.h>
#include <avr/interrupt.h>
#include "uart.h"
#include "scheduler.h"
#define F_CPU 16000000UL

#include <util/delay.h>
#include "lm35.h"

void main()
{
    // initialization
    initUART(UBRR);
    initADC();
    initScheduler();

    // enable global interrupt
    sei();

    // add tasks
    addTask(1, pollTemp, 6000);

    for (;;)
        dispatchTasks();
    return 0;
}

ISR(TIMER0_OVF_vect)
{
    static uint16_t counter = 0;
    counter++;
    if (counter == 2) // 1ms
    {
        counter = 0;
        tickTasks();
    }
}