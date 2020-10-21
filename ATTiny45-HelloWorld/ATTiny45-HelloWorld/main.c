/*
 * ATTiny45-HelloWorld.c
 *
 * Created: 7/2/2020 7:41:50 AM
 * Author : mathe
 */ 

#include <avr/io.h>

#define F_CPU 1000000L
#include <util/delay.h>


int main(void)
{
	DDRB |= (1 << PB3) | (1 << PB4);
	
    while (1) 
    {
		PORTB |= (1 << PB3) | (1 << PB4);
		_delay_ms(1000);
		PORTB &= ~((1 << PB3) | (1 << PB4));
		_delay_ms(1000);
    }
}

