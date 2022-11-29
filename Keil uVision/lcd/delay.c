#include "delay.h"

uint32_t SysTickCounter;

   void SysTick_Handler()
   {
	    if(SystckCounter != 0x00)
	     {
	     	 SystckCounter--;
	     }	
   }

   void delay_ms(uint32_t delay)
	 {
	    SystckCounter = delay;
		    while(SystckCounter != 0){
		     
				}
	 }
	 
	  void delay_s(uint8_t delay)
	 {
	    SystckCounter = delay * 1000;
		    while(SystckCounter != 0){
		     
				}
	 }