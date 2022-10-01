#include "room_manager.h"
#include <inttypes.h>
#include <stdio.h>
#include "lm35.h"

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
        Room new_room;
        new_room.number = i + 1;
        new_room.target_temperature_num = 22;
        new_room.target_temperature_dec = 5;
        new_room.cooling = 0;
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
    uint16_t temp = rooms[room_no].target_temperature_num * 10 +
                    rooms[room_no].target_temperature_dec;
}

/**
 * @brief Set the target room temperature with a 3 digit value
 *
 * @param room_no
 * @param target the target temperature
 */
void setTargetRoomTemp(uint8_t room_no, uint16_t target)
{
    rooms[room_no].target_temperature_num = target % 100;
    rooms[room_no].target_temperature_dec = target % 10;
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
