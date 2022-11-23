#include "room_manager.h"
#include <inttypes.h>
#include "lm35.h"
#include <stdlib.h>
// #include <stdio.h>
// #include "uart.h"

/**
 * @brief static array to store rooms
 *
 */
static Room rooms[4];

void initRoomManager()
{
    createRooms();
}

static void createRooms()
{
    for (uint8_t i = 0; i < MAX_ROOMS_NO; i++)
    {
        Room new_room;
        new_room.number = i + 1;
        new_room.target_temperature = 225;
        if (i % 2)
            new_room.cooling = 0;
        else
            new_room.cooling = 1;

        uint16_t pseudo_temp = getCurrentTemp();

        if (i % 2)
        {
            pseudo_temp = pseudo_temp + i * 10;
        }
        else
        {
            pseudo_temp = pseudo_temp - i * 20;
        }
        new_room.current_temp = pseudo_temp;

        rooms[i] = new_room;
    }
}

uint16_t getTargetRoomTemp(uint8_t room_no)
{
    return rooms[room_no - 1].target_temperature;
}

void setTargetRoomTemp(uint8_t room_no, uint8_t *target)
{
    uint16_t t = atoi(target);
    rooms[room_no - 1].target_temperature = t;
}

uint8_t getRoomCooling(uint8_t room_no)
{
    return rooms[room_no - 1].cooling;
}

void setRoomCooling(uint8_t room_no, uint8_t *state)
{
    uint8_t st = atoi(state);
    rooms[room_no - 1].cooling = st;
}

uint16_t getRoomTemp(uint8_t room_no)
{
    return rooms[room_no - 1].current_temp;
}

void setRoomTemp(uint8_t room_no, uint16_t temp)
{
    rooms[room_no - 1].current_temp = temp;
}