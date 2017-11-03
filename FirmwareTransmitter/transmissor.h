#include <16F628A.h>
#device *=16

#FUSES NOWDT                    //No Watch Dog Timer
#FUSES EC_IO                    //External clock
#FUSES NOPUT                    //No Power Up Timer
#FUSES NOPROTECT                //Code not protected from reading
#FUSES NOBROWNOUT               //No brownout reset
#FUSES NOMCLR                   //Master Clear pin used for I/O
#FUSES NOLVP                    //No low voltage prgming, B3(PIC16) or B5(PIC18) used for I/O
#FUSES NOCPD                    //No EE protection
#FUSES RESERVED                 //Used to set the reserved FUSE bits

#use delay(clock=4000000)
#use rs232(baud=9600,parity=E,xmit=PIN_B1,rcv=PIN_B2,bits=8)

