#ifndef __DRIVERS_PERIPH_H
#define __DRIVERS_PERIPH_H

/*
 * Установка выбранного пина в 1
 * Пример :
 * INIT_PIN_OUT(A, 10) - установка пина 10, порта А в 1.
 */
#define PIN_SET(port,pin) GPIO##port##_BSRR_REG_REG->bite_register.bit_##pin = 1

/*
 * Установка выбранного пина в 0
 * Второй параметр идет со смещением +16.
 * Пример :
 * INIT_PIN_OUT(A, 17) - установка пина 1, порта А в 0.
 */
#define PIN_SET(port,pin) GPIO##port##_BSRR_REG_REG->bite_register.bit_##pin = 1










#endif /*__DRIVERS_PERIPH_H */




