#include <avr/io.h>
#include "std_macros.h"
#include "DIO.h"

void vDIO_SET_BIT_DIR(unsigned char port,unsigned char pin,unsigned char dir)
{
	switch(port)
	{
		case'A':
		case'a':
		if(dir==1)
		{
			SET_BIT(DDRA,pin);
		}
		else
		{
			CLEAR_BIT(DDRA,pin);
		}
		break;
		case'B':
		case'b':
		if(dir==1)
		{
			SET_BIT(DDRB,pin);
		}
		else
		{
			CLEAR_BIT(DDRB,pin);
		}
		break;
		case'C':
		case'c':
		if(dir==1)
		{
			SET_BIT(DDRC,pin);
		}
		else
		{
			CLEAR_BIT(DDRC,pin);
		}
		break;
		case'D':
		case'd':
		if(dir==1)
		{
			SET_BIT(DDRD,pin);
		}
		else
		{
			CLEAR_BIT(DDRD,pin);
		}
		break;
		default:
		break;
		
	}
}
void vDIO_WRITE_BIT(unsigned char port,unsigned char pin,unsigned char val)
{
	switch(port)
  {
	case'A':
	case'a':
	if(val==1)
	{
		SET_BIT(PORTA,pin);
	}
	else
	{
		CLEAR_BIT(PORTA,pin);
	}
	break;
	case'B':
	case'b':
	if(val==1)
	{
		SET_BIT(PORTB,pin);
	}
	else
	{
		CLEAR_BIT(PORTB,pin);
	}
	break;
	case'C':
	case'c':
	if(val==1)
	{
		SET_BIT(PORTC,pin);
	}
	else
	{
		CLEAR_BIT(PORTC,pin);
	}
	break;
	case'D':
	case'd':
	if(val==1)
	{
		SET_BIT(PORTD,pin);
	}
	else
	{
		CLEAR_BIT(PORTD,pin);
	}
	break;
	default:
	break;
	
  }
}
void vDIO_TOGGLE_BIT(unsigned char port,unsigned char pin)
{
switch(port)
{
	case'A':
	case'a':
	TOGGAL_BIT(PORTA,pin);
	break;
	case'B':
	case'b':
	TOGGAL_BIT(PORTB,pin);
	break;
	case'C':
	case'c':
	TOGGAL_BIT(PORTC,pin);
	break;
	case'D':
	case'd':
	TOGGAL_BIT(PORTD,pin);
	break;
	default:
	break;
}		
}
unsigned char u8DIO_READ_BIT(unsigned char port, unsigned char pin)
{

	switch(port)
	{
		case'A':
		case'a':
		return READ_BIT(PINA,pin);
		break;
		case'B':
		case'b':
		return READ_BIT(PINB,pin);
		break;
		case'C':
		case'c':
		return READ_BIT(PINC,pin);
		break;
		case'D':
		case'd':
		return READ_BIT(PIND,pin);
		break;
		default:
		break;
   }
}
void vDIO_SET_PORT( unsigned char port,unsigned char dir)
{
	switch(port)
	{
		case 'A':
		case 'a':
		DDRA=dir;
		break;
		case 'B':
		case 'b':
		DDRB=dir;
		break;
		case 'C':
		case 'c':
		DDRC=dir;
		break;
		case 'D':
		case 'd':
		DDRD=dir;
		break;
		default:
		break;
	}
}
void vDIO_WRITE_PORT(unsigned char port,unsigned char val)
{
	switch(port)
	{
		case 'A':
		case 'a':
		PORTA=val;
		break;
		case 'B':
		case 'b':
		PORTB=val;
		break;
		case 'C':
		case 'c':
		PORTC=val;
		break;
		case 'D':
		case 'd':
		PORTD=val;
		break;
		default:
		break;
	}
}
unsigned char u8DIO_READ_PORT(unsigned char port)
{
	unsigned char ret_val;
	switch(port)
	{
		case 'A':
		case 'a':
		ret_val=PINA;
		break;
		case 'B':
		case 'b':
		ret_val=PINB;
		break;
		case 'C':
		case 'c':
		ret_val=PINC;
		break;
		case 'D':
		case 'd':
		ret_val=PIND;
		break;
		default:
		break;	
		
	}
}
void vDIO_TOGGLE_PORT(unsigned char port)
{
	switch(port)
	{
		case 'A':
		case 'a':
		PORTA=~PORTA;
		break;
		case 'B':
		case 'b':
		PORTB=~PORTB;
		break;
		case 'C':
		case 'c':
		PORTC=~PORTC;
		break;
		case 'D':
		case 'd':
		PORTD=~PORTD;
		break;
		default:
		break;
	}
}
void vDIO_PULLUP_CONNECT(unsigned char port,unsigned char pin,unsigned char connect)
{
	switch(port)
	{
		case'A':
		case'a':
		if(connect==1)
		{
			SET_BIT(PORTA,pin);
		}
		else
		{
			CLEAR_BIT(PORTA,pin);
		}
		break;
		case'B':
		case'b':
		if(connect==1)
		{
			SET_BIT(PORTB,pin);
		}
		else
		{
			CLEAR_BIT(PORTB,pin);
		}
		break;
		case'C':
		case'c':
		if(connect==1)
		{
			SET_BIT(PORTC,pin);
		}
		else
		{
			CLEAR_BIT(PORTC,pin);
		}
		break;
		case'D':
		case'd':
		if(connect==1)
		{
			SET_BIT(PORTD,pin);
		}
		else
		{
			CLEAR_BIT(PORTD,pin);
		}
		break;
		default:
		break;
}
}
void vDIO_WRITE_LOW_NIBBLE(unsigned char port,unsigned char value)
{
	vDIO_WRITE_BIT(port,0,READ_BIT(value,0));
	vDIO_WRITE_BIT(port,1,READ_BIT(value,1));
	vDIO_WRITE_BIT(port,2,READ_BIT(value,2));
	vDIO_WRITE_BIT(port,3,READ_BIT(value,3));
}
void vDIO_WRITE_HIGH_NIBBLE(unsigned char port,unsigned char value)
{
	vDIO_WRITE_BIT(port,4,READ_BIT(value,4));
	vDIO_WRITE_BIT(port,5,READ_BIT(value,5));
	vDIO_WRITE_BIT(port,6,READ_BIT(value,6));
	vDIO_WRITE_BIT(port,7,READ_BIT(value,7));
}