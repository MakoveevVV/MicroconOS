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
	
	PIN_6_INIT_OUT(A);
	
	
	while(1){
		PIN_6_SET(A);
		delay_ms(1000);
		PIN_6_RESET(A);
		delay_ms(1000);
	
	
	}
		
		
}








