#ifndef _UART_H_
#define _UART_H_

#include <inttypes.h>

#define BAUD_RATE 115200
#define UBRR ((F_CPU / 8 / BAUD_RATE) - 1)
#define UART_BUFFER_SIZE 60

void initUART(uint8_t);
void uartTransmitChar(uint8_t*);
void uartReceive(void);
void uartTransmitStr(uint8_t *);
void check_uart_error(void);
void echoUartBuffer(void);
uint8_t read_buffer(void);
static uint8_t _buffer_is_full(void);
static uint8_t _buffer_is_empty(void);
void write_buffer(uint8_t data);



typedef struct uart_buffer{
    uint8_t length;
    uint8_t head;
    uint8_t tail;
    uint8_t* buffer[UART_BUFFER_SIZE];
}uart_buffer;

#endif