#ifndef _UART_H_
#define _UART_H_

#include <inttypes.h>

#define BAUD_RATE 115200
#define UBRR ((F_CPU / 8 / BAUD_RATE) - 1)
#define UART_BUFFER_SIZE 100

void initUART(uint8_t);
void uartTransmitChar(uint8_t *);
void uartReceive(void);
void uartTransmitStr(uint8_t *);
void check_uart_error(void);
uint8_t checkUartBuffer(void);
void echoUartBuffer(void);

#endif