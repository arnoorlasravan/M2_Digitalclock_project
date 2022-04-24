/*
 * homeDoor_sensor.c
 *
 * Created: 23-04-2022 14:36:46
 * Author : A. SRAVAN
 
 */ 

#include <avr/io.h>

int main(void)

{
	DDRB=DDRB & 0b11111101;//fd FOR HIGH

	DDRC=DDRC | 0b01000000;//40 FOR LOW
	while(1)

	{
        if(PINB & 0b00000010)//02 check door open 
			PORTC=PORTC | 0b01000000;//40  SETED HIGH LED
		else
			PORTC=PORTC & 0b10111111;//bf SETED LOW LED
	}

	return 0;

}
