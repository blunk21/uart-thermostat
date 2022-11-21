#include <avr/io.h>
#include <avr/interrupt.h>
#include "uart.h"
#include "scheduler.h"
#include "lm35.h"
#include "room_manager.h"
#include "display_manager.h"
#include "io_manager.h"
#include "commands.h"

#define F_CPU 16000000UL

void main()
{
    // initialization
    initUART(UBRR);
    initADC();
    initScheduler();
    initRoomManager();
    initDisplayManager();
    initIOManager();

    // enable global interrupt
    sei();

    // add tasks
    addTask(1, taskPollTemp, INTERVAL_POLL_TEMP_100MS);
    addTask(2, taskPrintPage, INTERVAL_PRINT_PAGE_100MS);
    addTask(3, taskButtonCheck, INTERVAL_BUTTON_CHECK_100MS);
    addTask(4, taskManageActuators, INTERVAL_MANAGE_ACTUATORS_100MS);
    addTask(5, taskRegisterTemp, INTERVAL_REGISTER_TEMP_100MS);
    // addTask(6, echoUartBuffer, 50);
    addTask(7,commandTestTask,50);

    for (;;)
        dispatchTasks();
    return 0;
}

ISR(TIMER0_OVF_vect)
{
    static uint16_t counter = 0;
    counter++;
    if (counter == 800) // 100MS
    {
        counter = 0;
        tickTasks();
    }
}

ISR(USART0_RX_vect)
{
    uint8_t data = UDR0;
        write_buffer(data);
    check_uart_error();
}