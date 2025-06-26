#ifndef UART_H
#define UART_H

#include <avr/io.h>
#include <stdio.h> // Include this for FILE structure

// Function to initialize UART
void uart_init(unsigned int baud);

// Function to transmit a character via UART
void uart_transmit(char data);

// Function to print a string via UART
void uart_print(const char *str);

// Redirect printf to UART
int uart_putchar(char ch, FILE *f);

#endif // UART_H
