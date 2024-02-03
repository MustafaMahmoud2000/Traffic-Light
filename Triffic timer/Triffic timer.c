/*
 * Triffic_timer.c
 *
 * Created: 11/17/2023 10:41:56 PM
 *  Author: Mustafa mahmoud saad
 */ 
#include "Timre.h"
#include "LCD 8BIT.h"
#include "LED.h"
#include "std_macros.h"
#include <avr/io.h>
#include "DIO.h"
#define F_CPU 8000000UL
#include <util/delay.h>
#include "avr/interrupt.h"
volatile unsigned short counter=0;
unsigned char counter_g=40;
unsigned char counter_y=10;
unsigned char counter_r=40;
int main(void)
{
    LCD_INIT();
	vLed_init('d',0);
	vLed_init('d',1);
	vLed_init('d',2);
	LCD_MOVE_CURSOR(1,5);
	LCD_SEND_STRING("Welcome");
	LCD_MOVE_CURSOR(2,2);
	LCD_SEND_STRING("traffic light");
	_delay_ms(500);
	LCD_clear_screen();
	TIMER_CTC_INIT();
	
    while(1)
    {
		 counter_g=40;
		 counter_y=10;
		 counter_r=40;
		 LCD_clear_screen();
		 LCD_SEND_STRING("remaining 40 sec");
		 vLed_on('d',0);
		 while(counter_g>0)
		 {
			 if (counter>=50)
			 {
				 counter=0;
				 counter_g--;
				 LCD_MOVE_CURSOR(1,11);
				 LCD_SEND_CHAR((counter_g/10)+48);
				 LCD_MOVE_CURSOR(1,12);
				 LCD_SEND_CHAR((counter_g%10)+48);	  
			 }
		 }	
		 _delay_ms(300);
		 vLed_on('d',1);
		 vLed_off('d',0);
		 LCD_clear_screen();
		 LCD_SEND_STRING("remaining 10 sec");
		  while(counter_y>0)
		  {
			  if (counter>=50)
			  {
				  counter=0;
				  counter_y--;
				 LCD_MOVE_CURSOR(1,11);
				 LCD_SEND_CHAR(' ');
				 LCD_SEND_CHAR((counter_y%10)+48);
				 
			  }
		  }
		  _delay_ms(300);
		  vLed_on('d',2);
		  vLed_off('d',1);
		  LCD_clear_screen();
		  LCD_SEND_STRING("remaining 40 sec");
		  while(counter_r>0)
		  {
			  if (counter>=50)
			  {
				  counter=0;
				  counter_r--;
				  LCD_MOVE_CURSOR(1,11);
				  LCD_SEND_CHAR((counter_r/10)+48);
				  LCD_MOVE_CURSOR(1,12);
				  LCD_SEND_CHAR((counter_r%10)+48);
			  }
		  }
		  _delay_ms(400);
		  vLed_off('d',2);
		  	 
       
    }
}
ISR(TIMER0_COMP_vect)
{
	counter++;
}