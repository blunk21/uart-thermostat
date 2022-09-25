#ifndef _LM35_H_
#define _LM35_H_
#include "inttypes.h"

void initializeADC();
void adcConversion();
void log_adc_val(uint16_t);
void registerTemp(uint16_t);
void write_to_adc_buffer(uint16_t);
uint8_t* getTempString();





#endif