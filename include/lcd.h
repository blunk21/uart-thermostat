/*
 * lcd.h
 *
 * Created: 08/09/2021 21:03:11
 *  Author: Gergo
 */

#ifndef _LCD_H_
#define _LCD_H_
#include <avr/io.h>
#define LCD_RS (PF1)
#define LCD_RW (PF2)
#define LCD_E (PF3)

#define LCD_CMD_DDR (DDRF)
#define LCD_DATA_DDR (DDRE)

#define LCD_CMD_PORT (PORTF)
#define LCD_DATA_PORT (PORTE)

/**
 * @brief Initialize the LCD
 *
 */
void initLCD(void);

/**
 * @brief Send a command to the display
 *
 * @param cmd code of the command
 */
void LCD_command(uint8_t cmd);

/**
 * @brief Send data to the display
 *
 * @param data to be sent
 */
void LCD_data(uint8_t data);

/**
 * @brief Sends enable signal to the display
 *
 */
void LCD_enable(void);

/**
 * @brief Write a string on the display
 *
 * @param t
 */
void LCD_str(uint8_t *t);

/**
 * @brief Sets the position of the cursor on the display
 *
 * @param x
 * @param y
 */
void LCD_pos(uint8_t x, uint8_t y);

/**
 * @brief Prints multiple rows on the display
 *
 */
void lcdPrintRows(uint8_t **);

#endif /* _LCD_H_ */