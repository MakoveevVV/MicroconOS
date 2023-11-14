#ifndef __MACRO_REG_H
#define __MACRO_REG_H
/*
 * Макросы для доступа к регистрам периферии
 */

#include "type.h"

#define AHB1ENR_REG ((register_typedef *)(0x40000000UL + 0x00020000UL+ 0x3800UL + 0x30))


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



#endif /*__MACRO_REG_H*/




