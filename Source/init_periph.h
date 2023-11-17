#ifndef __INIT_PERIPH_H
#define __INIT_PERIPH_H

/*
 * ������� ������������� ��������� 
 * TODO
 */

/*
 * ������������� ���� �� ����(������), �������� � 3.3V
 * ����� ������ �������� ���� �� ��������� �2(����� ���� 0)
 * ������ :
 * INIT_PIN_BUTTON(E, 8) - ������������� ���� 4 ����� �
 */
#define INIT_PIN_BUTTON(port,pin) GPIO##port##_PUPDR_REG->bite_register.bit_##pin = 1

/*
 * ������������� ���� �� �����, �������� low
 * ����� ������ �������� ���� �� ��������� �2(����� ���� 0)
 * ������ :
 * INIT_PIN_OUT(A, 12) - ������������� ���� 6 ����� A
 */
#define INIT_PIN_OUT(port,pin) GPIO##port##_MODER_REG->bite_register.bit_##pin = 1



void rcc_init(void);
void mco2_init(void);





#endif /*__INIT_PERIPH_H */




