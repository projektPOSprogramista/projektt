#include "includes.h"

#define BAUD_RATE 115200

int main()
{
	SYS_INIT();
	ADC_INIT();
	UART_INIT();
	INIT_CAN();
	INIT_SPI();
	INIT_SD();

	unsigned long int counter=0;
	unsigned long int time=150;
	unsigned int adc1,adc2,adc3;
	char *canInput;

	while(time)
	{
		if(counter>=1000)
		{
			time--;
			counter = 0;
			adc1 = READ_ADC();
			adc2 = READ_ADC();
			adc3 = READ_ADC();

			UART_WRITE(
				"Channel 1 value : 00000\n\r",
				sizeof("Channel 1 value : 00000\n\r")
				);
			UART_WRITE(
				"Channel 2 value : 00000\n\r",
				sizeof("Channel 1 value : 00000\n\r")
				);
			UART_WRITE(
				"Channel 3 value : 00000\n\r",
				sizeof("Channel 1 value : 00000\n\r")
				);

			CAN_WRITE("000:000",9);
			CAN_READ(canInput,6);

			UART_WRITE("CAN Message: '000:000'\n\r",25);

		}

		counter++;
	}


	return 0;
}
