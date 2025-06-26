#include <avr/io.h>
#include <util/delay.h>
#include "uart.h"

// Define the FILE structure for `printf` functionality
FILE uart_output = FDEV_SETUP_STREAM(uart_putchar, NULL, _FDEV_SETUP_WRITE);

// Function to initialize USART0
void uart_init(void) {
	unsigned int ubrr_value = UBRR_VALUE;
	UBRR0H = (unsigned char)(ubrr_value >> 8);  // Set the high byte of the UBRR
	UBRR0L = (unsigned char)ubrr_value;         // Set the low byte of the UBRR

	UCSR0B = (1 << RXEN0) | (1 << TXEN0);  // Enable receiver and transmitter
	UCSR0C = (1 << UCSZ01) | (1 << UCSZ00);  // Set for 8 data bits, 1 stop bit, no parity
}

// Function to send a character via UART0
void uart_transmit(unsigned char data) {
	while (!(UCSR0A & (1 << UDRE0)));  // Wait until the transmit buffer is empty
	UDR0 = data;                       // Load data into the UART data register
}

// Function to receive a character via UART0
unsigned char uart_receive(void) {
	while (!(UCSR0A & (1 << RXC0)));  // Wait until data is received
	return UDR0;                      // Return the received data
}

// Function to transmit a string via UART0
void uart_print(const char *str) {
	while (*str) {
		uart_transmit(*str++);
	}
}

// Redirect `printf` to UART using `putchar`
int uart_putchar(char ch, FILE *stream) {
	if (ch == '\n') {
		uart_transmit('\r');  // Carriage return before newline (for terminal compatibility)
	}
	uart_transmit(ch);        // Transmit the actual character
	return 0;
}
