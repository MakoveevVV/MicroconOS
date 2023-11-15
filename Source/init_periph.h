#ifndef __INIT_PERIPH_H
#define __INIT_PERIPH_H

/*
 * Функции инициализации периферии 
 */


enum gpio_pins
{
		PIN_0,
		PIN_1,
		PIN_2,
		PIN_3,
		PIN_4,
		PIN_5,
		PIN_6,
		PIN_7,
		PIN_8,
		PIN_9,
		PIN_10,
		PIN_11,
		PIN_12,
		PIN_13,
		PIN_14,
		PIN_15
};

enum gpio_ports
{
		PORTA,
		PORTB,
		PORTC,
		PORTD,
		PORTE
};


/*TODO*/
enum gpio_pin_function
{
	pin_input,
	pin_output,
	pin_alternate,
	pin_analog
};


void init_gpio(void);

void init_butthon(enum gpio_ports port, enum gpio_pins pin);

void init_pin_out(enum gpio_ports port, enum gpio_pins pin);

void gpio_pin_write();

void gpio_pin_read();









#endif /*__INIT_PERIPH_H */




