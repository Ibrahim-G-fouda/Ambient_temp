/*
 * temperature_ampient_temp_control.c
 *
 * Created: 12/03/2024 11:43:16 م
 *  Author: handsa
 */ 


#include <avr/io.h>
#include "prog init.h"
volatile unsigned short count1=0,count2=0;//timing for 2 exhaust fans
unsigned short time1,time2,temp;
unsigned char key_val=0xff,ones=0,tens=0;
	unsigned char str[10];
int main(void)
{
	
	adc_init();
	lcd_init();//d
	keypad_init('c');
	lcd_send_cmd(disp_on_cursor_off);
	relay_init('b' ,0);
		relay_init('b' ,1);
	relay_init('b' ,4);
	lcd_send_string("time m1 sec=");
	
	do 
	{
key_val=keypad_read('c');

	}while (key_val==0xff);
	lcd_send_char(key_val);
	dm(200);
			tens=(key_val-48)*10;
	
		do
		{
			key_val=keypad_read('c');

		} while (key_val==0xff);
		lcd_send_char(key_val);
			dm(200);

		ones=(key_val-48);
		
		time1=(ones+tens)*32;
	lcd_move_cursor(2,1);
	lcd_send_string("time m2 sec=");
	
	do
	{
		key_val=keypad_read('c');

	} while (key_val==0xff);
	lcd_send_char(key_val);
		dm(200);
		tens=(key_val-48)*10;

	do
	{
		key_val=keypad_read('c');

	} while (key_val==0xff);
	lcd_send_char(key_val);
		dm(200);

	ones=(key_val-48);
	unsigned char x=tens+ones;
	
	time2=(ones+tens)*32;
	
	lcd_clrscrean();	
	lcd_send_string("let's start");
	dm(500);
		
		lcd_clrscrean();	
		tim0_fast_pwm(64);//////////////////////////////////
lcd_send_string("temp :");
	while(1)
    {//
         temp=(adc_read()*.25);
         if (temp<10)
         {
			   relay_off('b',1);
	         lcd_move_cursor(1,6);
	         //lcd_send_char('0');
	         //lcd_send_char('0');
	         tostring(str,temp);
	         lcd_send_string(str);

	         lcd_send_char(0xdf);
	         lcd_send_char('c');
	         lcd_send_char(0x20);
	         lcd_send_char(0x20);
clr_bit(DDRB,3);

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
	         
if (count1<time1)
{
 relay_on('b',0);
 relay_off('b',4);
}
else if((count1>time1)&&(count2<time2))
{
	
	 relay_on('b',4);
	 relay_off('b',0);
	
}
else
{
count1=0;
count2=0;
}
  }   
      else if(temp<50)
         {
	            clr_bit(DDRB,3);
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
relay_on('b',4);
relay_on('b',0);
relay_off('b',1);
OCR0=0;

         }
       else if(temp<70)
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
			    lcd_send_char(0x20);
			    lcd_send_char(0x20);
 relay_on('b',4);
 relay_on('b',0);
  relay_on('b',1);
    OCR0=50;
	  set_bit(DDRB,3);
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
	   lcd_send_string("very hi temp!!");
	   lcd_send_char(0x20);
	   lcd_send_char(0x20);
	   lcd_send_char(0x20);
	   lcd_send_char(0x20); 
relay_on('b',4);
relay_on('b',0);
relay_on('b',1);
OCR0=250;
set_bit(DDRB,3);
   }
   
    }
}
ISR(TIMER0_OVF_vect)
{
	count1++;
	if (count1>time1)
	{
		
		count2++;
	}

}