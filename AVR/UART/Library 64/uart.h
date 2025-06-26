#ifndef UART_H_
#define UART_H_

#include <stdio.h>

// Function declarations
void uart_init(void);
void uart_transmit(unsigned char data);
unsigned char uart_receive(void);
void uart_print(const char *str);
int uart_putchar(char ch, FILE *stream);

// Macro for setting baud rate
#define F_CPU 8000000UL  // CPU frequency
#define BAUD 9600        // Baud rate
#define UBRR_VALUE F_CPU/16/BAUD-1  // UBRR calculation for baud rate

// External declaration of the FILE structure to use with printf
extern FILE uart_output;

#endif /* UART_H_ */
