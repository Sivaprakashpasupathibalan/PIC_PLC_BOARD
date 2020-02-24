/*
 * File:   PLC_IO.c
 * Author: SIVAPRAKASH PASUPATHIBALAN
 * Created on 24 February, 2020, 10:44 AM
 * This is the Library File to control the specified IO pins in PIC based PLC Board NSK 8 IN and 5 OUT Board defines the enum and functions
 */
#ifndef PLC_IO_H
#define	PLC_IO_H

#define R1 0x08
#define R2 0x10
#define R3 0x20
#define R4 0x10
#define R5 0x20

typedef enum RELAY {RLY1 = 0,RLY2,RLY3,RLY4,RLY5} RLY;;
typedef enum INPUT {IN1 = 0,IN2,IN3,IN4,IN5,IN6,IN7,IN8} IN;;
typedef enum STATUS {LOW = 0 , HIGH} STAT;;

void  RELAY_SET(RLY  x , STAT status);
int PIN_STATUS(IN x);
void INIT_IO();

#endif	
