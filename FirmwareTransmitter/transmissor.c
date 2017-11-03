#include "transmissor.h"
char pacote[7]="123456";
void teclado() {
   output_high(PIN_A0);
   output_low(PIN_A1);
   output_low(PIN_A2);
   if(input_state(PIN_B4))
      pacote[0]='A';
   else if(input_state(PIN_B5))
      pacote[0]='L';
   else pacote[0]='1';
   if(input_state(PIN_B6))
      pacote[1]='B';
   else if(input_state(PIN_B7))
      pacote[1]='M';
   else pacote[1]='2';
   output_low(PIN_A0);
   output_high(PIN_A1);
   output_low(PIN_A2);
   if(input_state(PIN_B4))
      pacote[2]='C';
   else if(input_state(PIN_B5))
      pacote[2]='N';
   else pacote[2]='3';
   if(input_state(PIN_B6))
      pacote[3]='D';
   else if(input_state(PIN_B7))
      pacote[3]='O';
   else pacote[3]='4';
   output_low(PIN_A0);
   output_low(PIN_A1);
   output_high(PIN_A2);
   if(input_state(PIN_B4))
      pacote[4]='E';
   else if(input_state(PIN_B5))
      pacote[4]='P';
   else pacote[4]='5';
   if(input_state(PIN_B6))
      pacote[5]='F';
   else if(input_state(PIN_B7))
      pacote[5]='Q';
   else pacote[5]='6';
}
void main() {
   while(true) {
   teclado();
   putc(0x01);
   printf("%s",pacote);
   }
}
