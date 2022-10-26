#ifndef _DISPLAY_MANAGER_H_
#define _DISPLAY_MANAGER_H_
#include <inttypes.h>

void initDisplayManager(void);
void setCurrentPage(uint8_t page);
void taskPrintPage(void);
static void printMainMenu(void);
static void printRoomPage();

#endif