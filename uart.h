#ifndef _UART_H_
#define _UART_H_

#include <inttypes.h>

#define BAUD_RATE 115200
#define UBRR ((F_CPU / 8 / BAUD_RATE) - 1)
#define UART_BUFFER_SIZE 80

void initialize_uart(uint8_t);
void uart_transmit_char(uint8_t *);
void uart_receive(void);
void uart_transmit_str(uint8_t *);
void check_uart_error();
uint8_t check_buffer();
void echo_buffer();

#endif