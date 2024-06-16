#include "devices_display.h"
#include "periphery_std.h"


uint8_t buf[1]={0};

char str1[100];
uint8_t portlcd; //€чейка дл€ хранени€ данных порта микросхемы расширени€


__STATIC_INLINE void DelayMicro(__IO uint32_t micros)
{
		micros *=(SystemCoreClock / 1000000) / 5;
		while (micros--);
}


void pcf8574_display_write(uint8_t bt)
{
		buf[0]=bt;
		i2c_send((uint16_t) 0x4E, buf, 1);
}


static void send_halfbyte(uint8_t c)
{
		c<<=4;
		pcf8574_display_write(portlcd|=0x04);
		DelayMicro(50);
		pcf8574_display_write(portlcd | c);
		pcf8574_display_write(portlcd&=~0x04);
		DelayMicro(50);
}


void sendbyte(uint8_t c, uint8_t mode)
{
		if(!mode)
				pcf8574_display_write(portlcd&=~0x01);
		else
				pcf8574_display_write(portlcd|=0x01);
		
		uint8_t hc = 0;
		hc = c>>4;
		send_halfbyte(hc);
		send_halfbyte(c);
}


void pcf8574_display_clear(void)
{
		sendbyte(0x01,0);
		delay_ms(2);
}


void LCD_SendChar(char ch)
{
		sendbyte(ch,1);
}


void pcf8574_display_string(char* str)
{
		uint8_t i = 0;
	
		while(str[i]!=0) {
				sendbyte(str[i],1);
				i++;
		}
}


void LCD_SetPos(uint8_t x, uint8_t y)
{
		switch(y) {
		case 0:
				sendbyte(x|0x80,0);
			    delay_ms(1);
			    break;
		case 1:
			    sendbyte((0x40+x)|0x80,0);
			    delay_ms(1);
			    break;
		case 2:
			    sendbyte((0x14+x)|0x80,0);
			    delay_ms(1);
			    break;
		case 3:
			    sendbyte((0x54+x)|0x80,0);
			    delay_ms(1);
			    break;
		}
}


void pcf8574_display_init(void)
{
		delay_ms(15);
		send_halfbyte(0x03);
		delay_ms(4);
		send_halfbyte(0x03);
		DelayMicro(100);
		send_halfbyte(0x03);
		delay_ms(1);
		send_halfbyte(0x02);
		delay_ms(1);
		sendbyte(0x28,0);
		delay_ms(1);
		sendbyte(0x0C,0);
		delay_ms(1);
		sendbyte(0x01,0);
		delay_ms(2);
		sendbyte(0x06,0);
		delay_ms(1);
		pcf8574_display_write(portlcd|=0x08);//подсветка
		pcf8574_display_write(portlcd&=~0x02);//запись
}















