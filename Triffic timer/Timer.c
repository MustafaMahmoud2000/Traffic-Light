#include <avr/io.h>
#include <avr/interrupt.h>
#include "std_macros.h"
void TIMER_CTC_INIT(void)
{
	sei();
	SET_BIT(TCCR0,CS00);//clock
	SET_BIT(TCCR0,CS02);//clock
	SET_BIT(TCCR0,WGM01);//mode
	OCR0=80;
	SET_BIT(TIMSK,OCIE0);//enable
}