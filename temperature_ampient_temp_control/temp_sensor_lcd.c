/*
 * temp_sensor_lcd.c
 *
 * Created: 18/07/2023 05:19:22 م
 *  Author: handsa
 */ 

 
#include "prog init.h"
	char str[10];
int main(void)
{
    unsigned short temp;

	lcd_init();
	lcd_send_cmd(disp_on_cursor_off);
	adc_init();
	/*set_bit(ADMUX,REFS0);
	set_bit(ADMUX,REFS1 );
	set_bit(ADMUX,MUX2);*/
	lcd_send_string("temp=");
	
	while(1)
    {
    temp=(adc_read()*.25);
	if (temp<10)
	{
	lcd_move_cursor(1,6);
	//lcd_send_char('0');
		//lcd_send_char('0');
		tostring(str,temp);
		lcd_send_string(str);

		lcd_send_char(0xdf);
			lcd_send_char('c');
			lcd_send_char(0x20);
			lcd_send_char(0x20);


		lcd_move_cursor(2,1);
	lcd_send_string("lo temp");
	lcd_send_char(0x20);
	lcd_send_char(0x20);
	lcd_send_char(0x20);
	lcd_send_char(0x20);
	lcd_send_char(0x20);
	lcd_send_char(0x20);
	lcd_send_char(0x20);
	lcd_send_char(0x20);

	}
	else if(temp<100)
	{
		lcd_move_cursor(1,6);
		//lcd_send_char('0');
		//lcd_send_char('0');
		tostring(str,temp);
		lcd_send_string(str);
		lcd_send_char(0xdf);
		lcd_send_char('c');
		lcd_send_char(0x20);
		lcd_send_char(0x20);


		lcd_move_cursor(2,1);
		
			
			lcd_send_string("Moderate temp");
lcd_send_char(0x20);
lcd_send_char(0x20);


	}
	else
	{
		lcd_move_cursor(1,6);
		//lcd_send_char('0');
		//lcd_send_char('0');
		tostring(str,temp);
		lcd_send_string(str);
		
		lcd_send_char(0xdf);
		lcd_send_char('c');
		lcd_send_char(0x20);
		lcd_send_char(0x20);


			lcd_move_cursor(2,1);
			lcd_send_string("hi temp!!");
			lcd_send_char(0x20);
			lcd_send_char(0x20);
			lcd_send_char(0x20);
			lcd_send_char(0x20);
	}
	} 
}