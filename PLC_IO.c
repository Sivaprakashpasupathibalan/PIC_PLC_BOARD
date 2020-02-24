/*
 * File:   PLC_IO.c
 * Author: SIVAPRAKASH PASUPATHIBALAN
 * Created on 24 February, 2020, 10:44 AM
 * This is the Library File to control the specified IO pins in PIC based PLC Board NSK 8 IN and 5 OUT Board
 */
#include <xc.h>
#include <stdlib.h>
#include "PLC_IO.h"

int PIN_STATUS(IN x)                           //To Read the Status of the Boards in PIC_PLC
{
    if(x == IN1)
    {
        //char IN_STAT = PORTB;
        if(PORTBbits.RB0 == 1 )
            return 1;
        else
            return 0;    
    } 
    else if(x == IN2)
    {
        //char IN_STAT = PORTB;
        if(PORTBbits.RB1 == 1 )
            return 1;
        else
            return 0;    
    }
    else if(x == IN3)
    {
        //char IN_STAT = PORTB;
        if(PORTBbits.RB2 == 1 )
            return 1;
        else
            return 0;    
    }
    else if(x == IN4)
    {
        //char IN_STAT = PORTB;
        if(PORTBbits.RB3 == 1 )
            return 1;
        else
            return 0;    
    }
    else if(x == IN5)
    {
        //char IN_STAT = PORTB;
        if(PORTBbits.RB4 == 1 )
            return 1;
        else
            return 0;    
    }
    else if(x == IN6)
    {
        //char IN_STAT = PORTB;
        if(PORTBbits.RB5 == 1 )
            return 1;
        else
            return 0;    
    }
    else if(x == IN7)
    {
        //char IN_STAT = PORTB;
        if(PORTBbits.RB6 == 1 )
            return 1;
        else
            return 0;    
    }
    else if(x == IN8)
    {
        //char IN_STAT = PORTB;
        if(PORTBbits.RB7 == 1 )
            return 1;
        else
            return 0;    
    }
}
void  RELAY_SET(RLY  x , STAT status)     // Gets the Relay Pin and Sets the Status of the Relay
{
    if(x == RLY1)
    {   
        if(status == HIGH)
             PORTC = PORTC | R1;
        if(status == LOW)
            PORTC = PORTC & (~R1);
    }
    else if(x == RLY2)
    {   
        if(status == HIGH)
             PORTC = PORTC | R2;
        if(status == LOW)
            PORTC = PORTC & (~R2);
    }
    else if(x == RLY3)
    {   
        if(status == HIGH)
             PORTC = PORTC | R3;
        if(status == LOW)
            PORTC = PORTC & (~R3);
    }
    else if(x == RLY4)
    {   
        if(status == HIGH)
             PORTA = PORTA | R4;
        if(status == LOW)
            PORTA = PORTA & (~R4);
    }
    else if(x == RLY5)
    {   
        if(status == HIGH)
             PORTA = PORTA | R5;
        if(status == LOW)
            PORTA = PORTA & (~R5);
    }
}
void INIT_IO()                         // IO initialization to set the output pins and Set pins low during Initialization
{
    TRISC = 0x00;
    TRISA = 0x00;
    PORTC = 0x00;
    PORTA = 0x00;
    ANSELH = 0x00;   //To SeT Digital Pins will change in ADC header files
    PORTB = 0xFF;
}
