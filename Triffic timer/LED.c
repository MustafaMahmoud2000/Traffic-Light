
#include "DIO.h"
void vLed_init(unsigned char port, unsigned char pin)
{
	vDIO_SET_BIT_DIR(port,pin,1);
}
void vLed_on(unsigned char port,unsigned char pin)
{
	vDIO_WRITE_BIT(port,pin,1);
}
void vLed_off(unsigned char port,unsigned char pin)
{
	vDIO_WRITE_BIT(port,pin,0);
}
void vLed_toggle(unsigned char port,unsigned char pin)
{
	vDIO_TOGGLE_BIT(port,pin);
}
