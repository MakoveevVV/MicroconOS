#ifndef __MACRO_REG_H
#define __MACRO_REG_H
/*
 * Макросы для доступа к регистрам периферии
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










#endif /*__MACRO_REG_H*/











