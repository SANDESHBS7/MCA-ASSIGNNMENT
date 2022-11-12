#include <lpc214x.h>
#include <string.h>
#define bit(x) (1<<x)
#define delay_ms for(unsigned int i=0;i<12000;i++);



void lcd_int();
void dat(unsigned char);
void cmd(unsigned char);
int check_palindrome(unsigned char*);
void string(unsigned char *);
void test1();


