#include "stm32f4xx.h"
#include "type.h"
#include "macro_reg.h"
#include "init_periph.h"

void kernel_error(void)
{
		/*TODO зажигание LED*/
		while(1);
}

//__asm(" mov r0, #0xFFFF");
//volatile int count __asm__("v2") = 0xFFF;



int main(void)
{
	RCC->AHB1ENR  = 255;
	volatile int a = 0;
	a++;
	
	
	
	
	
	
	
	
	while(1);
	
}










