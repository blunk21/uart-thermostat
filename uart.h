#ifndef UART_H
#define UART_H

#define BAUD_RATE 115200
#define UBRR ((F_CPU/8/BAUD_RATE)-1)
#define UART_BUFFER_SIZE 4
#include <inttypes.h>

void initialize_uart(uint8_t);
void uart_transmit_char(uint8_t*);
void uart_receive(void);
void uart_transmit_str(uint8_t*);
void check_uart_error();

#endif