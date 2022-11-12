#include "uart.h"
#include "LPC213x.h"

void init_uart0(){
	PINSEL0=0x5; //for TxD0 andRxD0
	U0LCR=0x83; //8-data bits, 1 stop hit, disable parity and enable DLAB
	U0DLL=0x87; //
	U0DLM=0x1;
	U0LCR=0x03; //clear DLAB
	}

	void transmit_char_uart0(unsigned char c){
	while(U0LSR & (1<<5) ==0);
	U0THR = c;
	}

	char receive_char_uart0(){
	unsigned temp_recv_var;
	while(U0LSR & (1<<0) == 0);
	temp_recv_var = U0RBR;
	return temp_recv_var;
	}