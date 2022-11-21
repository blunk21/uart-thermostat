#ifndef _COMMANDS_H_
#define _COMMANDS_H_
#include <inttypes.h>
#define COMMAND_BUFFER_LENGTH 3
uint8_t fetchCommand(uint8_t*);
void commandTestTask(void);
command *command_buffer[COMMAND_BUFFER_LENGTH];
typedef void (*CommandFunc)(uint8_t,uint8_t*);

typedef struct command{
    CommandFunc func;
    uint8_t room_nr;
    uint8_t arg[4];
}command;

#endif