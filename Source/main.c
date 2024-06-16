#include "stm32f4xx.h"
#include "type.h"
#include "macro_reg.h"
#include "periphery_std.h"
#include <stdio.h>
#include "devices_display.h"
#include "devices_common.h"

/*TODO
	
1.	Переписать включение rcc периферии
*/

void kernel_error()
{
		/*TODO LED blink*/
		while(1);
}




volatile uint8_t enc;


int main(void)
{

	rcc_init();
	mco2_init();

	

	i2c1_init();
	
	pcf8574_display_init();
	
	char str[20];
	char rez;
	

	encoder_init();
	
	
	while(1){
		
		
	
	}
		
		
}








