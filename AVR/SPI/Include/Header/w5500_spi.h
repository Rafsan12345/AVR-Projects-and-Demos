/*
 * w5500_spi.h
 *
 * Created: 04-10-2024 10:00:10
 *  Author: DCL
 */ 


#ifndef W5500_SPI_H_
#define W5500_SPI_H_
#include <stdio.h>
#include <avr/io.h>
void SPI_Master_Init();


void SPI_Master_Tx(char a);


char SPI_Master_Rx();





#endif /* W5500_SPI_H_ */