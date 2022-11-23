#include <avr/io.h>
#include "display_manager.h"
#include "room_manager.h"
#include "lcd.h"
#include <stdio.h>
#include "uart.h"

static uint8_t current_page = 2;

void initDisplayManager(void)
{
    initLCD();
    // uartTransmitStr("Initializing display manager\n");

    // LEDS
    DDRE |= 0x04;
    DDRC |= 0x80;
}

void setCurrentPage(uint8_t page)
{
    current_page = page;
}

void taskPrintPage(void)
{
    printRoomPage(current_page);
}

static void printMainMenu(void)
{
    uint8_t *main_menu[] = {
        "Press number to",
        "see the room's", "details",
        ""};
    lcdPrintRows(main_menu);
}

static void printRoomPage()
{
    if (!current_page)
    {
        printMainMenu();
        return;
    }

    uint8_t row = 4;
    uint16_t room_temp = getRoomTemp(current_page);
    uint16_t target_temp = getTargetRoomTemp(current_page);

    // set leds
    if (target_temp > room_temp)
        PORTC |= 0x80;
    else
        PORTC &= ~0x80;
    if (getRoomCooling(current_page))
    {
        if (target_temp < room_temp)
            PORTE |= 0x08;
        else
            PORTE &= ~0x08;
    }
    else
        PORTE &= ~0x08;

    // print the page
    while (row > 0)
    {
        LCD_pos(row, 1);
        uint8_t str[16];
        // sprintf(str,"               ");
        switch (row)
        {
        case 1:
            sprintf(str, "    Room %d    ", current_page);
            LCD_str(str);
            break;
        case 2:
            sprintf(str, "%d.%dC", (room_temp / 10) % 100, room_temp % 10);
            LCD_str(str);
            break;
        case 3:
            sprintf(str, "Target: %d.%dC", (target_temp / 10) % 100, target_temp % 10);
            LCD_str(str);
            break;
        case 4:
            if (getRoomCooling(current_page))
                sprintf(str, "Cooling ON ");
            else
                sprintf(str, "Cooling OFF");
            LCD_str(str);
            break;

        default:
            break;
        }
        row--;
    }
}