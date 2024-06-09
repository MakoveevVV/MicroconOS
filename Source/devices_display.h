#ifndef __DEVICES_DISPLAY_H
#define __DEVICES_DISPLAY_H
#include "stm32f4xx.h"

void sendbyte(uint8_t c, uint8_t mode);

void pcf8574_display_clear(void);

void LCD_SendChar(char ch);

void pcf8574_display_string(char* str);

void LCD_SetPos(uint8_t x, uint8_t y);

void pcf8574_display_init(void);









#endif /*__DEVICES_DISPLAY_H */