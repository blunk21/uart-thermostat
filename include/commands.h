#ifndef _COMMANDS_H_
#define _COMMANDS_H_
#include <inttypes.h>
#define COMMAND_BUFFER_LENGTH 3


/**
 * @brief Loads a command into a string if the format is correect
 * 
 * @return uint8_t 1 on success
 */
uint8_t fetchCommand(uint8_t *);

/**
 * @brief Task to fetch a new command
 * 
 */
void taskFetchCommand(void);

/**
 * @brief Used only to initialize the command structs function pointer to NULL
 * 
 */
void initCommands(void);

/**
 * @brief Executes the command in the next_command struct
 * 
 */
void taskExecuteCommand(void);

/**
 * @brief Sets the next_command struct members according to the buffered string
 * 
 */
void taskParseCommand(void);


typedef void (*CommandFunc)(uint8_t, uint8_t *);

/**
 * @brief struct to store the next command func and arguments
 * 
 */
typedef struct command
{
    CommandFunc func;
    uint8_t room_nr;
    uint8_t arg[4];
} command;

#endif