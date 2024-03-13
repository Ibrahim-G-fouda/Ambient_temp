/*
 * relay.c
 *
 * Created: 12/06/2023 04:32:11 م
 *  Author: handsa
 */ 
#include "DIO_drives.h"
void relay_init(unsigned char port ,unsigned char pin)
{
	dio_set_pin(port,pin,1);
}
void relay_on(unsigned char port ,unsigned char pin)
{
	dio_write_pin(port,pin,1);
}
void relay_off(unsigned char port ,unsigned char pin)
{
	dio_write_pin(port,pin,0);
}
void relay_tojjle(unsigned char port ,unsigned char pin)
{
	dio_toggle_pin(port,pin);
}