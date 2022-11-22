/*
 * matrix.c
 *
 * Created: 29/12/2021 11:20:54
 *  Author: Gergo
 */

#include "matrix.h"
#include "uart.h"
#include <avr/io.h>
#include <avr/delay.h>

const uint8_t billtomb[12] = {69, 14, 13, 11, 22, 21, 19, 38, 37, 35, 70, 67};
// 0, 1, 2, 3, 4....             #, *

uint8_t matrixButton(void)
{
	uint8_t m_button = 0;

	uint8_t num, bill;
	uint8_t row = 0x08;
	while (row <= 0x40)
	{
		PORTC |= row;
		_delay_ms(1);
		bill = PINC & 0x7f;
		num = 1;
		while (num < 5)
		{
			// uartTransmitChar('.');
			if (bill == billtomb[num])
			{
				// m_button = num;
				// while ((PINC & 0x7f) == billtomb[num]); // nyomva tartas
				return num;
			}

			// m_button = 12;
			num++;
		}
		// if (row == 0x40) row = 0x08;
		// else
		// {
		PORTC &= ~(row);
		row = (row << 1);
	}
	return 12;
}

void initMatrix(void)
{

	DDRC |= 0x78; // matrix
}