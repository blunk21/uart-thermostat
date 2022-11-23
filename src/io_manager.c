#include <avr/io.h>
#include "room_manager.h"
#include "display_manager.h"
#include "uart.h"
#include "io_manager.h"

void initIOManager(void)
{
    initLEDS();
}

void taskButtonCheck(void)
{
    uint8_t state = PING & 0x1F;

    switch (state)
    {
    case 0x10:
        setCurrentPage(1);
        break;
    case 0x08:
        setCurrentPage(2);
        break;
    case 0x04:
        setCurrentPage(3);
        break;
    case 0x02:
        setCurrentPage(4);
        break;
    default:
        break;
    }
}

void taskManageActuators(void)
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

void initLEDS(void)
{
    DDRD |= DDRB |= 0xF0;
}
