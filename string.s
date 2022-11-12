	AREA Program, CODE, READONLY
    ENTRY

Main
        LDR R0, =Table        ; Load the address of the lookup table
        MOV R1, #-1            ; Start count at -1
Loop
        ADD R1, R1, #1        ; Increment count
        LDRB R2, [R0], #1        ; Load the first byte into R2
        CMP R2, #0            
        BNE Loop            

       STR R1, CharCount        
        SWI &11

Table     DCB "hello, world", 0
        ALIGN

CharCount

       DCB    0            ; Storage for count

       END