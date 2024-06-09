#include "stm32f4xx.h"
#include "type.h"
#include "macro_reg.h"
#include "periphery_std.h"
#include <stdio.h>
#include "devices_display.h"

/*TODO
	
1.	Переписать включение rcc периферии
*/

void kernel_error()
{
		/*TODO LED blink*/
		while(1);
}



int main(void)
{

	rcc_init();
	mco2_init();

	

	i2c1_init();
	
	pcf8574_display_init();
	
	
	
	
	while(1){
		
		
		
	
	
	}
		
		
}








