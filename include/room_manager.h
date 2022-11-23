#ifndef _ROOM_MANAGER_H_
#define _ROOM_MANAGER_H_
#include <inttypes.h>

#define MAX_ROOMS_NO 4

typedef struct Room
{
    uint8_t number;
    uint16_t target_temperature;
    uint16_t current_temp;
    uint8_t cooling;

} Room;

/**
 * @brief Initializes the room manager
 *
 */
void initRoomManager();

/**
 * @brief Create the rooms and stores it in an array
 *
 */
static void createRooms();

/**
 * @brief Get the target room temperature
 *
 * @param room_no
 * @return uint16_t The room temperature represented as a 3 digit value
 */
uint16_t getTargetRoomTemp(uint8_t room_no);

/**
 * @brief Set the target room temperature with a 3 digit value
 *
 * @param room_no
 * @param target the target temperature
 */
void setTargetRoomTemp(uint8_t, uint8_t *);

/**
 * @brief Get the state of the room cooling
 *
 * @param room_no
 * @return uint8_t  1 or 0
 */
uint8_t getRoomCooling(uint8_t);

/**
 * @brief Enable or disable cooling
 *
 * @param room_no
 * @param state 1 or 0
 */
void setRoomCooling(uint8_t, uint8_t *);

/**
 * @brief Get the Room Temp
 *
 * @return uint16_t
 */
uint16_t getRoomTemp(uint8_t);

/**
 * @brief Set the Room Temp
 *
 */
void setRoomTemp(uint8_t, uint16_t);

#endif