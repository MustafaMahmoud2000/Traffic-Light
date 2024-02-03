/*
 * std_macros.h
 *
 * Created: 9/30/2023 6:04:34 AM
 *  Author: DELL
 */ 


#ifndef STD_MACROS_H_
#define STD_MACROS_H_

#define REGISTER_SIZE 8
#define SET_BIT(reg,bit) reg|=(1<<bit) 
#define CLEAR_BIT(reg,bit) reg&=~(1<<bit)
#define TOGGAL_BIT(reg,bit) reg^=(1<<bit)
#define READ_BIT(reg,bit)  ((reg&(1<<bit))>>bit)
#define ROL_BIT(reg,num) reg=((reg>>(REGISTER_SIZE -num))|(reg<<num))
#define ROR_BIT(reg,num) reg=((reg<<(REGISTER_SIZE -num))|(reg>>num))


#endif /* STD_MACROS_H_ */