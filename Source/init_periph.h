#ifndef __INIT_PERIPH_H
#define __INIT_PERIPH_H

/*
 * Функции инициализации периферии 
 * TODO
 */

/*
 * Инициализация пина на вход(кнопка), подтяжка к 3.3V
 * После второй параметр идет со смешением х2(после пина 0)
 * Пример :
 * INIT_PIN_BUTTON(E, 8) - инициализация пина 4 порта Е
 */
#define INIT_PIN_BUTTON(port,pin) GPIO##port##_PUPDR_REG->bite_register.bit_##pin = 1

/*
 * Инициализация пина на выход, скорость low
 * После второй параметр идет со смешением х2(после пина 0)
 * Пример :
 * INIT_PIN_OUT(A, 12) - инициализация пина 6 порта A
 */
#define INIT_PIN_OUT(port,pin) GPIO##port##_MODER_REG->bite_register.bit_##pin = 1



void rcc_init(void);
void mco2_init(void);





#endif /*__INIT_PERIPH_H */




