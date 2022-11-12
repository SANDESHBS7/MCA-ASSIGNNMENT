#include "pll.h"
#include "timer0.h"
#include "LPC213x.h"

int main(){
 
 IO0DIR = 0xFFFFFFFF; //output pin
 init_pll(); //initialize the pin
 IO0SET = 0xFFFFFFFF;
 delay_milliseconds(10);
 IO0CLR = 0xFFFFFFFF;
 delay_microseconds(10);
 }
 