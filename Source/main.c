#include "stm32f4xx.h"
#include "type.h"
#include "macro_reg.h"

void kernel_error(void)
{
		/*TODO зажигание LED*/
		while(1);
}

//__asm(" mov r0, #0xFFFF");


/*#define GPIOA_MODER_REG     ((volatile register_typedef *)(0x40000000UL + 0x00020000UL + 0x0000UL + 0x00UL))
#define GPIOA_OTYPER_REG    ((volatile register_typedef *)(0x40020000UL + 0x00020000UL + 0x0000UL + 0x04UL))
#define GPIOA_OSPEEDR_REG	((volatile register_typedef *)(0x40020000UL + 0x00020000UL + 0x0000UL + 0x08UL))
#define GPIOA_PUPDR_REG     ((volatile register_typedef *)(0x40020000UL + 0x00020000UL + 0x0000UL + 0x0CUL))
#define GPIOA_IDR_REG       ((volatile register_typedef *)(0x40020000UL + 0x00020000UL + 0x0000UL + 0x10UL))
#define GPIOA_ODR_REG       ((volatile register_typedef *)(0x40020000UL + 0x00020000UL + 0x0000UL + 0x14UL))
#define GPIOA_BSRR_REG      ((volatile register_typedef *)(0x40020000UL + 0x00020000UL + 0x0000UL + 0x18UL))
#define GPIOA_LCKR_REG      ((volatile register_typedef *)(0x40020000UL + 0x00020000UL + 0x0000UL + 0x1CUL))
#define GPIOA_AFR1_REG      ((volatile register_typedef *)(0x40020000UL + 0x00020000UL + 0x0000UL + 0x20UL))
#define GPIOA_AFR2_REG      ((volatile register_typedef *)(0x40020000UL + 0x00020000UL + 0x0000UL + 0x24UL)) */



int main(void)
{
	RCC->AHB1ENR  = 1;
	volatile int a = 0;
	a++;
	
	/*
	GPIOA_MODER_REG->bite_register.bit_0 = 1;
	GPIOA_MODER_REG->bite_register.bit_1 = 1;
	GPIOA_MODER_REG->full_register = 0xFFFFFFFF;
	
	GPIOA_OTYPER_REG->bite_register.bit_0 = 1;
	GPIOA_OTYPER_REG->bite_register.bit_1 = 1;
	GPIOA_OTYPER_REG->full_register = 0xFFFFFFFF;
	
	GPIOA_OSPEEDR_REG->bite_register.bit_0 = 1;
	GPIOA_OSPEEDR_REG->bite_register.bit_1 = 1;
	GPIOA_OSPEEDR_REG->full_register = 0xFFFFFFFF;
	 
	GPIOA_PUPDR_REG->bite_register.bit_0 = 1;
	GPIOA_PUPDR_REG->bite_register.bit_1 = 1;
	GPIOA_PUPDR_REG->full_register = 0xFFFFFFFF;
	
	GPIOA_ODR_REG->bite_register.bit_0 = 1;
	GPIOA_ODR_REG->bite_register.bit_1 = 1;
	GPIOA_ODR_REG->full_register = 0xFFFFFFFF;
	
	GPIOA_BSRR_REG->bite_register.bit_0 = 1;
	GPIOA_BSRR_REG->bite_register.bit_1 = 1;
	GPIOA_BSRR_REG->full_register = 0xFFFFFFFF;
	
	GPIOA_AFR1_REG->bite_register.bit_0 = 1;
	GPIOA_AFR1_REG->bite_register.bit_1 = 1;
	GPIOA_AFR1_REG->full_register = 0xFFFFFFFF;
	
	GPIOA_AFR2_REG->bite_register.bit_0 = 1;
	GPIOA_AFR2_REG->bite_register.bit_1 = 1;
	GPIOA_AFR2_REG->full_register = 0xFFFFFFFF;*/
	
	while(1);
	
}










