#ifndef _LM35_H_
#define _LM35_H_
#include "inttypes.h"

void initADC(void);
void taskPollTemp(void);
void log_adc_val(uint16_t);
void registerTemp(uint16_t);
void write_to_adc_buffer(uint16_t);
uint8_t *getTempString(void);
uint16_t getCurrentTemp(void);
void setRoomTemp(uint8_t, uint16_t);

#endif