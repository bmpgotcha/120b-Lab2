/*	Author: bport008
 *  Partner(s) Name: 
 *	Lab Section:
 *	Assignment: Lab #  Exercise #
 *	Exercise Description: [optional - include for your own benefit]
 *
 *	I acknowledge all content contained herein, excluding template or example
 *	code, is my own original work.
 */
#include <avr/io.h>
#ifdef _SIMULATE_
#include "simAVRHeader.h"
#endif

int main(void) {
    /* Insert DDR and PORT initializations */
    DDRA = 0x00; PORTA = 0xFF;
    DDRB = 0x00; PORTB = 0xFF;
    DDRC = 0x00; PORTC = 0xFF;
    DDRD = 0xFF; PORTD = 0x00;
    /* Insert your solution below */
    unsigned char tmpA = 0x00;
    unsigned char tmpB = 0x00;
    unsigned char tmpC = 0x00;
    unsigned char tmpD = 0x00;
    unsigned char weightTotal;
    while (1) {
	tmpA = PINA;
	tmpB = PINB;
	tmpC = PINC;
	weightTotal = tmpA + tmpB + tmpC;

	if((weightTotal) > 0x8C) {
	    tmpD = tmpD | 0x01;
	}
	if(((tmpA - tmpC) > 0x50) || ((tmpC - tmpA) > 0x50)) {
	    tmpD = tmpD | 0x02;
	}
	tmpD = tmpD | (weightTotal << 2);
	PORTD = tmpD;
    }
    return 1;
}
