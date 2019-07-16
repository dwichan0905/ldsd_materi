#ifndef F_CPU
#define F_CPU 8000000UL // 16 MHz clock speed
#endif

#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	DDRC = 0x01;
	PORTC = 0x00;
	
	while(1)
	{
		//Rotate Motor to 0 degree
		PORTC = 0x01;
		_delay_us(1000);
		PORTC = 0x00;
		
		_delay_ms(2000);
		
		//Rotate Motor to 90 degree
		PORTC = 0x01;
		_delay_us(1500);
		PORTC = 0x00;
		
		_delay_ms(2000);
		
		//Rotate Motor to 180 degree
		PORTC = 0x01;
		_delay_us(2000);
		PORTC = 0x00;
		
		_delay_ms(2000);
	}
}