/*
 * ADC_drives.c
 *
 * Created: 16/07/2023 01:47:11 م
 *  Author: handsa
 */ 
#include "prog init.h"
#include "std_macros1.h"

void adc_init(void)
{
	set_bit(ADMUX,REFS0);
	
	set_bit(ADMUX,REFS1);// set bit 6,7 in ADMUX register so thar the v ref = 2,65v
	set_bit(ADCSRA,ADEN);
	set_bit(ADCSRA,ADPS2);// set bit 1,2 in ADCSRA so that prescaller = 1/64
set_bit(ADCSRA,ADPS1);
}
unsigned short adc_read(void)
{
	unsigned short read_val;
	set_bit(ADCSRA,ADSC);   /* you have to read ADCL first then read ADCH or the register will be locked*/
	while(read_bit(ADCSRA,ADSC)==1);
	read_val=ADCL;
	read_val=read_val|(ADCH<<8);
	return read_val;
	
}
unsigned short lm35_temp_read(void)
{
	return(adc_read()*25);
}