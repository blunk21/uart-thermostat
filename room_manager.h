#ifndef _ROOM_MANAGER_H_
#define _ROOM_MANAGER_H_
#include <inttypes.h>

#define MAX_ROOMS_NO 4

typedef struct Room
{
    uint8_t number;
    uint8_t target_temperature_num;
    uint8_t target_temperature_dec;
    uint8_t cooling;

} Room;

void initRoomManager();
static void createRooms();
uint16_t getTargetRoomTemp(uint8_t room_no);
void setTargetRoomTemp(uint8_t room_no, uint16_t target);
uint8_t getRoomCooling(uint8_t);
void setRoomCooling(uint8_t, uint8_t);

#endif