#include "stm32f4xx.h"
#include "type.h"
#include "macro_reg.h"
#include "periphery_std.h"

void kernel_error(void)
{
		/*TODO LED blink*/
		while(1);
}




int main(void)
{
	rcc_init();
	mco2_init();
	
	PORTA_CLOCK;
	PIN_7_INIT_OUT(A);
	PIN_7_RESET(A);
	
	
	
	while(1){}
		
		
	
	
}









