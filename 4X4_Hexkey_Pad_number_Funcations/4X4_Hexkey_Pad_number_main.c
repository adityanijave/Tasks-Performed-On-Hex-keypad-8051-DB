//including header files
#include<reg51.h>
#include"4X4_Hexkey_Pad_number.h"

//main funcation
void main()
{
	//decleration and initi. of local variables
	unsigned int segment_data[16] = {0x3F, 0x06, 0x5B, 0x4F, 0x66, 0x6D, 0x7D, 0x07, 0x7F, 0x6F, 0x77, 0x7C,0x39,0x5E,0x79, 0x71};
	P1 = 0x00;
	P2 = 0xFF;
	
	//forever loop
	while(1)																		//or we can use for(;;)
	{
		P1 = segment_data[hexkeyPad()];						//the return value of hexkeyPad funcation will work as index value of segment_data
																							//which is again assign to the port 1 where our 7 segment CC is connected
	}
}
