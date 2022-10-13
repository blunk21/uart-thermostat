#include "lm35.h"
#include "uart.h"
#include "inttypes.h"
#include "stdio.h"
#include "room_manager.h"
#include <avr/io.h>

static uint16_t current_temp = 0;
static uint8_t *current_temp_string[5];
char debugstring[100];

/**
 * @brief Initialize ADC peripheral
 *
 */
void initADC()
{
    ADMUX |= _BV(REFS0);                            // select voltage reference Vcc 2.65V
    ADCSRA |= _BV(ADPS0) | _BV(ADPS1) | _BV(ADPS2); // prescaler 128	-> 125kHz
    // ADCSRA |= _BV(ADIE);                            // adc interrupt enable

    ADCSRA |= _BV(ADEN); // enable adc
    // ADCSRA |= _BV(ADSC); //first conv lasts longer

    //do a quick measurement so that we have a current_temp at the beginning
    taskPollTemp();
}

/**
 * @brief Initiates a conversion and stores a value in integer and string format.
 *
 */
void taskPollTemp()
{
    ADCSRA |= _BV(ADSC);
    loop_until_bit_is_set(ADCSRA, ADIF);
    uint16_t adcval = ADC;
    registerTemp(adcval);

   

}

/**
 * @brief Logs the adc value for debugging purposes
 *
 * @param val
 */
void log_adc_val(uint16_t val)
{
    uint8_t printable_adc_val[50];
    sprintf(printable_adc_val, "The ADC value is: %d\n", val);
    uartTransmitStr(printable_adc_val);
    uartTransmitStr("\n");
}

/**
 * @brief Converts the ADC value into temperature and stores it in string and integer format.
 *
 * @param val
 */
void registerTemp(uint16_t val)
{
    uint16_t tmp = 0;
    tmp = val * 500;
    tmp = tmp / 102;
    uint8_t decimal = tmp % 10;
    uint8_t temp = (tmp / 10) % 100;
    current_temp = tmp;
    sprintf(current_temp_string, "%d.%d", temp, decimal);


    uint8_t room = 4;
    while(room!=0)
    {
        setRoomTemp(room,tmp+(room-1)*5);
        room--;
    }
    // log_adc_val(tmp);
}

uint16_t getCurrentTemp()
{
    return current_temp;
}

/**
 * @brief Get the Temp String
 *
 * @return uint8_t*
 */
uint8_t *getTempString()
{
    return current_temp_string;
}
