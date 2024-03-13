/*
 * ADC_drives.h
 *
 * Created: 16/07/2023 01:47:43 م
 *  Author: handsa
 */ 


#ifndef ADC_DRIVES_H_
#define ADC_DRIVES_H_
void adc_init(void);
unsigned short adc_read(void);
unsigned short lm35_temp_read(void);



#endif /* ADC_DRIVES_H_ */