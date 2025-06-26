#include "uart.h"
#define F_CPU 8000000UL
void uart_init(unsigned int baud) {
	// Set baud rate
	unsigned int ubrr = F_CPU / 16 / baud - 1;
	UBRRH = (unsigned char)(ubrr >> 8); // Set high byte
	UBRRL = (unsigned char)(ubrr);      // Set low byte

	UCSRB = (1 << TXEN); // Enable the transmitter
	UCSRC = (1 << URSEL) | (1 << UCSZ1) | (1 << UCSZ0); // Asynchronous mode, 8 data bits, 1 stop bit, no parity
}

void uart_transmit(char data) {
	while (!(UCSRA & (1 << UDRE))); // Wait until the data register is empty
	UDR = data;                     // Transmit data
}

void uart_print(const char *str) {
	while (*str) {
		uart_transmit(*str++);
	}
}

int uart_putchar(char ch, FILE *f) {
	if (ch == '\n') {
		uart_transmit('\r'); // Transmit carriage return before newline
	}
	uart_transmit(ch); // Transmit the actual character
	return ch;
}
