/*
 * File:   main.c
 * Author: SIVAPRAKASH PASUPATHI BALAN
 *
 * Created on 24 February, 2020, 10:31 AM
 */
#include <xc.h>
#include <pic16f886.h>
#include "CONFIG.h"
#include "PLC_IO.h"


void main() {
    INIT_IO();                  // Library Function to initialize the PORT PINS for  PIC_PLC_BOARDS
    while(1)
    {
    if(PIN_STATUS(IN8) == 1)
       RELAY_SET(RLY1,HIGH);
    if(PIN_STATUS(IN8) == 0)
       RELAY_SET(RLY1,LOW);
    RELAY_SET(RLY2,HIGH);
    RELAY_SET(RLY3,LOW);
    RELAY_SET(RLY4,LOW);
    RELAY_SET(RLY5,LOW);
    }
}
