#include <avr/io.h>
#include <avr/interrupt.h>
#include "uart.h"
#include "scheduler.h"
#include "lm35.h"
#include "room_manager.h"
#include "display_manager.h"
#define F_CPU 16000000UL

void main()
{
    // initialization
    initUART(UBRR);
    initADC();
    initScheduler();
    initRoomManager();
    initDisplayManager();

    // enable global interrupt
    sei();

    // add tasks
    addTask(1, taskPollTemp, INTERVAL_POLL_TEMP_MS);
    addTask(2,taskPrintPage,INTERVAL_PRINT_PAGE_MS);

    for (;;)
        dispatchTasks();
    return 0;
}

ISR(TIMER0_OVF_vect)
{
    static uint16_t counter = 0;
    counter++;
    if (counter == 8) // 1ms
    {
        counter = 0;
        tickTasks();
    }
}