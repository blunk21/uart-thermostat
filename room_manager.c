#include "room_manager.h"
#include <inttypes.h>
#include "lm35.h"
// #include <stdio.h>
// #include "uart.h"

/**
 * @brief static array to store rooms
 *
 */
static Room rooms[4];

/**
 * @brief Initializes the room manager
 *
 */
void initRoomManager()
{
    createRooms();
}

/**
 * @brief Create the rooms and stores it in an array
 *
 */
static void createRooms()
{
    for (uint8_t i = 0; i < MAX_ROOMS_NO; i++)
    {
        // uint8_t debugstring[100];
        Room new_room;
        new_room.number = i + 1;
        new_room.target_temperature = 225;
        if (i % 2)
            new_room.cooling = 0;
        else
            new_room.cooling = 1;

        uint16_t pseudo_temp = getCurrentTemp();
        // sprintf(debugstring,"Initial pseudotemp= %d\n",pseudo_temp);
        // uartTransmitStr(debugstring);
        // For simulation purposes
        if (i % 2)
        {
            pseudo_temp = pseudo_temp + i * 10;
        }
        else
        {
            pseudo_temp = pseudo_temp - i * 20;
        }
        new_room.current_temp = pseudo_temp;

        // sprintf(debugstring,"The new rooms pseudo temp is: %d\n",pseudo_temp);
        // uartTransmitStr(debugstring);

        rooms[i] = new_room;
    }
}

/**
 * @brief Get the target room temperature
 *
 * @param room_no
 * @return uint16_t The room temperature represented as a 3 digit value
 */
uint16_t getTargetRoomTemp(uint8_t room_no)
{
    return rooms[room_no - 1].target_temperature;
}

/**
 * @brief Set the target room temperature with a 3 digit value
 *
 * @param room_no
 * @param target the target temperature
 */
void setTargetRoomTemp(uint8_t room_no, uint16_t target)
{
    rooms[room_no - 1].target_temperature = target;
}

/**
 * @brief Get the state of the room cooling
 *
 * @param room_no
 * @return uint8_t  1 or 0
 */
uint8_t getRoomCooling(uint8_t room_no)
{
    return rooms[room_no - 1].cooling;
}

/**
 * @brief Enable or disable cooling
 *
 * @param room_no
 * @param state 1 or 0
 */
void setRoomCooling(uint8_t room_no, uint8_t state)
{
    rooms[room_no - 1].cooling = state;
}

uint16_t getRoomTemp(uint8_t room_no)
{
    return rooms[room_no - 1].current_temp;
}

void setRoomTemp(uint8_t room_no, uint16_t temp)
{
    rooms[room_no - 1].current_temp = temp;
}