/*
 * homeDoor_sensor.c
 *
 * Created: 23-04-2022 14:36:46
 * Author : A. SRAVAN
 */ 

#include <avr/io.h>

int main(void)

{
	DDRB=DDRB & 0b11111101;//fd Input pin b of controller logic 0 for high

	DDRC=DDRC | 0b01000000;//40 Output pin c of controller logic 1 for low

	while(1)

	{
        if(PINB & 0b00000010)//02 check door open 
			PORTC=PORTC | 0b01000000;//40 seted high LED
		else
			PORTC=PORTC & 0b10111111;//bf seted low LED
	}

	return 0;

}
