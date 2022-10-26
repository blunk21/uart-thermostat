#include <avr/io.h>
#include "matrix.h"
#include "room_manager.h"
#include "display_manager.h"
#include "uart.h"
#include "io_manager.h"

void initIOManager(void)
{
    initMatrix();
    initLEDS();
}

void taskButtonCheck(void)
{
    // uartTransmitStr("Manage IO task\n");
    checkButtonPress();
}

void taskManageActuators(void)
{
    controlActuators();
}

void initLEDS(void)
{
    DDRD |= DDRB |= 0xF0;
}

void checkButtonPress(void)
{
    // uartTransmitStr("checkButtonPress called\n");
    uint8_t pressed = matrixButton();
    if (pressed > 0 && pressed < 5)
    {
        setCurrentPage(pressed);
        // uartTransmitChar(pressed);
    }
    return;
}
void controlActuators(void)
{
    uint8_t room = 4;
    uint8_t output = 0;
    while (room)
    {
        output = (output >> 2);
        uint8_t cooling = getRoomCooling(room);
        uint16_t temp = getRoomTemp(room);
        uint16_t target = getTargetRoomTemp(room);

        if (cooling && temp > target)
            output |= 0x40;
        else if (temp < target)
            output |= 0x80;
        room--;
    }
    PORTB &= 0x0F;
    PORTD &= 0x0F; // delete led state
    PORTB |= 0xF0 & (output << 4);
    PORTD |= 0xF0 & output;
    return;
}