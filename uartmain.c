#include "pll.h"
#include "uart.h"
#include "LPC213x.h"

int main(){
	unsigned char temp;
	init_pll(); //initialise the pll
	init_uart0(); //initialise the uart0, baud rate 9600
	while(1){
		temp=receive_char_uart0();
		transmit_char_uart0(temp);
		}
	return 0;
	}