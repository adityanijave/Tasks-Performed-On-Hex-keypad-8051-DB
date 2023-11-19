//including header files
#include<reg51.h>
#include"delay.h"

//micro define
#define LCD_port P2                           //LCD port is P2

//sbit declreation
sbit RS = P3^0;																//Register Select 
sbit RW = P3^1;																//Read / Write 
sbit EN = P3^2;																//ENable select 


//forword decleration 
void init();																	// init() function to activate the LCD
void LCD_cmd(unsigned char);									// LCD_cmd() function to pass cmd to LCD_port
void LCD_data(unsigned char);									// LCD_data() function to pass data to LCD_port
void LCD_string(unsigned char *);							// LCD_string() function to pass *string to display data through LCD_data() function