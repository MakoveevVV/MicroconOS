#include "init_periph.h"
#include "macro_reg.h"

/*
 * Инициализация пина input (кнопки). Подтяжка к 3.3V
 * TODO убрать возможность инициализации пинов отладки и тактовых генераторов
 */
void init_butthon(enum gpio_ports port, enum gpio_pins pin)
{
		switch(port) {
		case PORTA:
				   switch(pin) {
				   case PIN_0: 
                              GPIOA_MODER_REG->bite_register.bit_0 = 0;					   
				              GPIOA_MODER_REG->bite_register.bit_1 = 0;
				              GPIOA_OTYPER_REG->bite_register.bit_0 = 0;
				              GPIOA_PUPDR_REG->bite_register.bit_0 = 1;
				              GPIOA_PUPDR_REG->bite_register.bit_1 = 0;
				              break;
				   case PIN_1: 
                              GPIOA_MODER_REG->bite_register.bit_2 = 0;					   
				              GPIOA_MODER_REG->bite_register.bit_3 = 0;
				              GPIOA_OTYPER_REG->bite_register.bit_1 = 0;
				              GPIOA_PUPDR_REG->bite_register.bit_2 = 1;
				              GPIOA_PUPDR_REG->bite_register.bit_3 = 0;
				              break;
				   case PIN_2: 
                              GPIOA_MODER_REG->bite_register.bit_4 = 0;					   
				              GPIOA_MODER_REG->bite_register.bit_5 = 0;
				              GPIOA_OTYPER_REG->bite_register.bit_2 = 0;
				              GPIOA_PUPDR_REG->bite_register.bit_4 = 1;
				              GPIOA_PUPDR_REG->bite_register.bit_5 = 0;
				              break;
				   case PIN_3: 
                              GPIOA_MODER_REG->bite_register.bit_6 = 0;					   
				              GPIOA_MODER_REG->bite_register.bit_7 = 0;
				              GPIOA_OTYPER_REG->bite_register.bit_3 = 0;
				              GPIOA_PUPDR_REG->bite_register.bit_6 = 1;
				              GPIOA_PUPDR_REG->bite_register.bit_7 = 0;
				              break;
				   case PIN_4: 
                              GPIOA_MODER_REG->bite_register.bit_8 = 0;					   
				              GPIOA_MODER_REG->bite_register.bit_9 = 0;
				              GPIOA_OTYPER_REG->bite_register.bit_4 = 0;
				              GPIOA_PUPDR_REG->bite_register.bit_8 = 1;
				              GPIOA_PUPDR_REG->bite_register.bit_9 = 0;
				              break;
				   case PIN_5: 
                              GPIOA_MODER_REG->bite_register.bit_10 = 0;					   
				              GPIOA_MODER_REG->bite_register.bit_11 = 0;
				              GPIOA_OTYPER_REG->bite_register.bit_5 = 0;
				              GPIOA_PUPDR_REG->bite_register.bit_10 = 1;
				              GPIOA_PUPDR_REG->bite_register.bit_11 = 0;
				              break;
				   case PIN_6: 
                              GPIOA_MODER_REG->bite_register.bit_12 = 0;					   
				              GPIOA_MODER_REG->bite_register.bit_13 = 0;
				              GPIOA_OTYPER_REG->bite_register.bit_6 = 0;
				              GPIOA_PUPDR_REG->bite_register.bit_12 = 1;
				              GPIOA_PUPDR_REG->bite_register.bit_13 = 0;
				              break;
				   case PIN_7: 
                              GPIOA_MODER_REG->bite_register.bit_14 = 0;					   
				              GPIOA_MODER_REG->bite_register.bit_15 = 0;
				              GPIOA_OTYPER_REG->bite_register.bit_7 = 0;
				              GPIOA_PUPDR_REG->bite_register.bit_14 = 1;
				              GPIOA_PUPDR_REG->bite_register.bit_15 = 0;
				              break;
				   case PIN_8: 
                              GPIOA_MODER_REG->bite_register.bit_16 = 0;					   
				              GPIOA_MODER_REG->bite_register.bit_17 = 0;
				              GPIOA_OTYPER_REG->bite_register.bit_8 = 0;
				              GPIOA_PUPDR_REG->bite_register.bit_16 = 1;
				              GPIOA_PUPDR_REG->bite_register.bit_17 = 0;
				              break;
				   case PIN_9: 
                              GPIOA_MODER_REG->bite_register.bit_18 = 0;					   
				              GPIOA_MODER_REG->bite_register.bit_19 = 0;
				              GPIOA_OTYPER_REG->bite_register.bit_9 = 0;
				              GPIOA_PUPDR_REG->bite_register.bit_18 = 1;
				              GPIOA_PUPDR_REG->bite_register.bit_19 = 0;
				              break;
				   case PIN_10: 
                              GPIOA_MODER_REG->bite_register.bit_20 = 0;					   
				              GPIOA_MODER_REG->bite_register.bit_21 = 0;
				              GPIOA_OTYPER_REG->bite_register.bit_10 = 0;
				              GPIOA_PUPDR_REG->bite_register.bit_20 = 1;
				              GPIOA_PUPDR_REG->bite_register.bit_21 = 0;
				              break;
				   case PIN_11: 
                              GPIOA_MODER_REG->bite_register.bit_22 = 0;					   
				              GPIOA_MODER_REG->bite_register.bit_23 = 0;
				              GPIOA_OTYPER_REG->bite_register.bit_11 = 0;
				              GPIOA_PUPDR_REG->bite_register.bit_22 = 1;
				              GPIOA_PUPDR_REG->bite_register.bit_23 = 0;
				              break;
				   case PIN_12: 
                              GPIOA_MODER_REG->bite_register.bit_24 = 0;					   
				              GPIOA_MODER_REG->bite_register.bit_25 = 0;
				              GPIOA_OTYPER_REG->bite_register.bit_12 = 0;
				              GPIOA_PUPDR_REG->bite_register.bit_24 = 1;
				              GPIOA_PUPDR_REG->bite_register.bit_25 = 0;
				              break;
				   case PIN_13: 
                              GPIOA_MODER_REG->bite_register.bit_26 = 0;					   
				              GPIOA_MODER_REG->bite_register.bit_27 = 0;
				              GPIOA_OTYPER_REG->bite_register.bit_13 = 0;
				              GPIOA_PUPDR_REG->bite_register.bit_26 = 1;
				              GPIOA_PUPDR_REG->bite_register.bit_27 = 0;
				              break;
				   case PIN_14: 
                              GPIOA_MODER_REG->bite_register.bit_28 = 0;					   
				              GPIOA_MODER_REG->bite_register.bit_29 = 0;
				              GPIOA_OTYPER_REG->bite_register.bit_14 = 0;
				              GPIOA_PUPDR_REG->bite_register.bit_28 = 1;
				              GPIOA_PUPDR_REG->bite_register.bit_29 = 0;
				              break;
				   case PIN_15: 
                              GPIOA_MODER_REG->bite_register.bit_30 = 0;					   
				              GPIOA_MODER_REG->bite_register.bit_31 = 0;
				              GPIOA_OTYPER_REG->bite_register.bit_15 = 0;
				              GPIOA_PUPDR_REG->bite_register.bit_30 = 1;
				              GPIOA_PUPDR_REG->bite_register.bit_31 = 0;
		                      break;				   
				   }
	               break;
		case PORTB:
			       switch(pin) {
				   case PIN_0: 
                              GPIOB_MODER_REG->bite_register.bit_0 = 0;					   
				              GPIOB_MODER_REG->bite_register.bit_1 = 0;
				              GPIOB_OTYPER_REG->bite_register.bit_0 = 0;
				              GPIOB_PUPDR_REG->bite_register.bit_0 = 1;
				              GPIOB_PUPDR_REG->bite_register.bit_1 = 0;
				              break;
				   case PIN_1: 
                              GPIOB_MODER_REG->bite_register.bit_2 = 0;					   
				              GPIOB_MODER_REG->bite_register.bit_3 = 0;
				              GPIOB_OTYPER_REG->bite_register.bit_1 = 0;
				              GPIOB_PUPDR_REG->bite_register.bit_2 = 1;
				              GPIOB_PUPDR_REG->bite_register.bit_3 = 0;
				              break;
				   case PIN_2: 
                              GPIOB_MODER_REG->bite_register.bit_4 = 0;					   
				              GPIOB_MODER_REG->bite_register.bit_5 = 0;
				              GPIOB_OTYPER_REG->bite_register.bit_2 = 0;
				              GPIOB_PUPDR_REG->bite_register.bit_4 = 1;
				              GPIOB_PUPDR_REG->bite_register.bit_5 = 0;
				              break;
				   case PIN_3: 
                              GPIOB_MODER_REG->bite_register.bit_6 = 0;					   
				              GPIOB_MODER_REG->bite_register.bit_7 = 0;
				              GPIOB_OTYPER_REG->bite_register.bit_3 = 0;
				              GPIOB_PUPDR_REG->bite_register.bit_6 = 1;
				              GPIOB_PUPDR_REG->bite_register.bit_7 = 0;
				              break;
				   case PIN_4: 
                              GPIOB_MODER_REG->bite_register.bit_8 = 0;					   
				              GPIOB_MODER_REG->bite_register.bit_9 = 0;
				              GPIOB_OTYPER_REG->bite_register.bit_4 = 0;
				              GPIOB_PUPDR_REG->bite_register.bit_8 = 1;
				              GPIOB_PUPDR_REG->bite_register.bit_9 = 0;
				              break;
				   case PIN_5: 
                              GPIOB_MODER_REG->bite_register.bit_10 = 0;					   
				              GPIOB_MODER_REG->bite_register.bit_11 = 0;
				              GPIOB_OTYPER_REG->bite_register.bit_5 = 0;
				              GPIOB_PUPDR_REG->bite_register.bit_10 = 1;
				              GPIOB_PUPDR_REG->bite_register.bit_11 = 0;
				              break;
				   case PIN_6: 
                              GPIOB_MODER_REG->bite_register.bit_12 = 0;					   
				              GPIOB_MODER_REG->bite_register.bit_13 = 0;
				              GPIOB_OTYPER_REG->bite_register.bit_6 = 0;
				              GPIOB_PUPDR_REG->bite_register.bit_12 = 1;
				              GPIOB_PUPDR_REG->bite_register.bit_13 = 0;
				              break;
				   case PIN_7: 
                              GPIOB_MODER_REG->bite_register.bit_14 = 0;					   
				              GPIOB_MODER_REG->bite_register.bit_15 = 0;
				              GPIOB_OTYPER_REG->bite_register.bit_7 = 0;
				              GPIOB_PUPDR_REG->bite_register.bit_14 = 1;
				              GPIOB_PUPDR_REG->bite_register.bit_15 = 0;
				              break;
				   case PIN_8: 
                              GPIOB_MODER_REG->bite_register.bit_16 = 0;					   
				              GPIOB_MODER_REG->bite_register.bit_17 = 0;
				              GPIOB_OTYPER_REG->bite_register.bit_8 = 0;
				              GPIOB_PUPDR_REG->bite_register.bit_16 = 1;
				              GPIOB_PUPDR_REG->bite_register.bit_17 = 0;
				              break;
				   case PIN_9: 
                              GPIOB_MODER_REG->bite_register.bit_18 = 0;					   
				              GPIOB_MODER_REG->bite_register.bit_19 = 0;
				              GPIOB_OTYPER_REG->bite_register.bit_9 = 0;
				              GPIOB_PUPDR_REG->bite_register.bit_18 = 1;
				              GPIOB_PUPDR_REG->bite_register.bit_19 = 0;
				              break;
				   case PIN_10: 
                              GPIOB_MODER_REG->bite_register.bit_20 = 0;					   
				              GPIOB_MODER_REG->bite_register.bit_21 = 0;
				              GPIOB_OTYPER_REG->bite_register.bit_10 = 0;
				              GPIOB_PUPDR_REG->bite_register.bit_20 = 1;
				              GPIOB_PUPDR_REG->bite_register.bit_21 = 0;
				              break;
				   case PIN_11: 
                              GPIOB_MODER_REG->bite_register.bit_22 = 0;					   
				              GPIOB_MODER_REG->bite_register.bit_23 = 0;
				              GPIOB_OTYPER_REG->bite_register.bit_11 = 0;
				              GPIOB_PUPDR_REG->bite_register.bit_22 = 1;
				              GPIOB_PUPDR_REG->bite_register.bit_23 = 0;
				              break;
				   case PIN_12: 
                              GPIOB_MODER_REG->bite_register.bit_24 = 0;					   
				              GPIOB_MODER_REG->bite_register.bit_25 = 0;
				              GPIOB_OTYPER_REG->bite_register.bit_12 = 0;
				              GPIOB_PUPDR_REG->bite_register.bit_24 = 1;
				              GPIOB_PUPDR_REG->bite_register.bit_25 = 0;
				              break;
				   case PIN_13: 
                              GPIOB_MODER_REG->bite_register.bit_26 = 0;					   
				              GPIOB_MODER_REG->bite_register.bit_27 = 0;
				              GPIOB_OTYPER_REG->bite_register.bit_13 = 0;
				              GPIOB_PUPDR_REG->bite_register.bit_26 = 1;
				              GPIOB_PUPDR_REG->bite_register.bit_27 = 0;
				              break;
				   case PIN_14: 
                              GPIOB_MODER_REG->bite_register.bit_28 = 0;					   
				              GPIOB_MODER_REG->bite_register.bit_29 = 0;
				              GPIOB_OTYPER_REG->bite_register.bit_14 = 0;
				              GPIOB_PUPDR_REG->bite_register.bit_28 = 1;
				              GPIOB_PUPDR_REG->bite_register.bit_29 = 0;
				              break;
				   case PIN_15: 
                              GPIOB_MODER_REG->bite_register.bit_30 = 0;					   
				              GPIOB_MODER_REG->bite_register.bit_31 = 0;
				              GPIOB_OTYPER_REG->bite_register.bit_15 = 0;
				              GPIOB_PUPDR_REG->bite_register.bit_30 = 1;
				              GPIOB_PUPDR_REG->bite_register.bit_31 = 0;
		                      break;				   
				   }
	               break;		
		case PORTC:
			       switch(pin) {
				   case PIN_0: 
                              GPIOC_MODER_REG->bite_register.bit_0 = 0;					   
				              GPIOC_MODER_REG->bite_register.bit_1 = 0;
				              GPIOC_OTYPER_REG->bite_register.bit_0 = 0;
				              GPIOC_PUPDR_REG->bite_register.bit_0 = 1;
				              GPIOC_PUPDR_REG->bite_register.bit_1 = 0;
				              break;
				   case PIN_1: 
                              GPIOC_MODER_REG->bite_register.bit_2 = 0;					   
				              GPIOC_MODER_REG->bite_register.bit_3 = 0;
				              GPIOC_OTYPER_REG->bite_register.bit_1 = 0;
				              GPIOC_PUPDR_REG->bite_register.bit_2 = 1;
				              GPIOC_PUPDR_REG->bite_register.bit_3 = 0;
				              break;
				   case PIN_2: 
                              GPIOC_MODER_REG->bite_register.bit_4 = 0;					   
				              GPIOC_MODER_REG->bite_register.bit_5 = 0;
				              GPIOC_OTYPER_REG->bite_register.bit_2 = 0;
				              GPIOC_PUPDR_REG->bite_register.bit_4 = 1;
				              GPIOC_PUPDR_REG->bite_register.bit_5 = 0;
				              break;
				   case PIN_3: 
                              GPIOC_MODER_REG->bite_register.bit_6 = 0;					   
				              GPIOC_MODER_REG->bite_register.bit_7 = 0;
				              GPIOC_OTYPER_REG->bite_register.bit_3 = 0;
				              GPIOC_PUPDR_REG->bite_register.bit_6 = 1;
				              GPIOC_PUPDR_REG->bite_register.bit_7 = 0;
				              break;
				   case PIN_4: 
                              GPIOC_MODER_REG->bite_register.bit_8 = 0;					   
				              GPIOC_MODER_REG->bite_register.bit_9 = 0;
				              GPIOC_OTYPER_REG->bite_register.bit_4 = 0;
				              GPIOC_PUPDR_REG->bite_register.bit_8 = 1;
				              GPIOC_PUPDR_REG->bite_register.bit_9 = 0;
				              break;
				   case PIN_5: 
                              GPIOC_MODER_REG->bite_register.bit_10 = 0;					   
				              GPIOC_MODER_REG->bite_register.bit_11 = 0;
				              GPIOC_OTYPER_REG->bite_register.bit_5 = 0;
				              GPIOC_PUPDR_REG->bite_register.bit_10 = 1;
				              GPIOC_PUPDR_REG->bite_register.bit_11 = 0;
				              break;
				   case PIN_6: 
                              GPIOC_MODER_REG->bite_register.bit_12 = 0;					   
				              GPIOC_MODER_REG->bite_register.bit_13 = 0;
				              GPIOC_OTYPER_REG->bite_register.bit_6 = 0;
				              GPIOC_PUPDR_REG->bite_register.bit_12 = 1;
				              GPIOC_PUPDR_REG->bite_register.bit_13 = 0;
				              break;
				   case PIN_7: 
                              GPIOC_MODER_REG->bite_register.bit_14 = 0;					   
				              GPIOC_MODER_REG->bite_register.bit_15 = 0;
				              GPIOC_OTYPER_REG->bite_register.bit_7 = 0;
				              GPIOC_PUPDR_REG->bite_register.bit_14 = 1;
				              GPIOC_PUPDR_REG->bite_register.bit_15 = 0;
				              break;
				   case PIN_8: 
                              GPIOC_MODER_REG->bite_register.bit_16 = 0;					   
				              GPIOC_MODER_REG->bite_register.bit_17 = 0;
				              GPIOC_OTYPER_REG->bite_register.bit_8 = 0;
				              GPIOC_PUPDR_REG->bite_register.bit_16 = 1;
				              GPIOC_PUPDR_REG->bite_register.bit_17 = 0;
				              break;
				   case PIN_9: 
                              GPIOC_MODER_REG->bite_register.bit_18 = 0;					   
				              GPIOC_MODER_REG->bite_register.bit_19 = 0;
				              GPIOC_OTYPER_REG->bite_register.bit_9 = 0;
				              GPIOC_PUPDR_REG->bite_register.bit_18 = 1;
				              GPIOC_PUPDR_REG->bite_register.bit_19 = 0;
				              break;
				   case PIN_10: 
                              GPIOC_MODER_REG->bite_register.bit_20 = 0;					   
				              GPIOC_MODER_REG->bite_register.bit_21 = 0;
				              GPIOC_OTYPER_REG->bite_register.bit_10 = 0;
				              GPIOC_PUPDR_REG->bite_register.bit_20 = 1;
				              GPIOC_PUPDR_REG->bite_register.bit_21 = 0;
				              break;
				   case PIN_11: 
                              GPIOC_MODER_REG->bite_register.bit_22 = 0;					   
				              GPIOC_MODER_REG->bite_register.bit_23 = 0;
				              GPIOC_OTYPER_REG->bite_register.bit_11 = 0;
				              GPIOC_PUPDR_REG->bite_register.bit_22 = 1;
				              GPIOC_PUPDR_REG->bite_register.bit_23 = 0;
				              break;
				   case PIN_12: 
                              GPIOC_MODER_REG->bite_register.bit_24 = 0;					   
				              GPIOC_MODER_REG->bite_register.bit_25 = 0;
				              GPIOC_OTYPER_REG->bite_register.bit_12 = 0;
				              GPIOC_PUPDR_REG->bite_register.bit_24 = 1;
				              GPIOC_PUPDR_REG->bite_register.bit_25 = 0;
				              break;
				   case PIN_13: 
                              GPIOC_MODER_REG->bite_register.bit_26 = 0;					   
				              GPIOC_MODER_REG->bite_register.bit_27 = 0;
				              GPIOC_OTYPER_REG->bite_register.bit_13 = 0;
				              GPIOC_PUPDR_REG->bite_register.bit_26 = 1;
				              GPIOC_PUPDR_REG->bite_register.bit_27 = 0;
				              break;
				   case PIN_14: 
                              GPIOC_MODER_REG->bite_register.bit_28 = 0;					   
				              GPIOC_MODER_REG->bite_register.bit_29 = 0;
				              GPIOC_OTYPER_REG->bite_register.bit_14 = 0;
				              GPIOC_PUPDR_REG->bite_register.bit_28 = 1;
				              GPIOC_PUPDR_REG->bite_register.bit_29 = 0;
				              break;
				   case PIN_15: 
                              GPIOC_MODER_REG->bite_register.bit_30 = 0;					   
				              GPIOC_MODER_REG->bite_register.bit_31 = 0;
				              GPIOC_OTYPER_REG->bite_register.bit_15 = 0;
				              GPIOC_PUPDR_REG->bite_register.bit_30 = 1;
				              GPIOC_PUPDR_REG->bite_register.bit_31 = 0;
		                      break;				   
				   }
	               break;	
		case PORTD:
				   switch(pin) {
				   case PIN_0: 
                              GPIOD_MODER_REG->bite_register.bit_0 = 0;					   
				              GPIOD_MODER_REG->bite_register.bit_1 = 0;
				              GPIOD_OTYPER_REG->bite_register.bit_0 = 0;
				              GPIOD_PUPDR_REG->bite_register.bit_0 = 1;
				              GPIOD_PUPDR_REG->bite_register.bit_1 = 0;
				              break;
				   case PIN_1: 
                              GPIOD_MODER_REG->bite_register.bit_2 = 0;					   
				              GPIOD_MODER_REG->bite_register.bit_3 = 0;
				              GPIOD_OTYPER_REG->bite_register.bit_1 = 0;
				              GPIOD_PUPDR_REG->bite_register.bit_2 = 1;
				              GPIOD_PUPDR_REG->bite_register.bit_3 = 0;
				              break;
				   case PIN_2: 
                              GPIOD_MODER_REG->bite_register.bit_4 = 0;					   
				              GPIOD_MODER_REG->bite_register.bit_5 = 0;
				              GPIOD_OTYPER_REG->bite_register.bit_2 = 0;
				              GPIOD_PUPDR_REG->bite_register.bit_4 = 1;
				              GPIOD_PUPDR_REG->bite_register.bit_5 = 0;
				              break;
				   case PIN_3: 
                              GPIOD_MODER_REG->bite_register.bit_6 = 0;					   
				              GPIOD_MODER_REG->bite_register.bit_7 = 0;
				              GPIOD_OTYPER_REG->bite_register.bit_3 = 0;
				              GPIOD_PUPDR_REG->bite_register.bit_6 = 1;
				              GPIOD_PUPDR_REG->bite_register.bit_7 = 0;
				              break;
				   case PIN_4: 
                              GPIOD_MODER_REG->bite_register.bit_8 = 0;					   
				              GPIOD_MODER_REG->bite_register.bit_9 = 0;
				              GPIOD_OTYPER_REG->bite_register.bit_4 = 0;
				              GPIOD_PUPDR_REG->bite_register.bit_8 = 1;
				              GPIOD_PUPDR_REG->bite_register.bit_9 = 0;
				              break;
				   case PIN_5: 
                              GPIOD_MODER_REG->bite_register.bit_10 = 0;					   
				              GPIOD_MODER_REG->bite_register.bit_11 = 0;
				              GPIOD_OTYPER_REG->bite_register.bit_5 = 0;
				              GPIOD_PUPDR_REG->bite_register.bit_10 = 1;
				              GPIOD_PUPDR_REG->bite_register.bit_11 = 0;
				              break;
				   case PIN_6: 
                              GPIOD_MODER_REG->bite_register.bit_12 = 0;					   
				              GPIOD_MODER_REG->bite_register.bit_13 = 0;
				              GPIOD_OTYPER_REG->bite_register.bit_6 = 0;
				              GPIOD_PUPDR_REG->bite_register.bit_12 = 1;
				              GPIOD_PUPDR_REG->bite_register.bit_13 = 0;
				              break;
				   case PIN_7: 
                              GPIOD_MODER_REG->bite_register.bit_14 = 0;					   
				              GPIOD_MODER_REG->bite_register.bit_15 = 0;
				              GPIOD_OTYPER_REG->bite_register.bit_7 = 0;
				              GPIOD_PUPDR_REG->bite_register.bit_14 = 1;
				              GPIOD_PUPDR_REG->bite_register.bit_15 = 0;
				              break;
				   case PIN_8: 
                              GPIOD_MODER_REG->bite_register.bit_16 = 0;					   
				              GPIOD_MODER_REG->bite_register.bit_17 = 0;
				              GPIOD_OTYPER_REG->bite_register.bit_8 = 0;
				              GPIOD_PUPDR_REG->bite_register.bit_16 = 1;
				              GPIOD_PUPDR_REG->bite_register.bit_17 = 0;
				              break;
				   case PIN_9: 
                              GPIOD_MODER_REG->bite_register.bit_18 = 0;					   
				              GPIOD_MODER_REG->bite_register.bit_19 = 0;
				              GPIOD_OTYPER_REG->bite_register.bit_9 = 0;
				              GPIOD_PUPDR_REG->bite_register.bit_18 = 1;
				              GPIOD_PUPDR_REG->bite_register.bit_19 = 0;
				              break;
				   case PIN_10: 
                              GPIOD_MODER_REG->bite_register.bit_20 = 0;					   
				              GPIOD_MODER_REG->bite_register.bit_21 = 0;
				              GPIOD_OTYPER_REG->bite_register.bit_10 = 0;
				              GPIOD_PUPDR_REG->bite_register.bit_20 = 1;
				              GPIOD_PUPDR_REG->bite_register.bit_21 = 0;
				              break;
				   case PIN_11: 
                              GPIOD_MODER_REG->bite_register.bit_22 = 0;					   
				              GPIOD_MODER_REG->bite_register.bit_23 = 0;
				              GPIOD_OTYPER_REG->bite_register.bit_11 = 0;
				              GPIOD_PUPDR_REG->bite_register.bit_22 = 1;
				              GPIOD_PUPDR_REG->bite_register.bit_23 = 0;
				              break;
				   case PIN_12: 
                              GPIOD_MODER_REG->bite_register.bit_24 = 0;					   
				              GPIOD_MODER_REG->bite_register.bit_25 = 0;
				              GPIOD_OTYPER_REG->bite_register.bit_12 = 0;
				              GPIOD_PUPDR_REG->bite_register.bit_24 = 1;
				              GPIOD_PUPDR_REG->bite_register.bit_25 = 0;
				              break;
				   case PIN_13: 
                              GPIOD_MODER_REG->bite_register.bit_26 = 0;					   
				              GPIOD_MODER_REG->bite_register.bit_27 = 0;
				              GPIOD_OTYPER_REG->bite_register.bit_13 = 0;
				              GPIOD_PUPDR_REG->bite_register.bit_26 = 1;
				              GPIOD_PUPDR_REG->bite_register.bit_27 = 0;
				              break;
				   case PIN_14: 
                              GPIOD_MODER_REG->bite_register.bit_28 = 0;					   
				              GPIOD_MODER_REG->bite_register.bit_29 = 0;
				              GPIOD_OTYPER_REG->bite_register.bit_14 = 0;
				              GPIOD_PUPDR_REG->bite_register.bit_28 = 1;
				              GPIOD_PUPDR_REG->bite_register.bit_29 = 0;
				              break;
				   case PIN_15: 
                              GPIOD_MODER_REG->bite_register.bit_30 = 0;					   
				              GPIOD_MODER_REG->bite_register.bit_31 = 0;
				              GPIOD_OTYPER_REG->bite_register.bit_15 = 0;
				              GPIOD_PUPDR_REG->bite_register.bit_30 = 1;
				              GPIOD_PUPDR_REG->bite_register.bit_31 = 0;
		                      break;				   
				   }
	               break;		
		case PORTE:
			       switch(pin) {
				   case PIN_0: 
                              GPIOE_MODER_REG->bite_register.bit_0 = 0;					   
				              GPIOE_MODER_REG->bite_register.bit_1 = 0;
				              GPIOE_OTYPER_REG->bite_register.bit_0 = 0;
				              GPIOE_PUPDR_REG->bite_register.bit_0 = 1;
				              GPIOE_PUPDR_REG->bite_register.bit_1 = 0;
				              break;
				   case PIN_1: 
                              GPIOE_MODER_REG->bite_register.bit_2 = 0;					   
				              GPIOE_MODER_REG->bite_register.bit_3 = 0;
				              GPIOE_OTYPER_REG->bite_register.bit_1 = 0;
				              GPIOE_PUPDR_REG->bite_register.bit_2 = 1;
				              GPIOE_PUPDR_REG->bite_register.bit_3 = 0;
				              break;
				   case PIN_2: 
                              GPIOE_MODER_REG->bite_register.bit_4 = 0;					   
				              GPIOE_MODER_REG->bite_register.bit_5 = 0;
				              GPIOE_OTYPER_REG->bite_register.bit_2 = 0;
				              GPIOE_PUPDR_REG->bite_register.bit_4 = 1;
				              GPIOE_PUPDR_REG->bite_register.bit_5 = 0;
				              break;
				   case PIN_3: 
                              GPIOE_MODER_REG->bite_register.bit_6 = 0;					   
				              GPIOE_MODER_REG->bite_register.bit_7 = 0;
				              GPIOE_OTYPER_REG->bite_register.bit_3 = 0;
				              GPIOE_PUPDR_REG->bite_register.bit_6 = 1;
				              GPIOE_PUPDR_REG->bite_register.bit_7 = 0;
				              break;
				   case PIN_4: 
                              GPIOE_MODER_REG->bite_register.bit_8 = 0;					   
				              GPIOE_MODER_REG->bite_register.bit_9 = 0;
				              GPIOE_OTYPER_REG->bite_register.bit_4 = 0;
				              GPIOE_PUPDR_REG->bite_register.bit_8 = 1;
				              GPIOE_PUPDR_REG->bite_register.bit_9 = 0;
				              break;
				   case PIN_5: 
                              GPIOE_MODER_REG->bite_register.bit_10 = 0;					   
				              GPIOE_MODER_REG->bite_register.bit_11 = 0;
				              GPIOE_OTYPER_REG->bite_register.bit_5 = 0;
				              GPIOE_PUPDR_REG->bite_register.bit_10 = 1;
				              GPIOE_PUPDR_REG->bite_register.bit_11 = 0;
				              break;
				   case PIN_6: 
                              GPIOE_MODER_REG->bite_register.bit_12 = 0;					   
				              GPIOE_MODER_REG->bite_register.bit_13 = 0;
				              GPIOE_OTYPER_REG->bite_register.bit_6 = 0;
				              GPIOE_PUPDR_REG->bite_register.bit_12 = 1;
				              GPIOE_PUPDR_REG->bite_register.bit_13 = 0;
				              break;
				   case PIN_7: 
                              GPIOE_MODER_REG->bite_register.bit_14 = 0;					   
				              GPIOE_MODER_REG->bite_register.bit_15 = 0;
				              GPIOE_OTYPER_REG->bite_register.bit_7 = 0;
				              GPIOE_PUPDR_REG->bite_register.bit_14 = 1;
				              GPIOE_PUPDR_REG->bite_register.bit_15 = 0;
				              break;
				   case PIN_8: 
                              GPIOE_MODER_REG->bite_register.bit_16 = 0;					   
				              GPIOE_MODER_REG->bite_register.bit_17 = 0;
				              GPIOE_OTYPER_REG->bite_register.bit_8 = 0;
				              GPIOE_PUPDR_REG->bite_register.bit_16 = 1;
				              GPIOE_PUPDR_REG->bite_register.bit_17 = 0;
				              break;
				   case PIN_9: 
                              GPIOE_MODER_REG->bite_register.bit_18 = 0;					   
				              GPIOE_MODER_REG->bite_register.bit_19 = 0;
				              GPIOE_OTYPER_REG->bite_register.bit_9 = 0;
				              GPIOE_PUPDR_REG->bite_register.bit_18 = 1;
				              GPIOE_PUPDR_REG->bite_register.bit_19 = 0;
				              break;
				   case PIN_10: 
                              GPIOE_MODER_REG->bite_register.bit_20 = 0;					   
				              GPIOE_MODER_REG->bite_register.bit_21 = 0;
				              GPIOE_OTYPER_REG->bite_register.bit_10 = 0;
				              GPIOE_PUPDR_REG->bite_register.bit_20 = 1;
				              GPIOE_PUPDR_REG->bite_register.bit_21 = 0;
				              break;
				   case PIN_11: 
                              GPIOE_MODER_REG->bite_register.bit_22 = 0;					   
				              GPIOE_MODER_REG->bite_register.bit_23 = 0;
				              GPIOE_OTYPER_REG->bite_register.bit_11 = 0;
				              GPIOE_PUPDR_REG->bite_register.bit_22 = 1;
				              GPIOE_PUPDR_REG->bite_register.bit_23 = 0;
				              break;
				   case PIN_12: 
                              GPIOE_MODER_REG->bite_register.bit_24 = 0;					   
				              GPIOE_MODER_REG->bite_register.bit_25 = 0;
				              GPIOE_OTYPER_REG->bite_register.bit_12 = 0;
				              GPIOE_PUPDR_REG->bite_register.bit_24 = 1;
				              GPIOE_PUPDR_REG->bite_register.bit_25 = 0;
				              break;
				   case PIN_13: 
                              GPIOE_MODER_REG->bite_register.bit_26 = 0;					   
				              GPIOE_MODER_REG->bite_register.bit_27 = 0;
				              GPIOE_OTYPER_REG->bite_register.bit_13 = 0;
				              GPIOE_PUPDR_REG->bite_register.bit_26 = 1;
				              GPIOE_PUPDR_REG->bite_register.bit_27 = 0;
				              break;
				   case PIN_14: 
                              GPIOE_MODER_REG->bite_register.bit_28 = 0;					   
				              GPIOE_MODER_REG->bite_register.bit_29 = 0;
				              GPIOE_OTYPER_REG->bite_register.bit_14 = 0;
				              GPIOE_PUPDR_REG->bite_register.bit_28 = 1;
				              GPIOE_PUPDR_REG->bite_register.bit_29 = 0;
				              break;
				   case PIN_15: 
                              GPIOE_MODER_REG->bite_register.bit_30 = 0;					   
				              GPIOE_MODER_REG->bite_register.bit_31 = 0;
				              GPIOE_OTYPER_REG->bite_register.bit_15 = 0;
				              GPIOE_PUPDR_REG->bite_register.bit_30 = 1;
				              GPIOE_PUPDR_REG->bite_register.bit_31 = 0;
		                      break;				   
				   }
	               break;
		default:
			       break;/*TODO error*/	
		}
}








