#ifndef _DISPLAY_MANAGER_H_
#define _DISPLAY_MANAGER_H_
#include <inttypes.h>

/**
 * @brief Initialize the display manager
 *
 */
void initDisplayManager(void);

/**
 * @brief Set the Current Page
 *
 * @param page
 */
void setCurrentPage(uint8_t page);

/**
 * @brief Print the page according to the current_page var
 *
 */
void taskPrintPage(void);

/**
 * @brief Print the main menu
 *
 */
static void printMainMenu(void);

/**
 * @brief Print a page and set status led accordingly
 *
 * @param current_page number of the page to be printed 1-4
 */
static void printRoomPage();

#endif