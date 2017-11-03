#include "receptor.h"

char comando='Z';
void main() {
   setup_adc_ports(NO_ANALOGS);
   setup_adc(ADC_CLOCK_DIV_2);
   setup_psp(PSP_DISABLED);
   setup_spi(SPI_SS_DISABLED);
   setup_timer_0(RTCC_INTERNAL|RTCC_DIV_1);
   setup_timer_1(T1_DISABLED);
   setup_timer_2(T2_DISABLED,0,1);
   setup_comparator(NC_NC_NC_NC);
   setup_vref(FALSE);

   while(true) {
      comando=getc();
      if(comando==0x01) {
         comando=getc();
         if(comando=='A')
         output_high(PIN_B0);
         else if(comando=='L')
         output_high(PIN_B1);
         else{
         output_low(PIN_B0);
         output_low(PIN_B1);
         }
         comando=getc();
         if(comando=='B')
         output_high(PIN_B2);
         else if(comando=='M')
         output_high(PIN_B3);
         else{
         output_low(PIN_B2);
         output_low(PIN_B3);
         }
         comando=getc();
         if(comando=='C')
         output_high(PIN_B4);
         else if(comando=='N')
         output_high(PIN_B5);
         else{
         output_low(PIN_B4);
         output_low(PIN_B5);
         }
         comando=getc();
         if(comando=='D')
         output_high(PIN_B6);
         else if(comando=='O')
         output_high(PIN_B7);
         else{
         output_low(PIN_B6);
         output_low(PIN_B7);
         }
         comando=getc();
         if(comando=='E')
         output_high(PIN_A0);
         else if(comando=='P')
         output_high(PIN_A1);
         else{
         output_low(PIN_A0);
         output_low(PIN_A1);
         }
         comando=getc();
         if(comando=='F')
         output_high(PIN_A2);
         else if(comando=='Q')
         output_high(PIN_A3);
         else{
         output_low(PIN_A2);
         output_low(PIN_A3);
         }
      }
   }
}
