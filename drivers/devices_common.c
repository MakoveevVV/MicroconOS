#include "devices_common.h"
#include "periphery_std.h"

/*
 * ���������� ������������� �������� (TIMER5)
 */
void encoder_init(void)
{
	RCC->AHB1ENR |= RCC_AHB1ENR_GPIOAEN;

	GPIOA->MODER &= ~GPIO_MODER_MODER0_0;
	GPIOA->MODER |= GPIO_MODER_MODER0_1;
	
	GPIOA->PUPDR &= GPIO_PUPDR_PUPD0_0;
	GPIOA->PUPDR &= GPIO_PUPDR_PUPD0_1;
	
	GPIOA->AFR[0] |= 1 << 1;
	
	
	GPIOA->MODER &= ~GPIO_MODER_MODER1_0;
	GPIOA->MODER |= GPIO_MODER_MODER1_1;
	
	GPIOA->PUPDR &= GPIO_PUPDR_PUPD1_0;
	GPIOA->PUPDR &= GPIO_PUPDR_PUPD1_1;
	
	GPIOA->AFR[0] |= 1 << 5;
	
	RCC->APB1ENR |= RCC_APB1ENR_TIM5EN;
	
	TIM5->CCMR1 |= TIM_CCMR1_CC1S_0 | TIM_CCMR1_CC2S_0;
	TIM5->CCER &= ~(TIM_CCER_CC1P | TIM_CCER_CC2P);
	
	TIM5->SMCR |= TIM_SMCR_SMS_0;
	
	TIM5->CCMR1 |= (TIM_CCMR1_IC1F_0 | TIM_CCMR1_IC1F_1);
	
	TIM5->ARR = 30;
	
	TIM5->CR1 |= TIM_CR1_CEN;
}













