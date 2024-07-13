#ifndef __MACRO_REG_H
#define __MACRO_REG_H
/*
 * Макросы для доступа к каждому биту регистров периферии
 */

#include "type.h"

/* Регистры GPIO порта A */
#define GPIOA_MODER_REG     ((volatile register_typedef *)(0x40020000))
#define GPIOA_OTYPER_REG    ((volatile register_typedef *)(0x40020004))
#define GPIOA_OSPEEDR_REG	((volatile register_typedef *)(0x40020008))
#define GPIOA_PUPDR_REG     ((volatile register_typedef *)(0x4002000C))
#define GPIOA_IDR_REG       ((volatile register_typedef *)(0x40020010))
#define GPIOA_ODR_REG       ((volatile register_typedef *)(0x40020014))
#define GPIOA_BSRR_REG      ((volatile register_typedef *)(0x40020018))
#define GPIOA_LCKR_REG      ((volatile register_typedef *)(0x4002001C))
#define GPIOA_AFR1_REG      ((volatile register_typedef *)(0x40020020))
#define GPIOA_AFR2_REG      ((volatile register_typedef *)(0x40020024)) 
	
/* Регистры GPIO порта B */
#define GPIOB_MODER_REG     ((volatile register_typedef *)(0x40020400))
#define GPIOB_OTYPER_REG    ((volatile register_typedef *)(0x40020404))
#define GPIOB_OSPEEDR_REG	((volatile register_typedef *)(0x40020408))
#define GPIOB_PUPDR_REG     ((volatile register_typedef *)(0x4002040C))
#define GPIOB_IDR_REG       ((volatile register_typedef *)(0x40020410))
#define GPIOB_ODR_REG       ((volatile register_typedef *)(0x40020414))
#define GPIOB_BSRR_REG      ((volatile register_typedef *)(0x40020418))
#define GPIOB_LCKR_REG      ((volatile register_typedef *)(0x4002041C))
#define GPIOB_AFR1_REG      ((volatile register_typedef *)(0x40020420))
#define GPIOB_AFR2_REG      ((volatile register_typedef *)(0x40020424)) 
	
/* Регистры GPIO порта C */
#define GPIOC_MODER_REG     ((volatile register_typedef *)(0x40020800))
#define GPIOC_OTYPER_REG    ((volatile register_typedef *)(0x40020804))
#define GPIOC_OSPEEDR_REG	((volatile register_typedef *)(0x40020808))
#define GPIOC_PUPDR_REG     ((volatile register_typedef *)(0x4002080C))
#define GPIOC_IDR_REG       ((volatile register_typedef *)(0x40020810))
#define GPIOC_ODR_REG       ((volatile register_typedef *)(0x40020814))
#define GPIOC_BSRR_REG      ((volatile register_typedef *)(0x40020818))
#define GPIOC_LCKR_REG      ((volatile register_typedef *)(0x4002081C))
#define GPIOC_AFR1_REG      ((volatile register_typedef *)(0x40020820))
#define GPIOC_AFR2_REG      ((volatile register_typedef *)(0x40020824)) 

/* Регистры GPIO порта D */
#define GPIOD_MODER_REG     ((volatile register_typedef *)(0x40020C00))
#define GPIOD_OTYPER_REG    ((volatile register_typedef *)(0x40020C04))
#define GPIOD_OSPEEDR_REG	((volatile register_typedef *)(0x40020C08))
#define GPIOD_PUPDR_REG     ((volatile register_typedef *)(0x40020C0C))
#define GPIOD_IDR_REG       ((volatile register_typedef *)(0x40020C10))
#define GPIOD_ODR_REG       ((volatile register_typedef *)(0x40020C14))
#define GPIOD_BSRR_REG      ((volatile register_typedef *)(0x40020C18))
#define GPIOD_LCKR_REG      ((volatile register_typedef *)(0x40020C1C))
#define GPIOD_AFR1_REG      ((volatile register_typedef *)(0x40020C20))
#define GPIOD_AFR2_REG      ((volatile register_typedef *)(0x40020C24)) 

/* Регистры GPIO порта E */
#define GPIOE_MODER_REG     ((volatile register_typedef *)(0x40021000))
#define GPIOE_OTYPER_REG    ((volatile register_typedef *)(0x40021004))
#define GPIOE_OSPEEDR_REG	((volatile register_typedef *)(0x40021008))
#define GPIOE_PUPDR_REG     ((volatile register_typedef *)(0x4002100C))
#define GPIOE_IDR_REG       ((volatile register_typedef *)(0x40021010))
#define GPIOE_ODR_REG       ((volatile register_typedef *)(0x40021014))
#define GPIOE_BSRR_REG      ((volatile register_typedef *)(0x40021018))
#define GPIOE_LCKR_REG      ((volatile register_typedef *)(0x4002101C))
#define GPIOE_AFR1_REG      ((volatile register_typedef *)(0x40021020))
#define GPIOE_AFR2_REG      ((volatile register_typedef *)(0x40021024))

/* Регистры RCC */
#define RCC_CR_REG          ((volatile register_typedef *)(0x40023800))
#define RCC_PLLCFGR_REG     ((volatile register_typedef *)(0x40023804))
#define RCC_CFGR_REG        ((volatile register_typedef *)(0x40023808))
#define RCC_CIR_REG         ((volatile register_typedef *)(0x4002380C))
#define RCC_AHB1RSTR_REG    ((volatile register_typedef *)(0x40023810))
#define RCC_AHB2RSTR_REG    ((volatile register_typedef *)(0x40023814))
#define RCC_AHB3RSTR_REG    ((volatile register_typedef *)(0x40023818))
#define RCC_APB1RSTR_REG    ((volatile register_typedef *)(0x40023820))
#define RCC_APB2RSTR_REG    ((volatile register_typedef *)(0x40023824))
#define RCC_AHB1ENR_REG     ((volatile register_typedef *)(0x40023830))
#define RCC_AHB2ENR_REG     ((volatile register_typedef *)(0x40023834))
#define RCC_AHB3ENR_REG     ((volatile register_typedef *)(0x40023838))
#define RCC_APB1ENR_REG     ((volatile register_typedef *)(0x40023840))
#define RCC_APB2ENR_REG     ((volatile register_typedef *)(0x40023844))	
#define RCC_AHB1LPENR_REG   ((volatile register_typedef *)(0x40023850))
#define RCC_AHB2LPENR_REG   ((volatile register_typedef *)(0x40023854))
#define RCC_AHB3LPENR_REG   ((volatile register_typedef *)(0x40023858))
#define RCC_APB1LPENR_REG   ((volatile register_typedef *)(0x40023860))
#define RCC_APB2LPENR_REG   ((volatile register_typedef *)(0x40023864))
#define RCC_BDCR_REG        ((volatile register_typedef *)(0x40023870))
#define RCC_CSR_REG         ((volatile register_typedef *)(0x40023874))
#define RCC_SSCGR_REG       ((volatile register_typedef *)(0x40023880))
#define RCC_PLLI2SCFGR_REG  ((volatile register_typedef *)(0x40023884))

/* Регистры SPI1 */
#define SPI1_CR1_REG        ((volatile register_typedef *)(0x40013000))
#define SPI1_CR2_REG        ((volatile register_typedef *)(0x40013004))
#define SPI1_SR_REG         ((volatile register_typedef *)(0x40013008))
#define SPI1_DR_REG         ((volatile register_typedef *)(0x4001300C))
#define SPI1_CRCPR_REG      ((volatile register_typedef *)(0x40013010))
#define SPI1_RXCRCR_REG     ((volatile register_typedef *)(0x40013014))
#define SPI1_TXCRCR_REG     ((volatile register_typedef *)(0x40013018))
#define SPI1_I2SCFGR_REG    ((volatile register_typedef *)(0x4001301C))
#define SPI1_I2SPR_REG      ((volatile register_typedef *)(0x40013020))

/* Регистры SPI2 */
#define SPI2_CR1_REG        ((volatile register_typedef *)(0x40003800))
#define SPI2_CR2_REG        ((volatile register_typedef *)(0x40003804))
#define SPI2_SR_REG         ((volatile register_typedef *)(0x40003808))
#define SPI2_DR_REG         ((volatile register_typedef *)(0x4000380C))
#define SPI2_CRCPR_REG      ((volatile register_typedef *)(0x40003810))
#define SPI2_RXCRCR_REG     ((volatile register_typedef *)(0x40003814))
#define SPI2_TXCRCR_REG     ((volatile register_typedef *)(0x40003818))
#define SPI2_I2SCFGR_REG    ((volatile register_typedef *)(0x4000381C))
#define SPI2_I2SPR_REG      ((volatile register_typedef *)(0x40003820))

/* Регистры SPI3 */
#define SPI3_CR1_REG        ((volatile register_typedef *)(0x40003C00))
#define SPI3_CR2_REG        ((volatile register_typedef *)(0x40003C04))
#define SPI3_SR_REG         ((volatile register_typedef *)(0x40003C08))
#define SPI3_DR_REG         ((volatile register_typedef *)(0x40003C0C))
#define SPI3_CRCPR_REG      ((volatile register_typedef *)(0x40003C10))
#define SPI3_RXCRCR_REG     ((volatile register_typedef *)(0x40003C14))
#define SPI3_TXCRCR_REG     ((volatile register_typedef *)(0x40003C18))
#define SPI3_I2SCFGR_REG    ((volatile register_typedef *)(0x40003C1C))
#define SPI3_I2SPR_REG      ((volatile register_typedef *)(0x40003C20))

/* Регистры I2C1 */
#define I2C1_CR1_REG        ((volatile register_typedef *)(0x40005400))
#define I2C1_CR2_REG        ((volatile register_typedef *)(0x40005404))
#define I2C1_OAR1_REG       ((volatile register_typedef *)(0x40005408))
#define I2C1_OAR2_REG       ((volatile register_typedef *)(0x4000540C))
#define I2C1_DR_REG         ((volatile register_typedef *)(0x40005410))
#define I2C1_SR1_REG        ((volatile register_typedef *)(0x40005414))
#define I2C1_SR2_REG        ((volatile register_typedef *)(0x40005418))
#define I2C1_CCR_REG        ((volatile register_typedef *)(0x4000541C))
#define I2C1_TRISE_REG      ((volatile register_typedef *)(0x40005420))

/* Регистры I2C2 */
#define I2C2_CR1_REG        ((volatile register_typedef *)(0x40005800))
#define I2C2_CR2_REG        ((volatile register_typedef *)(0x40005804))
#define I2C2_OAR1_REG       ((volatile register_typedef *)(0x40005808))
#define I2C2_OAR2_REG       ((volatile register_typedef *)(0x4000580C))
#define I2C2_DR_REG         ((volatile register_typedef *)(0x40005810))
#define I2C2_SR1_REG        ((volatile register_typedef *)(0x40005814))
#define I2C2_SR2_REG        ((volatile register_typedef *)(0x40005818))
#define I2C2_CCR_REG        ((volatile register_typedef *)(0x4000581C))
#define I2C2_TRISE_REG      ((volatile register_typedef *)(0x40005820))

/* Регистры I2C3 */
#define I2C3_CR1_REG        ((volatile register_typedef *)(0x40005C00))
#define I2C3_CR2_REG        ((volatile register_typedef *)(0x40005C04))
#define I2C3_OAR1_REG       ((volatile register_typedef *)(0x40005C08))
#define I2C3_OAR2_REG       ((volatile register_typedef *)(0x40005C0C))
#define I2C3_DR_REG         ((volatile register_typedef *)(0x40005C10))
#define I2C3_SR1_REG        ((volatile register_typedef *)(0x40005C14))
#define I2C3_SR2_REG        ((volatile register_typedef *)(0x40005C18))
#define I2C3_CCR_REG        ((volatile register_typedef *)(0x40005C1C))
#define I2C3_TRISE_REG      ((volatile register_typedef *)(0x40005C20))

/* Регистры USART1 */
#define USART1_SR_REG       ((volatile register_typedef *)(0x40011000))
#define USART1_DR_REG       ((volatile register_typedef *)(0x40011004))
#define USART1_BRR_REG      ((volatile register_typedef *)(0x40011008))
#define USART1_CR1_REG      ((volatile register_typedef *)(0x4001100C))
#define USART1_CR2_REG      ((volatile register_typedef *)(0x40011010))
#define USART1_CR3_REG      ((volatile register_typedef *)(0x40011014))
#define USART1_GTPR_REG     ((volatile register_typedef *)(0x40011018))	

/* Регистры USART2 */
#define USART2_SR_REG       ((volatile register_typedef *)(0x40004400))
#define USART2_DR_REG       ((volatile register_typedef *)(0x40004404))
#define USART2_BRR_REG      ((volatile register_typedef *)(0x40004408))
#define USART2_CR1_REG      ((volatile register_typedef *)(0x4000440С))
#define USART2_CR2_REG      ((volatile register_typedef *)(0x40004410))
#define USART2_CR3_REG      ((volatile register_typedef *)(0x40004414))
#define USART2_GTPR_REG     ((volatile register_typedef *)(0x40004418))	

/* Регистры USART3 */
#define USART3_SR_REG       ((volatile register_typedef *)(0x40004800))
#define USART3_DR_REG       ((volatile register_typedef *)(0x40004804))
#define USART3_BRR_REG      ((volatile register_typedef *)(0x40004808))
#define USART3_CR1_REG      ((volatile register_typedef *)(0x4000480С))
#define USART3_CR2_REG      ((volatile register_typedef *)(0x40004810))
#define USART3_CR3_REG      ((volatile register_typedef *)(0x40004814))
#define USART3_GTPR_REG     ((volatile register_typedef *)(0x40004818))
	
/* Регистры UART4 */
#define UART4_SR_REG        ((volatile register_typedef *)(0x40004С00))
#define UART4_DR_REG        ((volatile register_typedef *)(0x40004С04))
#define UART4_BRR_REG       ((volatile register_typedef *)(0x40004С08))
#define UART4_CR1_REG       ((volatile register_typedef *)(0x40004С0С))
#define UART4_CR2_REG       ((volatile register_typedef *)(0x40004С10))
#define UART4_CR3_REG       ((volatile register_typedef *)(0x40004С14))

/* Регистры UART5 */
#define UART5_SR_REG        ((volatile register_typedef *)(0x40005000))
#define UART5_DR_REG        ((volatile register_typedef *)(0x40005004))
#define UART5_BRR_REG       ((volatile register_typedef *)(0x40005008))
#define UART5_CR1_REG       ((volatile register_typedef *)(0x4000500С))
#define UART5_CR2_REG       ((volatile register_typedef *)(0x40005010))
#define UART5_CR3_REG       ((volatile register_typedef *)(0x40005014))
	
/* Регистры USART6 */
#define USART6_SR_REG       ((volatile register_typedef *)(0x40011400))
#define USART6_DR_REG       ((volatile register_typedef *)(0x40011404))
#define USART6_BRR_REG      ((volatile register_typedef *)(0x40011408))
#define USART6_CR1_REG      ((volatile register_typedef *)(0x4001140С))
#define USART6_CR2_REG      ((volatile register_typedef *)(0x40011410))
#define USART6_CR3_REG      ((volatile register_typedef *)(0x40011414))
#define USART6_GTPR_REG     ((volatile register_typedef *)(0x40011418))

/* Регистры FLASH */
#define FLASH_ACR_REG       ((volatile register_typedef *)(0x40023C00))
#define FLASH_KEYR_REG      ((volatile register_typedef *)(0x40023C04))
#define FLASH_OPTKEYR_REG   ((volatile register_typedef *)(0x40023C08))
#define FLASH_SR_REG        ((volatile register_typedef *)(0x40023C0C))
#define FLASH_CR_REG        ((volatile register_typedef *)(0x40023C10))
#define FLASH_OPTCR_REG     ((volatile register_typedef *)(0x40023C14))

/* Регистры TIMER1 */
#define TIM1_CR1_REG        ((volatile register_typedef *)(0x40010000))
#define TIM1_CR2_REG        ((volatile register_typedef *)(0x40010004))
#define TIM1_SMCR_REG        ((volatile register_typedef *)(0x40010008))
#define TIM1_DIER_REG        ((volatile register_typedef *)(0x4001000C))
#define TIM1_SR_REG        ((volatile register_typedef *)(0x40010010))
#define TIM1_EGR_REG        ((volatile register_typedef *)(0x40010014))
#define TIM1_CCMR1_OUTPUT_REG        ((volatile register_typedef *)(0x40010018))
#define TIM1_CCMR1_INPUT_REG        ((volatile register_typedef *)(0x40010018))	
#define TIM1_CCMR2_OUTPUT_REG        ((volatile register_typedef *)(0x4001001C))
#define TIM1_CCMR2_INPUT_REG        ((volatile register_typedef *)(0x4001001C))
#define TIM1_CCER_REG        ((volatile register_typedef *)(0x40010020))	
#define TIM1_CNT_REG        ((volatile register_typedef *)(0x40010024))	
#define TIM1_PSC_REG        ((volatile register_typedef *)(0x40010028))	
#define TIM1_ARR_REG        ((volatile register_typedef *)(0x4001002C))	
#define TIM1_CCR1_REG        ((volatile register_typedef *)(0x40010034))	
#define TIM1_CCR2_REG        ((volatile register_typedef *)(0x40010038))
#define TIM1_CCR3_REG        ((volatile register_typedef *)(0x4001003C))
#define TIM1_CCR4_REG        ((volatile register_typedef *)(0x40010040))
#define TIM1_DCR_REG        ((volatile register_typedef *)(0x40010048))
#define TIM1_DMAR_REG        ((volatile register_typedef *)(0x4001004C))
#define TIM1_RCR_REG        ((volatile register_typedef *)(0x40010030))
#define TIM1_BDTR_REG        ((volatile register_typedef *)(0x40010044))

/* Регистры TIMER2 */
#define TIM2_CR1_REG        ((volatile register_typedef *)(0x40000000))
#define TIM2_CR2_REG        ((volatile register_typedef *)(0x40000004))
#define TIM2_SMCR_REG        ((volatile register_typedef *)(0x40000008))
#define TIM2_DIER_REG        ((volatile register_typedef *)(0x4000000C))
#define TIM2_SR_REG        ((volatile register_typedef *)(0x40000010))
#define TIM2_EGR_REG        ((volatile register_typedef *)(0x40000014))
#define TIM2_CCMR1_OUTPUT_REG        ((volatile register_typedef *)(0x40000018))
#define TIM2_CCMR1_INPUT_REG        ((volatile register_typedef *)(0x40000018))	
#define TIM2_CCMR2_OUTPUT_REG        ((volatile register_typedef *)(0x4000001C))
#define TIM2_CCMR2_INPUT_REG        ((volatile register_typedef *)(0x4000001C))
#define TIM2_CCER_REG        ((volatile register_typedef *)(0x40000020))	
#define TIM2_CNT_REG        ((volatile register_typedef *)(0x40000024))	
#define TIM2_PSC_REG        ((volatile register_typedef *)(0x40000028))	
#define TIM2_ARR_REG        ((volatile register_typedef *)(0x4000002C))	
#define TIM2_CCR1_REG        ((volatile register_typedef *)(0x40000034))	
#define TIM2_CCR2_REG        ((volatile register_typedef *)(0x40000038))
#define TIM2_CCR3_REG        ((volatile register_typedef *)(0x4000003C))
#define TIM2_CCR4_REG        ((volatile register_typedef *)(0x40000040))
#define TIM2_DCR_REG        ((volatile register_typedef *)(0x40000048))
#define TIM2_DMAR_REG        ((volatile register_typedef *)(0x4000004C))
#define TIM2_OR_REG        ((volatile register_typedef *)(0x40000050))

/* Регистры TIMER3 */
#define TIM3_CR1_REG        ((volatile register_typedef *)(0x40000400))
#define TIM3_CR2_REG        ((volatile register_typedef *)(0x40000404))
#define TIM3_SMCR_REG        ((volatile register_typedef *)(0x40000408))
#define TIM3_DIER_REG        ((volatile register_typedef *)(0x4000040C))
#define TIM3_SR_REG        ((volatile register_typedef *)(0x40000410))
#define TIM3_EGR_REG        ((volatile register_typedef *)(0x40000414))
#define TIM3_CCMR1_OUTPUT_REG        ((volatile register_typedef *)(0x40000418))
#define TIM3_CCMR1_INPUT_REG        ((volatile register_typedef *)(0x40000418))	
#define TIM3_CCMR2_OUTPUT_REG        ((volatile register_typedef *)(0x4000041C))
#define TIM3_CCMR2_INPUT_REG        ((volatile register_typedef *)(0x4000041C))
#define TIM3_CCER_REG        ((volatile register_typedef *)(0x40000420))	
#define TIM3_CNT_REG        ((volatile register_typedef *)(0x40000424))	
#define TIM3_PSC_REG        ((volatile register_typedef *)(0x40000428))	
#define TIM3_ARR_REG        ((volatile register_typedef *)(0x4000042C))	
#define TIM3_CCR1_REG        ((volatile register_typedef *)(0x40000434))	
#define TIM3_CCR2_REG        ((volatile register_typedef *)(0x40000438))
#define TIM3_CCR3_REG        ((volatile register_typedef *)(0x4000043C))
#define TIM3_CCR4_REG        ((volatile register_typedef *)(0x40000440))
#define TIM3_DCR_REG        ((volatile register_typedef *)(0x40000448))
#define TIM3_DMAR_REG        ((volatile register_typedef *)(0x4000044C))

/* Регистры TIMER4 */
#define TIM4_CR1_REG        ((volatile register_typedef *)(0x40000800))
#define TIM4_CR2_REG        ((volatile register_typedef *)(0x40000804))
#define TIM4_SMCR_REG        ((volatile register_typedef *)(0x40000808))
#define TIM4_DIER_REG        ((volatile register_typedef *)(0x4000080C))
#define TIM4_SR_REG        ((volatile register_typedef *)(0x40000810))
#define TIM4_EGR_REG        ((volatile register_typedef *)(0x40000814))
#define TIM4_CCMR1_OUTPUT_REG        ((volatile register_typedef *)(0x40000818))
#define TIM4_CCMR1_INPUT_REG        ((volatile register_typedef *)(0x40000818))	
#define TIM4_CCMR2_OUTPUT_REG        ((volatile register_typedef *)(0x4000081C))
#define TIM4_CCMR2_INPUT_REG        ((volatile register_typedef *)(0x4000081C))
#define TIM4_CCER_REG        ((volatile register_typedef *)(0x40000820))	
#define TIM4_CNT_REG        ((volatile register_typedef *)(0x40000824))	
#define TIM4_PSC_REG        ((volatile register_typedef *)(0x40000828))	
#define TIM4_ARR_REG        ((volatile register_typedef *)(0x4000082C))	
#define TIM4_CCR1_REG        ((volatile register_typedef *)(0x40000834))	
#define TIM4_CCR2_REG        ((volatile register_typedef *)(0x40000838))
#define TIM4_CCR3_REG        ((volatile register_typedef *)(0x4000083C))
#define TIM4_CCR4_REG        ((volatile register_typedef *)(0x40000840))
#define TIM4_DCR_REG        ((volatile register_typedef *)(0x40000848))
#define TIM4_DMAR_REG        ((volatile register_typedef *)(0x4000084C))

/* Регистры TIMER5 */
#define TIM5_CR1_REG        ((volatile register_typedef *)(0x40000C00))
#define TIM5_CR2_REG        ((volatile register_typedef *)(0x40000C04))
#define TIM5_SMCR_REG        ((volatile register_typedef *)(0x40000C08))
#define TIM5_DIER_REG        ((volatile register_typedef *)(0x40000C0C))
#define TIM5_SR_REG        ((volatile register_typedef *)(0x40000C10))
#define TIM5_EGR_REG        ((volatile register_typedef *)(0x40000C14))
#define TIM5_CCMR1_OUTPUT_REG        ((volatile register_typedef *)(0x40000C18))
#define TIM5_CCMR1_INPUT_REG        ((volatile register_typedef *)(0x40000C18))	
#define TIM5_CCMR2_OUTPUT_REG        ((volatile register_typedef *)(0x40000C1C))
#define TIM5_CCMR2_INPUT_REG        ((volatile register_typedef *)(0x40000C1C))
#define TIM5_CCER_REG        ((volatile register_typedef *)(0x40000C20))	
#define TIM5_CNT_REG        ((volatile register_typedef *)(0x40000C24))	
#define TIM5_PSC_REG        ((volatile register_typedef *)(0x40000C28))	
#define TIM5_ARR_REG        ((volatile register_typedef *)(0x40000C2C))	
#define TIM5_CCR1_REG        ((volatile register_typedef *)(0x40000C34))	
#define TIM5_CCR2_REG        ((volatile register_typedef *)(0x40000C38))
#define TIM5_CCR3_REG        ((volatile register_typedef *)(0x40000C3C))
#define TIM5_CCR4_REG        ((volatile register_typedef *)(0x40000C40))
#define TIM5_DCR_REG        ((volatile register_typedef *)(0x40000C48))
#define TIM5_DMAR_REG        ((volatile register_typedef *)(0x40000C4C))
#define TIM5_OR_REG        ((volatile register_typedef *)(0x40000C50))

/* Регистры TIMER6 */
#define TIM6_CR1_REG        ((volatile register_typedef *)(0x40001000))
#define TIM6_CR2_REG        ((volatile register_typedef *)(0x40001004))
#define TIM6_DIER_REG       ((volatile register_typedef *)(0x4000100C))
#define TIM6_SR_REG         ((volatile register_typedef *)(0x40001010))
#define TIM6_EGR_REG        ((volatile register_typedef *)(0x40001014))
#define TIM6_CNT_REG        ((volatile register_typedef *)(0x40001024))
#define TIM6_PSC_REG        ((volatile register_typedef *)(0x40001028))
#define TIM6_ARR_REG        ((volatile register_typedef *)(0x4000102C))

/* Регистры TIMER7 */
#define TIM7_CR1_REG        ((volatile register_typedef *)(0x40001400))
#define TIM7_CR2_REG        ((volatile register_typedef *)(0x40001404))
#define TIM7_DIER_REG       ((volatile register_typedef *)(0x4000140C))
#define TIM7_SR_REG         ((volatile register_typedef *)(0x40001410))
#define TIM7_EGR_REG        ((volatile register_typedef *)(0x40001414))
#define TIM7_CNT_REG        ((volatile register_typedef *)(0x40001424))
#define TIM7_PSC_REG        ((volatile register_typedef *)(0x40001428))
#define TIM7_ARR_REG        ((volatile register_typedef *)(0x4000142C))

/* Регистры TIMER8 */
#define TIM8_CR1_REG        ((volatile register_typedef *)(0x40010400))
#define TIM8_CR2_REG        ((volatile register_typedef *)(0x40010404))
#define TIM8_SMCR_REG        ((volatile register_typedef *)(0x40010408))
#define TIM8_DIER_REG        ((volatile register_typedef *)(0x4001040C))
#define TIM8_SR_REG        ((volatile register_typedef *)(0x40010410))
#define TIM8_EGR_REG        ((volatile register_typedef *)(0x40010414))
#define TIM8_CCMR1_OUTPUT_REG        ((volatile register_typedef *)(0x40010418))
#define TIM8_CCMR1_INPUT_REG        ((volatile register_typedef *)(0x40010418))	
#define TIM8_CCMR2_OUTPUT_REG        ((volatile register_typedef *)(0x4001041C))
#define TIM8_CCMR2_INPUT_REG        ((volatile register_typedef *)(0x4001041C))
#define TIM8_CCER_REG        ((volatile register_typedef *)(0x40010420))	
#define TIM8_CNT_REG        ((volatile register_typedef *)(0x40010424))	
#define TIM8_PSC_REG        ((volatile register_typedef *)(0x40010428))	
#define TIM8_ARR_REG        ((volatile register_typedef *)(0x4001042C))	
#define TIM8_CCR1_REG        ((volatile register_typedef *)(0x40010434))	
#define TIM8_CCR2_REG        ((volatile register_typedef *)(0x40010438))
#define TIM8_CCR3_REG        ((volatile register_typedef *)(0x4001043C))
#define TIM8_CCR4_REG        ((volatile register_typedef *)(0x40010440))
#define TIM8_DCR_REG        ((volatile register_typedef *)(0x40010448))
#define TIM8_DMAR_REG        ((volatile register_typedef *)(0x4001044C))
#define TIM8_RCR_REG        ((volatile register_typedef *)(0x40010430))
#define TIM8_BDTR_REG        ((volatile register_typedef *)(0x40010444))

/* Регистры TIMER9 */
#define TIM9_CR1_REG              ((volatile register_typedef *)(0x40014000))
#define TIM9_CR2_REG              ((volatile register_typedef *)(0x40014004))
#define TIM9_SMCR_REG             ((volatile register_typedef *)(0x40014008))
#define TIM9_DIER_REG             ((volatile register_typedef *)(0x4001400C))
#define TIM9_SR_REG               ((volatile register_typedef *)(0x40014010))
#define TIM9_EGR_REG              ((volatile register_typedef *)(0x40014014))
#define TIM9_CCMR1_OUTPUT_REG     ((volatile register_typedef *)(0x40014018))
#define TIM9_CCMR1_INPUT_REG      ((volatile register_typedef *)(0x40014018))	
#define TIM9_CCER_REG             ((volatile register_typedef *)(0x40014020))	
#define TIM9_CNT_REG              ((volatile register_typedef *)(0x40014024))	
#define TIM9_PSC_REG              ((volatile register_typedef *)(0x40014028))	
#define TIM9_ARR_REG              ((volatile register_typedef *)(0x4001402C))	
#define TIM9_CCR1_REG             ((volatile register_typedef *)(0x40014034))	
#define TIM9_CCR2_REG             ((volatile register_typedef *)(0x40014038))

/* Регистры TIMER10 */
#define TIM10_CR1_REG             ((volatile register_typedef *)(0x40014400))
#define TIM10_DIER_REG            ((volatile register_typedef *)(0x4001440C))
#define TIM10_SR_REG              ((volatile register_typedef *)(0x40014410))
#define TIM10_EGR_REG             ((volatile register_typedef *)(0x40014414))
#define TIM10_CCMR1_OUTPUT_REG    ((volatile register_typedef *)(0x40014418))
#define TIM10_CCMR1_INPUT_REG     ((volatile register_typedef *)(0x40014418))	
#define TIM10_CCER_REG            ((volatile register_typedef *)(0x40014420))	
#define TIM10_CNT_REG             ((volatile register_typedef *)(0x40014424))	
#define TIM10_PSC_REG             ((volatile register_typedef *)(0x40014428))	
#define TIM10_ARR_REG             ((volatile register_typedef *)(0x4001442C))	
#define TIM10_CCR1_REG            ((volatile register_typedef *)(0x40014434))	

/* Регистры TIMER11 */
#define TIM11_CR1_REG             ((volatile register_typedef *)(0x40014800))
#define TIM11_DIER_REG            ((volatile register_typedef *)(0x4001480C))
#define TIM11_SR_REG              ((volatile register_typedef *)(0x40014810))
#define TIM11_EGR_REG             ((volatile register_typedef *)(0x40014814))
#define TIM11_CCMR1_OUTPUT_REG    ((volatile register_typedef *)(0x40014818))
#define TIM11_CCMR1_INPUT_REG     ((volatile register_typedef *)(0x40014818))	
#define TIM11_CCER_REG            ((volatile register_typedef *)(0x40014820))	
#define TIM11_CNT_REG             ((volatile register_typedef *)(0x40014824))	
#define TIM11_PSC_REG             ((volatile register_typedef *)(0x40014828))	
#define TIM11_ARR_REG             ((volatile register_typedef *)(0x4001482C))	
#define TIM11_CCR1_REG            ((volatile register_typedef *)(0x40014834))	
#define TIM11_OR_REG              ((volatile register_typedef *)(0x40014850))	

/* Регистры TIMER12 */
#define TIM12_CR1_REG             ((volatile register_typedef *)(0x40001800))
#define TIM12_CR2_REG             ((volatile register_typedef *)(0x40001804))
#define TIM12_SMCR_REG            ((volatile register_typedef *)(0x40001808))
#define TIM12_DIER_REG            ((volatile register_typedef *)(0x4000180C))
#define TIM12_SR_REG              ((volatile register_typedef *)(0x40001810))
#define TIM12_EGR_REG             ((volatile register_typedef *)(0x40001814))
#define TIM12_CCMR1_OUTPUT_REG    ((volatile register_typedef *)(0x40001818))
#define TIM12_CCMR1_INPUT_REG     ((volatile register_typedef *)(0x40001818))	
#define TIM12_CCER_REG            ((volatile register_typedef *)(0x40001820))	
#define TIM12_CNT_REG             ((volatile register_typedef *)(0x40001824))	
#define TIM12_PSC_REG             ((volatile register_typedef *)(0x40001828))	
#define TIM12_ARR_REG             ((volatile register_typedef *)(0x4000182C))	
#define TIM12_CCR1_REG            ((volatile register_typedef *)(0x40001834))	
#define TIM12_CCR2_REG            ((volatile register_typedef *)(0x40001838))

/* Регистры TIMER13 */
#define TIM13_CR1_REG             ((volatile register_typedef *)(0x40001C00))
#define TIM13_DIER_REG            ((volatile register_typedef *)(0x40001C0C))
#define TIM13_SR_REG              ((volatile register_typedef *)(0x40001C10))
#define TIM13_EGR_REG             ((volatile register_typedef *)(0x40001C14))
#define TIM13_CCMR1_OUTPUT_REG    ((volatile register_typedef *)(0x40001C18))
#define TIM13_CCMR1_INPUT_REG     ((volatile register_typedef *)(0x40001C18))	
#define TIM13_CCER_REG            ((volatile register_typedef *)(0x40001C20))	
#define TIM13_CNT_REG             ((volatile register_typedef *)(0x40001C24))	
#define TIM13_PSC_REG             ((volatile register_typedef *)(0x40001C28))	
#define TIM13_ARR_REG             ((volatile register_typedef *)(0x40001C2C))	
#define TIM13_CCR1_REG            ((volatile register_typedef *)(0x40001C34))	

/* Регистры TIMER14 */
#define TIM14_CR1_REG             ((volatile register_typedef *)(0x40002000))
#define TIM14_DIER_REG            ((volatile register_typedef *)(0x4000200C))
#define TIM14_SR_REG              ((volatile register_typedef *)(0x40002010))
#define TIM14_EGR_REG             ((volatile register_typedef *)(0x40002014))
#define TIM14_CCMR1_OUTPUT_REG    ((volatile register_typedef *)(0x40002018))
#define TIM14_CCMR1_INPUT_REG     ((volatile register_typedef *)(0x40002018))	
#define TIM14_CCER_REG            ((volatile register_typedef *)(0x40002020))	
#define TIM14_CNT_REG             ((volatile register_typedef *)(0x40002024))	
#define TIM14_PSC_REG             ((volatile register_typedef *)(0x40002028))	
#define TIM14_ARR_REG             ((volatile register_typedef *)(0x4000202C))	
#define TIM14_CCR1_REG            ((volatile register_typedef *)(0x40002034))	


















#endif /*__MACRO_REG_H*/











