#ifndef _IO_MANAGER_H_
#define _IO_MANAGER_H_
#include <inttypes.h>

/**
 * @brief Initialize the module
 *
 */
void initIOManager(void);

/**
 * @brief Initialize the LEDs
 *
 */
void initLEDS(void);

/**
 * @brief Task to check for a button press
 *
 */
void taskButtonCheck(void);

/**
 * @brief Task to control the actuators
 *
 */
void taskManageActuators(void);

#endif