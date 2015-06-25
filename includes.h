/*
 * includes.h
 *
 *  Created on: Jun 25, 2015
 *      Author: m
 */

#ifndef INCLUDES_H_
#define INCLUDES_H_

void SYS_INIT();
void ADC_INIT();
void UART_INIT();

void INIT_CAN();
void INIT_SPI();

void INIT_SD();

void UART_WRITE(char* buffer, unsigned long int size);
void CAN_WRITE(char* buffer, unsigned long int size);


void CAN_READ(char* buffer, unsigned long int size);

unsigned int READ_ADC();




#endif /* INCLUDES_H_ */
