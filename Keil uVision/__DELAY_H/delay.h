/*
    Bekletme Fonksiyonu header dosyasi
		
*/


#ifndef __DELAY_H 
#define __DELAY_H

#include "stm32f0xx.h"
#include "stdint.h"

extern uint32_t  SystckCounter; // SysTick Handler i�erisindeki saya�

void delay_ms(uint32_t); // mili-saniye parametreli bekletme fonksiyonu

void delay_s(uint8_t); // Saniye parametreli bekletme fonksiyonu

#endif 