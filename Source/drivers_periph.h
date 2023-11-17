#ifndef __DRIVERS_PERIPH_H
#define __DRIVERS_PERIPH_H

/*
 * ��������� ���������� ���� � 1
 * ������ :
 * INIT_PIN_OUT(A, 10) - ��������� ���� 10, ����� � � 1.
 */
#define PIN_SET(port,pin) GPIO##port##_BSRR_REG_REG->bite_register.bit_##pin = 1

/*
 * ��������� ���������� ���� � 0
 * ������ �������� ���� �� ��������� +16.
 * ������ :
 * INIT_PIN_OUT(A, 17) - ��������� ���� 1, ����� � � 0.
 */
#define PIN_SET(port,pin) GPIO##port##_BSRR_REG_REG->bite_register.bit_##pin = 1










#endif /*__DRIVERS_PERIPH_H */




