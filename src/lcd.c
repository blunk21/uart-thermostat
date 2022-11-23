
#define F_CPU 16000000UL
#include <util/delay.h>
#include <avr/io.h>
#include "lcd.h"
#include <avr/interrupt.h>

void initLCD(void)
{
	LCD_DATA_DDR |= 0xF0;
	LCD_CMD_DDR |= 1 << LCD_RS | 1 << LCD_RW | 1 << LCD_E;
	PORTF &= ~(LCD_RW);
	PORTF &= ~(LCD_RS);
	PORTE = 0x20; // 4. bites
	LCD_enable();
	LCD_enable();
	LCD_enable();
	LCD_command(0x28); // 4. bites 2 soros
	LCD_command(0x28);
	LCD_command(0x28);
	LCD_command(0x02); // kurzor alaphelyzetbe allitasa
	LCD_command(0x01); // kepernyo t�rl�s
	LCD_command(0x0C); // kepernyo be
}
void LCD_enable()
{
	LCD_CMD_PORT |= 1 << LCD_E;
	_delay_us(2);
	LCD_CMD_PORT &= ~(1 << LCD_E);
	_delay_us(2);
}

void LCD_command(uint8_t cmd)
{

	_delay_ms(2);
	LCD_CMD_PORT &= ~(1 << LCD_RS); // command
	LCD_CMD_PORT &= ~(1 << LCD_RW);
	LCD_CMD_PORT &= ~(1 << LCD_E);

	LCD_DATA_PORT &= ~(0xF0);
	LCD_DATA_PORT |= cmd & 0xF0;
	LCD_enable();
	LCD_DATA_PORT &= ~(0xF0);
	LCD_DATA_PORT |= (cmd << 4) & 0xF0;
	LCD_enable();
}
void LCD_data(uint8_t data)
{

	_delay_ms(2);
	LCD_CMD_PORT |= (1 << LCD_RS); // data
	LCD_CMD_PORT &= ~(1 << LCD_RW);
	LCD_CMD_PORT &= ~(1 << LCD_E);

	LCD_DATA_PORT &= ~(0xF0);
	LCD_DATA_PORT |= data & 0xF0;
	LCD_enable();
	LCD_DATA_PORT &= ~(0xF0);
	LCD_DATA_PORT |= (data << 4) & 0xF0;
	LCD_enable();
}
void LCD_str(uint8_t *t)
{

	while (*t)
	{
		LCD_data(*t++);
	}
}
void LCD_pos(uint8_t x, uint8_t y)
{

	// 1. sor 0x00-0x0F
	// 2. sor 0x40-0x4F
	// 3. sor 0x10-0x1F
	// 4. sor 0x50-0x5F
	switch (x)
	{
	case 1:
		LCD_command((0x80 | 0x00) + y);
		break;
	case 2:
		LCD_command((0x80 | 0x40) + y);
		break;
	case 3:
		LCD_command((0x80 | 0x10) + y);
		break;
	case 4:
		LCD_command((0x80 | 0x50) + y);
		break;
	}
}

void lcdPrintRows(uint8_t **row_array)
{

	LCD_command(0x01);
	uint8_t i = 0;
	while (i < 4)
	{
		LCD_pos(i + 1, 1);
		LCD_str(*(row_array + i));
		i++;
	}
}