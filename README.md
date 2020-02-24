# PIC_PLC_BOARD
This is the Library for PIC based PLC Board from NSK electronics.in with 5 Output and 8 INPUT , 4 ADC channels , RS485/UART


It has the functions which will perform same as arduino on PIC16F886

Library Modules Consists of PLC_IO.C which has the functions to Initialize the PORTS for Output and Inputs with Settings.

CONFIG.H contains the fuses for PIC16F886

PLC_IO.C Contains functions INIT_IO() it initializes the PORT functions, PIN_STATUS(IN8) returns the value 1 or 0 depending upon the pin status,
RELAY_SET(RLY1,HIGH) It sets the RELAY HIGH AND LOW when function is called with parameters.
