#include "stm32f4xx.h"
#include "type.h"
#include "macro_reg.h"
#include "init_periph.h"

void kernel_error(void)
{
		/*TODO зажигание LED*/
		while(1);
}


extern void mem_copy(void);



int main(void)
{
//	rcc_init();
//	mco2_init();
	volatile int x = 0xFF,y = 0xAAAA, z;
	
	mem_copy();
	
	while(1){}
	
}










/*
RCC->AHB1ENR  = 255;
	volatile int a = 0;
	a++;
	
	//testasm();
	
	INIT_PIN_BUTTON(E, 8);
	
	INIT_PIN_OUT(A, 12);
	
	
	
	
	
	
	
	
	
	while(1){
		
		if(GPIOE_IDR_REG->bite_register.bit_4 == 0)
			GPIOA_BSRR_REG->bite_register.bit_22 = 1;
		else
			GPIOA_BSRR_REG->bite_register.bit_6 = 1;
		
		
		
	}
*/


