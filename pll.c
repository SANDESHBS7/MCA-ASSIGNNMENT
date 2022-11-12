#include "pll.h"
#include "LPC213x.h"

//fosc = 12Mhz, CCLK = 60Mhz, PCLK = 60Mhz
void init_pll(){

  PLL0CON = 0x01; // enable PLL
  PLL0CFG = 0x24; // MSEL and PSEL bits (M+1 = 5, P=2)
  PLL0FEED = 0xaa; // send feed sequence
  PLL0FEED = 0x55;
  while(!(PLL0STAT & (1<<10))); // check the lock bit
  PLL0CON = 0x03;  
  PLL0FEED = 0xaa;
  PLL0FEED = 0x55;
  VPBDIV = 0x01; 
  }