#include "timer0.h"
#include "LPC213x.h"

void delay_milliseconds(unsigned int milliseconds){

	T0CTCR = 0x0; //selet timer mode
	T0TCR = 0x00; //timer off
	T0PR = 59999; //prescale value
	T0TCR = 0x02; //timer reset
	T0TCR = 0x01; // timer on
	while(T0TC < milliseconds);
	T0TCR = 0x00; //timer off
	T0TC = 0; //clear the TC
}

void delay_microseconds(unsigned int microseconds){

	T0CTCR = 0x0; //selet timer mode
	T0TCR = 0x00; //timer off
	T0PR = 59999; //prescale value
	T0TCR = 0x02; //timer reset
	T0TCR = 0x01; // timer on
	while(T0TC < microseconds);
	T0TCR = 0x00; //timer off
	T0TC = 0; //clear the TC
}