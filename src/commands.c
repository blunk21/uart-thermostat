#include <avr/io.h>
#include "uart.h"
#include "commands.h"
#include <string.h>
#include "room_manager.h"
#include <stdlib.h>

void commandTestTask(void)
{
    uint8_t cmd[9];
    uint8_t success = 0;
    success = fetchCommand(cmd);
    if (success)
        uartTransmitStr(cmd);
    else
        uartTransmitStr("Command fetch failed\n");
}

void parseCommand(uint8_t *cmd_str)
{
    command new_command;
    switch (cmd_str[2])
    {
    case 't':
        new_command.func = &setTargetRoomTemp;
        break;
    case 'c':
        new_command.func = &setRoomCooling;
        break;
    }

    new_command.room_nr = '0' + cmd_str[3];
    strncpy(new_command.arg,&cmd_str[3],3);
}                   //<---------------------- ADD TO COMMAND BUFFER YOU MOROn

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