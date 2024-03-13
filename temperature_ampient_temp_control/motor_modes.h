/*
 * motor_modes.h
 *
 * Created: 09/03/2024 07:23:57 م
 *  Author: handsa
 */ 


#ifndef MOTOR_MODES_H_
#define MOTOR_MODES_H_
//#define sellective_mode1
//#define sellective_mode2
#define general_mode
#if defined general_mode

#define in11 0
	#define in12 1
	#define en1 2
		#define in21 4
	#define in22 5
#define en2 6


#elif defined (sellective_mode)

	
	#define in21 2
	#define in22 3

#elif defined sellective_mode1

	
	#define in11 0
	#define in12 1





#endif



#endif /* MOTOR_MODES_H_ */