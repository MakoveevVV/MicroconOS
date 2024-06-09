#ifndef __PERIPHERY_STD_H
#define __PERIPHERY_STD_H

/*
 * ������������� � �������� ��������� ��
 *
 * Author: Makoveev V.V. <vvmakoveev@yandex.ru>
 */

#include "macro_reg.h"

/*
 * ������������� ���� �� ����(������), �������� � 3.3V
 * ������ :
 * PIN_0_INIT_BUTTON(E) - ������������� ���� 0 ����� �
 */
#define PIN_0_INIT_BUTTON(port) GPIO##port##_PUPDR_REG->bite_register.bit_0 = 1
#define PIN_1_INIT_BUTTON(port) GPIO##port##_PUPDR_REG->bite_register.bit_2 = 1
#define PIN_2_INIT_BUTTON(port) GPIO##port##_PUPDR_REG->bite_register.bit_4 = 1
#define PIN_3_INIT_BUTTON(port) GPIO##port##_PUPDR_REG->bite_register.bit_6 = 1
#define PIN_4_INIT_BUTTON(port) GPIO##port##_PUPDR_REG->bite_register.bit_8 = 1
#define PIN_5_INIT_BUTTON(port) GPIO##port##_PUPDR_REG->bite_register.bit_10 = 1
#define PIN_6_INIT_BUTTON(port) GPIO##port##_PUPDR_REG->bite_register.bit_12 = 1
#define PIN_7_INIT_BUTTON(port) GPIO##port##_PUPDR_REG->bite_register.bit_14 = 1
#define PIN_8_INIT_BUTTON(port) GPIO##port##_PUPDR_REG->bite_register.bit_16 = 1
#define PIN_9_INIT_BUTTON(port) GPIO##port##_PUPDR_REG->bite_register.bit_18 = 1
#define PIN_10_INIT_BUTTON(port) GPIO##port##_PUPDR_REG->bite_register.bit_20 = 1
#define PIN_11_INIT_BUTTON(port) GPIO##port##_PUPDR_REG->bite_register.bit_22 = 1
#define PIN_12_INIT_BUTTON(port) GPIO##port##_PUPDR_REG->bite_register.bit_24 = 1
#define PIN_13_INIT_BUTTON(port) GPIO##port##_PUPDR_REG->bite_register.bit_26 = 1
#define PIN_14_INIT_BUTTON(port) GPIO##port##_PUPDR_REG->bite_register.bit_28 = 1
#define PIN_15_INIT_BUTTON(port) GPIO##port##_PUPDR_REG->bite_register.bit_30 = 1


/*
 * ������������� ���� �� �����, �������� low
 * ������ :
 * PIN_0_INIT_OUT(A) - ������������� ���� 0 ����� A
 */
#define PIN_0_INIT_OUT(port) GPIO##port##_MODER_REG->bite_register.bit_0 = 1
#define PIN_1_INIT_OUT(port) GPIO##port##_MODER_REG->bite_register.bit_2 = 1
#define PIN_2_INIT_OUT(port) GPIO##port##_MODER_REG->bite_register.bit_4 = 1
#define PIN_3_INIT_OUT(port) GPIO##port##_MODER_REG->bite_register.bit_6 = 1
#define PIN_4_INIT_OUT(port) GPIO##port##_MODER_REG->bite_register.bit_8 = 1
#define PIN_5_INIT_OUT(port) GPIO##port##_MODER_REG->bite_register.bit_10 = 1
#define PIN_6_INIT_OUT(port) GPIO##port##_MODER_REG->bite_register.bit_12 = 1
#define PIN_7_INIT_OUT(port) GPIO##port##_MODER_REG->bite_register.bit_14 = 1
#define PIN_8_INIT_OUT(port) GPIO##port##_MODER_REG->bite_register.bit_16 = 1
#define PIN_9_INIT_OUT(port) GPIO##port##_MODER_REG->bite_register.bit_18 = 1
#define PIN_10_INIT_OUT(port) GPIO##port##_MODER_REG->bite_register.bit_20 = 1
#define PIN_11_INIT_OUT(port) GPIO##port##_MODER_REG->bite_register.bit_22 = 1
#define PIN_12_INIT_OUT(port) GPIO##port##_MODER_REG->bite_register.bit_24 = 1
#define PIN_13_INIT_OUT(port) GPIO##port##_MODER_REG->bite_register.bit_26 = 1
#define PIN_14_INIT_OUT(port) GPIO##port##_MODER_REG->bite_register.bit_28 = 1
#define PIN_15_INIT_OUT(port) GPIO##port##_MODER_REG->bite_register.bit_30 = 1


/*
 * ������ ������������ �� ����
 * ������ :
 * PIN_0_INIT_OUT(A) - ������������� ���� 0 ����� A
 */
#define PORTA_CLOCK RCC_AHB1ENR_REG->bite_register.bit_0 = 1
#define PORTB_CLOCK RCC_AHB1ENR_REG->bite_register.bit_1 = 1
#define PORTC_CLOCK RCC_AHB1ENR_REG->bite_register.bit_2 = 1
#define PORTD_CLOCK RCC_AHB1ENR_REG->bite_register.bit_3 = 1
#define PORTE_CLOCK RCC_AHB1ENR_REG->bite_register.bit_4 = 1
#define PORTF_CLOCK RCC_AHB1ENR_REG->bite_register.bit_5 = 1
#define PORTG_CLOCK RCC_AHB1ENR_REG->bite_register.bit_6 = 1
#define PORTH_CLOCK RCC_AHB1ENR_REG->bite_register.bit_7 = 1
#define PORTI_CLOCK RCC_AHB1ENR_REG->bite_register.bit_8 = 1

/* ���������� ������� ������������� */
void rcc_init(void);
void mco2_init(void);
void i2c1_init(void);




/*
 * ��������� ���������� ���� � 1
 * ������ :
 * PIN_0_SET(A, 10) - ��������� ���� 10, ����� � � 1.
 */
#define PIN_0_SET(port) GPIO##port##_BSRR_REG->bite_register.bit_0 = 1
#define PIN_1_SET(port) GPIO##port##_BSRR_REG->bite_register.bit_1 = 1
#define PIN_2_SET(port) GPIO##port##_BSRR_REG->bite_register.bit_2 = 1
#define PIN_3_SET(port) GPIO##port##_BSRR_REG->bite_register.bit_3 = 1
#define PIN_4_SET(port) GPIO##port##_BSRR_REG->bite_register.bit_4 = 1
#define PIN_5_SET(port) GPIO##port##_BSRR_REG->bite_register.bit_5 = 1
#define PIN_6_SET(port) GPIO##port##_BSRR_REG->bite_register.bit_6 = 1
#define PIN_7_SET(port) GPIO##port##_BSRR_REG->bite_register.bit_7 = 1
#define PIN_8_SET(port) GPIO##port##_BSRR_REG->bite_register.bit_8 = 1
#define PIN_9_SET(port) GPIO##port##_BSRR_REG->bite_register.bit_9 = 1
#define PIN_10_SET(port) GPIO##port##_BSRR_REG->bite_register.bit_10 = 1
#define PIN_11_SET(port) GPIO##port##_BSRR_REG->bite_register.bit_11 = 1
#define PIN_12_SET(port) GPIO##port##_BSRR_REG->bite_register.bit_12 = 1
#define PIN_13_SET(port) GPIO##port##_BSRR_REG->bite_register.bit_13 = 1
#define PIN_14_SET(port) GPIO##port##_BSRR_REG->bite_register.bit_14 = 1
#define PIN_15_SET(port) GPIO##port##_BSRR_REG->bite_register.bit_15 = 1

/*
 * ��������� ���������� ���� � 0
 * ������ :
 * PIN_0_RESET(A) - ��������� ���� 0, ����� � � 0.
 */
#define PIN_0_RESET(port) GPIO##port##_BSRR_REG->bite_register.bit_16 = 1
#define PIN_1_RESET(port) GPIO##port##_BSRR_REG->bite_register.bit_17 = 1
#define PIN_2_RESET(port) GPIO##port##_BSRR_REG->bite_register.bit_18 = 1
#define PIN_3_RESET(port) GPIO##port##_BSRR_REG->bite_register.bit_19 = 1
#define PIN_4_RESET(port) GPIO##port##_BSRR_REG->bite_register.bit_20 = 1
#define PIN_5_RESET(port) GPIO##port##_BSRR_REG->bite_register.bit_21 = 1
#define PIN_6_RESET(port) GPIO##port##_BSRR_REG->bite_register.bit_22 = 1
#define PIN_7_RESET(port) GPIO##port##_BSRR_REG->bite_register.bit_23 = 1
#define PIN_8_RESET(port) GPIO##port##_BSRR_REG->bite_register.bit_24 = 1
#define PIN_9_RESET(port) GPIO##port##_BSRR_REG->bite_register.bit_25 = 1
#define PIN_10_RESET(port) GPIO##port##_BSRR_REG->bite_register.bit_26 = 1
#define PIN_11_RESET(port) GPIO##port##_BSRR_REG->bite_register.bit_27 = 1
#define PIN_12_RESET(port) GPIO##port##_BSRR_REG->bite_register.bit_28 = 1
#define PIN_13_RESET(port) GPIO##port##_BSRR_REG->bite_register.bit_29 = 1
#define PIN_14_RESET(port) GPIO##port##_BSRR_REG->bite_register.bit_30 = 1
#define PIN_15_RESET(port) GPIO##port##_BSRR_REG->bite_register.bit_31 = 1

/* ���������� ������� ��������� ��������� */
void delay_ms(unsigned int delay);
int i2c_send(unsigned short address, unsigned char *data, unsigned short size);

















#endif /*__PERIPHERY_STD_H */


//#define PIN_RESET(port,pin) GPIO##port##_BSRR_REG->bite_register.bit_##pin = 1




