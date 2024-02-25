/*
 * Инициализация и драйверы периферии МК
 *
 * Author: Makoveev V.V. <vvmakoveev@yandex.ru>
 */

#include "periphery_std.h"
#include "macro_reg.h"
#include "stm32f4xx.h"


/*
 * Инициализация RCC
 * Источник HSE
 * Предделитель PLL M - 4
 * Множитель PLL N - 168
 * Делитель PLL p - 2
 * SYSCLK - 168 MHz
 * AHB предделитель - 1
 * APB1 предделитель - 4
 * APB2 предделитель - 2
 */
void rcc_init(void)
{		
	
		/* Обнуление регистра*/
		RCC_CR_REG->full_register = 0x00000000UL;
		/* Включение HSE */
		RCC_CR_REG->bite_register.bit_16 = 1;
		/* Ожидание включения HSE*/
		while(RCC_CR_REG->bite_register.bit_17 == 0){};
		
		/* Задержка чтения флеш памяти - 5 wait states */
		FLASH_ACR_REG->bite_register.bit_0 = 1;
		FLASH_ACR_REG->bite_register.bit_1 = 0;
		FLASH_ACR_REG->bite_register.bit_2 = 1;
		FLASH_ACR_REG->bite_register.bit_8 = 1;
	
		/* Источник PLL - внешний кварц */
		RCC_PLLCFGR_REG->bite_register.bit_22 = 1;
	
		/* Обнуление делителей */
		RCC_PLLCFGR_REG->bite_register.bit_0 = 0;
		RCC_PLLCFGR_REG->bite_register.bit_1 = 0;
		RCC_PLLCFGR_REG->bite_register.bit_2 = 0;
		RCC_PLLCFGR_REG->bite_register.bit_3 = 0;
		RCC_PLLCFGR_REG->bite_register.bit_4 = 0;
		RCC_PLLCFGR_REG->bite_register.bit_5 = 0;
		RCC_PLLCFGR_REG->bite_register.bit_6 = 0;
		RCC_PLLCFGR_REG->bite_register.bit_7 = 0;
		RCC_PLLCFGR_REG->bite_register.bit_8 = 0;
		RCC_PLLCFGR_REG->bite_register.bit_9 = 0;
		RCC_PLLCFGR_REG->bite_register.bit_10 = 0;
		RCC_PLLCFGR_REG->bite_register.bit_11 = 0;
		RCC_PLLCFGR_REG->bite_register.bit_12 = 0;
		RCC_PLLCFGR_REG->bite_register.bit_13 = 0;
		RCC_PLLCFGR_REG->bite_register.bit_14 = 0;
		RCC_PLLCFGR_REG->bite_register.bit_24 = 0;
		RCC_PLLCFGR_REG->bite_register.bit_25 = 0;
		RCC_PLLCFGR_REG->bite_register.bit_26 = 0;
		RCC_PLLCFGR_REG->bite_register.bit_27 = 0;
				
		/* Предделитель PLL - 4 */
		RCC_PLLCFGR_REG->bite_register.bit_0 = 0;
		RCC_PLLCFGR_REG->bite_register.bit_1 = 0;
		RCC_PLLCFGR_REG->bite_register.bit_2 = 1;
		RCC_PLLCFGR_REG->bite_register.bit_3 = 0;
		RCC_PLLCFGR_REG->bite_register.bit_4 = 0;
		RCC_PLLCFGR_REG->bite_register.bit_5 = 0;
		
		
		/* Множитель PLL - 168*/
		RCC_PLLCFGR_REG->bite_register.bit_6 = 0;
		RCC_PLLCFGR_REG->bite_register.bit_7 = 0;
		RCC_PLLCFGR_REG->bite_register.bit_8 = 0;
		RCC_PLLCFGR_REG->bite_register.bit_9 = 1;
		RCC_PLLCFGR_REG->bite_register.bit_10 = 0;
		RCC_PLLCFGR_REG->bite_register.bit_11 = 1;
		RCC_PLLCFGR_REG->bite_register.bit_12 = 0;
		RCC_PLLCFGR_REG->bite_register.bit_13 = 1;
		RCC_PLLCFGR_REG->bite_register.bit_14 = 0;
		
		/* Делитель на выходе PLL */
		RCC_PLLCFGR_REG->bite_register.bit_16 = 0;
		RCC_PLLCFGR_REG->bite_register.bit_17 = 0;
		
		/* Предделитель шины AHB - 1 */
		RCC_CFGR_REG->bite_register.bit_4 = 0;
		RCC_CFGR_REG->bite_register.bit_5 = 0;
		RCC_CFGR_REG->bite_register.bit_6 = 0;
		RCC_CFGR_REG->bite_register.bit_7 = 0;
		
		/* Предделитель APB1 - 4 */
		RCC_CFGR_REG->bite_register.bit_10 = 1;
		RCC_CFGR_REG->bite_register.bit_11 = 0;
		RCC_CFGR_REG->bite_register.bit_12 = 1;
		
		/* Предделитель APB2 - 2 */
		RCC_CFGR_REG->bite_register.bit_10 = 0;
		RCC_CFGR_REG->bite_register.bit_11 = 0;
		RCC_CFGR_REG->bite_register.bit_12 = 1;
		
		/* Запуск PLL */
		RCC_CR_REG->bite_register.bit_24 = 1;
		/* Ожидание включения PLL */
		while(RCC_CR_REG->bite_register.bit_25 == 0){};			
		
		/* Источник тактирования SystemClock - PLL */
		RCC_CFGR_REG->bite_register.bit_0 = 0;
		RCC_CFGR_REG->bite_register.bit_1 = 1;
			
		/* Ожидание переключения на PLL */
		while(RCC_CFGR_REG->bite_register.bit_3 == 0){};		
}


void mco2_init(void)
{
		/* Тактирование GPIOC */
		RCC_AHB1ENR_REG->bite_register.bit_2 = 1;
		
		/* Предделитель - 4 */
		RCC_CFGR_REG->bite_register.bit_27 = 0;
		RCC_CFGR_REG->bite_register.bit_28 = 1;
		RCC_CFGR_REG->bite_register.bit_29 = 1;

		/* Источник тактирования - SYSCLK*/
		RCC_CFGR_REG->bite_register.bit_30 = 0;
		RCC_CFGR_REG->bite_register.bit_31 = 0;
		/* Настройка пина */
		GPIOC_MODER_REG->bite_register.bit_18 = 0;
		GPIOC_MODER_REG->bite_register.bit_19 = 1;
		GPIOC_OSPEEDR_REG->bite_register.bit_18 = 1;
		GPIOC_OSPEEDR_REG->bite_register.bit_19 = 1;
		GPIOC_AFR2_REG->bite_register.bit_4 = 0;
		GPIOC_AFR2_REG->bite_register.bit_5 = 0;
		GPIOC_AFR2_REG->bite_register.bit_6 = 0;
		GPIOC_AFR2_REG->bite_register.bit_7 = 0;
}


/*
 * Реализация задержки (TIMER6)
 */
volatile unsigned int delay_tick;

void init_tim6()
{
	RCC_APB1ENR_REG->bite_register.bit_4 = 1;
	TIM6->PSC = 42000 - 1;
	TIM6->ARR = 2;
	TIM6->DIER = 1;

	NVIC_EnableIRQ(TIM6_DAC_IRQn);
	TIM6->CR1 = 1;
}


void delay_ms(unsigned int delay)
{
	delay_tick = 0;
	init_tim6();
	
	while(delay_tick < delay);
	
	TIM6->CR1 = 0;
}

void TIM6_DAC_IRQHandler(void)
{
	TIM6->SR = 0;
	delay_tick++;
}
