#include <avr/io.h>
#include "uart.h"
#include "commands.h"
#include <string.h>
#include "room_manager.h"
#include <stdlib.h>

command next_command;
static uint8_t command_string[9];
void initCommands(void)
{
    next_command.func = NULL;
}

void taskExecuteCommand(void)
{
    if (next_command.func == NULL)
        return;
    else
    {
        next_command.func(next_command.room_nr, next_command.arg);
        next_command.func = NULL;
    }
}

void taskFetchCommand(void)
{
    uint8_t success = 0;
    success = fetchCommand(command_string);
}

void taskParseCommand()
{
    if (command_string[0] != NULL)
    {
        switch (command_string[2])
        {
        case 't':
            next_command.func = &setTargetRoomTemp;
            break;
        case 'c':
            next_command.func = &setRoomCooling;
            break;
        }

        next_command.room_nr = command_string[3] - '0';
        strncpy(next_command.arg, &command_string[4], 3);
        command_string[0] = NULL;
        return;
    }
    return;
}

uint8_t fetchCommand(uint8_t *dest)
{
    uint8_t container[9];
    uint8_t i = 1, tmp = 0;
    // read out trash until start char found
    while (tmp != ':')
    {
        uint8_t success = read_buffer(&tmp);
        if (!success)
        {
            // uartTransmitStr("Start char not found\n");
            return 0;
        }
    }
    container[0] = tmp;
    // read out 8 bytes

    while (i != 8)
    {
        uint8_t success = read_buffer(container + i);
        if (!success)
            return 0;
        i++;
    }
    // if stop char not found, ignore
    if (container[7] != '!')
    {
        // uartTransmitStr("No stopchar");
        // uartTransmitStr(container);
        // uartTransmitChar("\n");
        return 0;
    }

    else
        container[8] = '\0';
    strcpy(dest, container);
    return 1;
}