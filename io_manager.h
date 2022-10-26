#ifndef _IO_MANAGER_H_
#define _IO_MANAGER_H_
#include <inttypes.h>
void initIOManager(void);
void initLEDS(void);
void taskManageIO(void);
void taskButtonCheck(void);
void checkButtonPress(void);
void controlActuators(void);
void taskManageActuators(void);

#endif