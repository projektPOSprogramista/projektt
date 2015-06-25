#include <unistd.h>
#include <stdio.h>
#include "includes.h"

#define wait(miliseconds)   {volatile unsigned long int x=0;\
							for(unsigned long int time=0;time<miliseconds;time++){\
								for(; x!=10000000ull;x++){} x=0;\
							}}


void SYS_INIT()
{
	wait(1);
}

void ADC_INIT()
{
	wait(20);
}

void UART_INIT()
{
	wait(2);
}

void INIT_CAN()
{
	wait(100);
}

void INIT_SPI()
{
	wait(1);
}

void INIT_SD()
{
	wait(100);
}

void UART_WRITE(char* buffer, unsigned long int size)
{
	size*=2;
	wait(size);
}

void CAN_WRITE(char* buffer, unsigned long int size)
{
	wait(size);
}

void CAN_READ(char* buffer, unsigned long int size)
{

	wait(size+1);
}

unsigned int READ_ADC()
{
	wait(1);

}
