/*
 * LED.h
 *
 * Created: 10/7/2023 3:12:44 AM
 *  Author: DELL
 */ 


#ifndef LED_H_
#define LED_H_
void vLed_init(unsigned char port, unsigned char pin);
void vLed_on(unsigned char port,unsigned char pin);
void vLed_off(unsigned char port,unsigned char pin);
void vLed_toggle(unsigned char port,unsigned char pin);

#endif /* LED_H_ */