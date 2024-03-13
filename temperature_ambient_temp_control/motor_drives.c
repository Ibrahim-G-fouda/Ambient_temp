/*
 * motor_drives.c
 *
 * Created: 09/03/2024 07:17:16 م
 *  Author: handsa
 */ 
#include "DIO_drives.h"
#include "motor_drives.h"
void motor_selective_mode_init(unsigned char port)
{
	#if defined sellective_mode1

		dio_set_pin(port,in11,1);
		dio_set_pin(port,in12,1);	
	#elif defined general_mode
	dio_set_pin(port,in11,1);
	dio_set_pin(port,in12,1);
	//dio_set_pin(port,en1,1);
	dio_set_pin(port,en2,1);
	dio_set_pin(port, in21,1);
		dio_set_pin(port, in22,1);


#endif
}
void clockwise1(unsigned char port)
{
	#if defined sellective_mode1

		dio_write_pin(port,in11,1);
		dio_write_pin(port,in12,0);
	#elif defined general_mode
	dio_write_pin(port,in11,1);
	dio_write_pin(port,in12,0);
	
	
	#endif

}

void clockwise2(unsigned char port)
{
	#if defined sellective_mode1

	dio_write_pin(port,in11,1);
	dio_write_pin(port,in12,0);
	#elif defined general_mode
	
	dio_write_pin(port,in21,1);
	dio_write_pin(port,in22,0);
	
	#endif
}
void anti_clockwise1(unsigned char port)
{
	
	#if defined sellective_mode1
	
		dio_write_pin(port,in11,0);
		dio_write_pin(port,in12,1);
#elif defined general_mode
dio_write_pin(port,in11,0);
dio_write_pin(port,in12,1);

	#endif
	
}	
void anti_clockwise2(unsigned char port)
{
#if defined sellective_mode1

dio_write_pin(port,in11,0);
dio_write_pin(port,in12,1);
#elif defined general_mode

dio_write_pin(port,in21,0);
dio_write_pin(port,in22,1);

#endif
	
}
void stop_motor1(unsigned char port)
{
	
	#if defined sellective_mode1

		dio_write_pin(port,in11,0);
		dio_write_pin(port,in12,0);
	#elif defined general_mode
	dio_write_pin(port,in11,0);
	dio_write_pin(port,in12,0);
	
	#endif
}
void stop_motor2(unsigned char port)
{
	#if defined sellective_mode1

	dio_write_pin(port,in11,0);
	dio_write_pin(port,in12,0);
	#elif defined general_mode
	dio_write_pin(port,in21,0);
	dio_write_pin(port,in22,0);
	#endif
}	