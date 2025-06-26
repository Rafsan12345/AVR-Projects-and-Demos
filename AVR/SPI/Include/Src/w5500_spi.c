/*
 * w5500_spi.c
 *
 * Created: 04-10-2024 10:00:30
 *  Author: DCL
 */ 
#include <stdio.h>
#include <avr/io.h>
void SPI_Master_Init()
{
	PORTB |= (1 << 0);
	SPCR = 0x50;
	PORTB &= ~(1 << 0);
}

void SPI_Master_Tx(char a)
{
	SPDR = a;
	while ((SPSR & 0x80) == 0);
}

char SPI_Master_Rx()
{
	while ((SPSR & 0x80) == 0);
	return SPDR;
}
