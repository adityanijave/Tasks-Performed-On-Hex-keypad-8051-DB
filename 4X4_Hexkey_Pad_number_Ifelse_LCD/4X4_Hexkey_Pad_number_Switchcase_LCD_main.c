#include<reg51.h>
#include"lcd_8bit.h"
#include"4X4_Hexkey_Pad_number.h"


void main()
{
	unsigned int ascii_value[16] = {48,49,50,51,52,53,54,55,56,57,65,66,67,68,69,70}, show;
	
	init();
	LCD_cmd(0x80);
	LCD_string("HKP value: ");
	LCD_cmd(0xC0);
	LCD_string("Aditya Nijave");
	while(1)
	{
		
		show = ascii_value[hexkeyPad()];
		LCD_cmd(0x8B);
		LCD_data(show);
	}
}