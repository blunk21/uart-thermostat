#include "lm35.h"
#include "uart.h"
#include "inttypes.h"
#include "stdio.h"
#include "room_manager.h"
#include <avr/io.h>

static uint16_t current_temp = 0, adcval = 0;
static uint8_t *current_temp_string[5];

char debugstring[100];

void initADC()
{
    ADMUX |= _BV(REFS0);                            // select voltage reference Vcc 2.65V
    ADCSRA |= _BV(ADPS0) | _BV(ADPS1) | _BV(ADPS2); // prescaler 128	-> 125kHz
    // ADCSRA |= _BV(ADIE);                            // adc interrupt enable

    ADCSRA |= _BV(ADEN); // enable adc
    // ADCSRA |= _BV(ADSC); //first conv lasts longer

    // do a quick measurement so that we have a current_temp at the beginning
    taskPollTemp();
    taskRegisterTemp();
}

void taskPollTemp()
{
    ADCSRA |= _BV(ADSC);
    loop_until_bit_is_set(ADCSRA, ADIF);
    adcval = ADC;
}

void log_adc_val(uint16_t val)
{
    uint8_t printable_adc_val[50];
    sprintf(printable_adc_val, "The ADC value is: %d\n", val);
    uartTransmitStr(printable_adc_val);
    uartTransmitStr("\n");
}

void taskRegisterTemp()
{
    uint16_t tmp = 0;
    tmp = adcval * 500;
    tmp = tmp / 102;
    uint8_t decimal = tmp % 10;
    uint8_t temp = (tmp / 10) % 100;
    current_temp = tmp;

    uint8_t room = 4;
    while (room != 0)
    {
        if (room % 2) // pseudo temp for simulation
        {
            setRoomTemp(room, tmp + (room - 1) * 10);
        }
        else
        {
            setRoomTemp(room, tmp - (room - 1) * 20);
        }
        room--;
    }
}

uint16_t getCurrentTemp()
{
    return current_temp;
}

uint8_t *getTempString()
{
    return current_temp_string;
}
