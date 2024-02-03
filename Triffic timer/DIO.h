/*
 * DIO.h
 *
 * Created: 10/2/2023 10:39:55 PM
 *  Author: DELL
 */ 


#ifndef DIO_H_
#define DIO_H_
void vDIO_SET_BIT_DIR(unsigned char port,unsigned char pin,unsigned char dir);
void vDIO_WRITE_BIT(unsigned char port,unsigned char pin,unsigned char val);
void vDIO_TOGGLE_BIT(unsigned char port,unsigned char pin);
unsigned char u8DIO_READ_BIT(unsigned char port,unsigned char pin);
void vDIO_SET_PORT(unsigned char port,unsigned char pin);
void vDIO_WRITE_PORT(unsigned char port,unsigned char val);
unsigned char u8DIO_READ_PORT(unsigned char port);
void vDIO_TOGGLE_PORT(unsigned char port);
void vDIO_PULLUP_CONNECT(unsigned char port,unsigned char pin,unsigned char connect);
void vDIO_WRITE_LOW_NIBBLE(unsigned char port,unsigned char value);
void vDIO_WRITE_HIGH_NIBBLE(unsigned char port,unsigned char value);
#endif /* DIO_H_ */