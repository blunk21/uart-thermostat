#include <avr/io.h>
#include "uart.h"
#include "commands.h"
#include <string.h>

uint8_t fetchCommand(uint8_t *dest)
{
    uint8_t *tmp[9];
    uint8_t i = 1;
    //read out trash until start char found
    while (*tmp != ':')
    {
        uint8_t success = read_buffer(tmp);
        if (!success)
            return 0;
    }
    //read out 8 bytes
    while (i != 8)
    {
        uint8_t success = read_buffer(&tmp[i]);
        if (!success)
            return 0;
        i++;
    }
    //if stop char not found, ignore
    if (tmp[8] != '!')
        return 0;
    else
        tmp[9] = '\0';
    strcpy(dest,tmp);
    return 1;
}