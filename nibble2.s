	TTL Ch4Ex5 - nibble
	AREA RESET, CODE, READONLY
	ENTRY

MAIN 
	LDR R1,Value ; Loading the byte value into R1
	LDR R2,MASK; Loading the bit mask
	MOV R3,R1,LSR #0X4;
	MOV R3,R3,LSL #0X8;
	AND R1,R1,R3
	ADD R1,R1,R3
	LDR R4,Addrstr
	STR R1,[R4]
	NOP
	
	
Value DCB &5F
	ALIGN
MASK DCW &000F
	ALIGN
Addrstr DCD &40000000
	END
 