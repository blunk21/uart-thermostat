/*
 * lcd.h
 *
 * Created: 08/09/2021 21:03:11
 *  Author: Gergo
 */ 


#ifndef LCD_H_
#define LCD_H_
#include <avr/io.h>
#define LCD_RS	(PF1)
#define LCD_RW	(PF2)
#define LCD_E	(PF3)

#define LCD_CMD_DDR	(DDRF)
#define LCD_DATA_DDR	(DDRE)

#define LCD_CMD_PORT (PORTF)
#define LCD_DATA_PORT (PORTE)

void initLCD(void);
void LCD_command(uint8_t cmd);
void LCD_data(uint8_t data);
void LCD_enable(void);
void LCD_str(uint8_t *t);
void LCD_pos(uint8_t x, uint8_t y);
void lcdPrintRows(uint8_t**);




#endif /* LCD_H_ */