#include "stm32f0xx.h"
#include "delay.h"



int main()
{
 RCC->AHBENR   |= 0x00100000; // DPIOD clock hatti açildi

 GPIOD->MODER  |= 0x15400000; // GPIOD portunun 14,13,12 ve 11. pinlerini çikis olarak ayarladik
	
	
	while(1)
	{
	  GPIOD->ODR ^= 1<<11;	//11. numarali pini lojik-1 yapiyor
    delay_ms(500);		
	  GPIOD->ODR ^= 1<<12;
    delay_ms(500);			
	  GPIOD->ODR ^= 1<<13;
    delay_ms(500);			
	  GPIOD->ODR ^= 1<<14;
		delay_ms(500);			
	}
	
}
	