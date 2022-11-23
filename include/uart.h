#ifndef _UART_H_
#define _UART_H_

#include <inttypes.h>

#define BAUD_RATE 115200
#define UBRR ((F_CPU / 8 / BAUD_RATE) - 1)
#define UART_BUFFER_SIZE 60

/**
 * @brief Initialize UART interface
 *
 * @param ubrr
 */
void initUART(uint8_t);

/**
 * @brief Transmits a character via UART
 *
 * @param cp
 */
void uartTransmitChar(uint8_t);
void uartReceive(void);

/**
 * @brief Trnsmits a string via UART
 *
 * @param str
 */
void uartTransmitStr(uint8_t *);

/**
 * @brief Checks the UART error registers
 *
 */
void check_uart_error(void);

/**
 * @brief read buffer into destination
 *
 * @param dest
 * @return uint8_t 1 on successful read, 0 on empty
 */
uint8_t read_buffer(uint8_t *);

/**
 * @brief check if the buffer is full
 *
 * @return uint8_t 1 if true
 */
static uint8_t _buffer_is_full(void);

/**
 * @brief check if buffer is empty
 *
 * @return uint8_t 1 if empty 0 if not
 */
static uint8_t _buffer_is_empty(void);

/**
 * @brief Writes a character to the buffer if there is space
 *
 * @param data
 */
void write_buffer(uint8_t data);

typedef struct uart_buffer
{
    uint8_t length;
    uint8_t head;
    uint8_t tail;
    uint8_t *buffer[UART_BUFFER_SIZE];
} uart_buffer;

#endif