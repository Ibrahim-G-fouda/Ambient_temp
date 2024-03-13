/*
 * relay1.h
 *
 * Created: 12/06/2023 04:32:38 م
 *  Author: handsa
 */ 


#ifndef RELAY1_H_
#define RELAY1_H_
void  relay_init(unsigned char port ,unsigned char pin);
void relay_on(unsigned char port ,unsigned char pin);
void relay_off(unsigned char port ,unsigned char pin);
void relay_tojjle(unsigned char port ,unsigned char pin);

#endif /* RELAY1_H_ */