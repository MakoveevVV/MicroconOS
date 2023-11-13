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


#endif /*__MACRO_REG_H*/
