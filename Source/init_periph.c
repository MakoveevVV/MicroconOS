#include "init_periph.h"
#include "macro_reg.h"
#include "stm32f4xx.h"
/*
 * Èíèöèàëèçàöèÿ ñòàíäàğòíîé ïåğèôåğèè ÌÊ
 * TODO 
 */

/*
 * Èíèöèàëèçàöèÿ RCC
 * Èñòî÷íèê HSE
 * Ïğåääåëèòåëü PLL M - 4
 * Ìíîæèòåëü PLL N - 168
 * Äåëèòåëü PLL p - 2
 * SYSCLK - 168 MHz
 * AHB ïğåääåëèòåëü - 1
 * APB1 ïğåääåëèòåëü - 4
 * APB2 ïğåääåëèòåëü - 2
 */
void rcc_init(void)
{		
	
		/* Îáíóëåíèå ğåãèñòğà*/
		RCC_CR_REG->full_register = 0x00000000UL;
		/* Âêëş÷åíèå HSE */
		RCC_CR_REG->bite_register.bit_16 = 1;
		/* Îæèäàíèå âêëş÷åíèÿ HSE*/
		while(RCC_CR_REG->bite_register.bit_17 == 0){};
		
		/* Çàäåğæêà ÷òåíèÿ ôëåø ïàìÿòè - 5 wait states */
		FLASH_ACR_REG->bite_register.bit_0 = 1;
		FLASH_ACR_REG->bite_register.bit_1 = 0;
		FLASH_ACR_REG->bite_register.bit_2 = 1;
		FLASH_ACR_REG->bite_register.bit_8 = 1;
	
		/* Èñòî÷íèê PLL - âíåøíèé êâàğö */
		RCC_PLLCFGR_REG->bite_register.bit_22 = 1;
	
		/* Îáíóëåíèå äåëèòåëåé */
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
				
		/* Ïğåääåëèòåëü PLL - 4 */
		RCC_PLLCFGR_REG->bite_register.bit_0 = 0;
		RCC_PLLCFGR_REG->bite_register.bit_1 = 0;
		RCC_PLLCFGR_REG->bite_register.bit_2 = 1;
		RCC_PLLCFGR_REG->bite_register.bit_3 = 0;
		RCC_PLLCFGR_REG->bite_register.bit_4 = 0;
		RCC_PLLCFGR_REG->bite_register.bit_5 = 0;
		
		
		/* Ìíîæèòåëü PLL - 168*/
		RCC_PLLCFGR_REG->bite_register.bit_6 = 0;
		RCC_PLLCFGR_REG->bite_register.bit_7 = 0;
		RCC_PLLCFGR_REG->bite_register.bit_8 = 0;
		RCC_PLLCFGR_REG->bite_register.bit_9 = 1;
		RCC_PLLCFGR_REG->bite_register.bit_10 = 0;
		RCC_PLLCFGR_REG->bite_register.bit_11 = 1;
		RCC_PLLCFGR_REG->bite_register.bit_12 = 0;
		RCC_PLLCFGR_REG->bite_register.bit_13 = 1;
		RCC_PLLCFGR_REG->bite_register.bit_14 = 0;
		
		/* Äåëèòåëü íà âûõîäå PLL */
		RCC_PLLCFGR_REG->bite_register.bit_16 = 0;
		RCC_PLLCFGR_REG->bite_register.bit_17 = 0;
		
		/* Ïğåääåëèòåëü øèíû AHB - 1 */
		RCC_CFGR_REG->bite_register.bit_4 = 0;
		RCC_CFGR_REG->bite_register.bit_5 = 0;
		RCC_CFGR_REG->bite_register.bit_6 = 0;
		RCC_CFGR_REG->bite_register.bit_7 = 0;
		
		/* Ïğåääåëèòåëü APB1 - 4 */
		RCC_CFGR_REG->bite_register.bit_10 = 1;
		RCC_CFGR_REG->bite_register.bit_11 = 0;
		RCC_CFGR_REG->bite_register.bit_12 = 1;
		
		/* Ïğåääåëèòåëü APB2 - 2 */
		RCC_CFGR_REG->bite_register.bit_10 = 0;
		RCC_CFGR_REG->bite_register.bit_11 = 0;
		RCC_CFGR_REG->bite_register.bit_12 = 1;
		
		/* Çàïóñê PLL */
		RCC_CR_REG->bite_register.bit_24 = 1;
		/* Îæèäàíèå âêëş÷åíèÿ PLL */
		while(RCC_CR_REG->bite_register.bit_25 == 0){};			
		
		/* Èñòî÷íèê òàêòèğîâàíèÿ SystemClock - PLL */
		RCC_CFGR_REG->bite_register.bit_0 = 0;
		RCC_CFGR_REG->bite_register.bit_1 = 1;
			
		/* Îæèäàíèå ïåğåêëş÷åíèÿ íà PLL */
		while(RCC_CFGR_REG->bite_register.bit_3 == 0){};	
		
}


void mco2_init(void)
{
		/* Òàêòèğîâàíèå GPIOC */
		RCC_AHB1ENR_REG->bite_register.bit_2 = 1;
		
		/* Ïğåääåëèòåëü - 4 */
		RCC_CFGR_REG->bite_register.bit_27 = 0;
		RCC_CFGR_REG->bite_register.bit_28 = 1;
		RCC_CFGR_REG->bite_register.bit_29 = 1;

		/* Èñòî÷íèê òàêòèğîâàíèÿ - SYSCLK*/
		RCC_CFGR_REG->bite_register.bit_30 = 0;
		RCC_CFGR_REG->bite_register.bit_31 = 0;
		/* Íàñòğîéêà ïèíà */
		GPIOC_MODER_REG->bite_register.bit_18 = 0;
		GPIOC_MODER_REG->bite_register.bit_19 = 1;
		GPIOC_OSPEEDR_REG->bite_register.bit_18 = 1;
		GPIOC_OSPEEDR_REG->bite_register.bit_19 = 1;
		GPIOC_AFR2_REG->bite_register.bit_4 = 0;
		GPIOC_AFR2_REG->bite_register.bit_5 = 0;
		GPIOC_AFR2_REG->bite_register.bit_6 = 0;
		GPIOC_AFR2_REG->bite_register.bit_7 = 0;
}











