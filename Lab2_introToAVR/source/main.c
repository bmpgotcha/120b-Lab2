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
    unsigned char tmpC = 0x00;
    unsigned char tmpA = 0x00;
    unsigned char tmpB = 0x00;
    unsigned char tmpD = 0x00;
    unsigned char cntavail;
    unsigned char i;
    while (1) {

	PORTD = tmpD;
    }
    return 1;
}
