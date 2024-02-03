
#ifndef LCD 8BIT_H_
#define LCD 8BIT_H_
#include "DIO.h"
#include "LCD_config.h"
#define LCD_DATA 'A'
#define LCD_CONTROL 'B'
#define CLR_SCREEN 0X01
#define RET_HOME 0X02
#define ENTRY_MODE 0X06
#define DISPLAY_CURSOR 0X0C
#if defined four_bit_mode 
#define EN 0	
#define RS 2
#define WR 1	
#define FOUR_BIT 0x28
#elif defined eight_bit_mode
#define EN 0
#define RS 2
#define WR 1
#define EIGHT_BIT 0X38
#endif
void LCD_INIT(void);
void LCD_SEND_CHAR(char data);
static void LCD_ENABLE(void);
void LCD_clear_screen();
void LCD_SEND_CMD( char cmd);
void LCD_SEND_STRING( char *data);
void LCD_MOVE_CURSOR( char row, char colum);
#endif 