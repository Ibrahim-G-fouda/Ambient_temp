/*
 * motor_drives.h
 *
 * Created: 09/03/2024 07:17:40 م
 *  Author: handsa
 */ 


#ifndef MOTOR_DRIVES_H_
#define MOTOR_DRIVES_H_
#include "motor_modes.h"
void motor_selective_mode_init(unsigned char port);
void clockwise1(unsigned char port);
void clockwise2(unsigned char port);
void anti_clockwise1(unsigned char port);
void anti_clockwise2(unsigned char port);
void stop_motor1(unsigned char port);
void stop_motor2(unsigned char port);

#endif /* MOTOR_DRIVES_H_ */
