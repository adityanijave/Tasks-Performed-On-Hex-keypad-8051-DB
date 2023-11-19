//including header files
#include<reg51.h>

//main funcation
void main()
{
	//decleration and initi. of local variables
	unsigned int rows[4] = {0xFE, 0xFD, 0xFB, 0xF7};
	unsigned int segment_data[16] = {0x3F, 0x06, 0x5B, 0x4F, 0x66, 0x6D, 0x7D, 0x07, 0x7F, 0x6F, 0x77, 0x7C,0x39,0x5E,0x79, 0x71};
	unsigned int i;
	P1 = 0x00;
	P2 = 0xFF;
	
	//forever loop for continues checking for status
	while(1)																													 //or we can for(;;)
	{
		for(i = 0; i < 4; i++)																					 //for loop to continuous check for row
		{
			P2 = rows[i];																									 //P2 will assign with value of current row which is active low
			if (P2 != 0xFF)																								 //if P2 is not equal to 0xFF i.e, all active high then,
			{
				
				switch (P2)																									 //value of P2 is works as condition for switch-case condition block
				{					
					//row 1
					case 0xE7:
						
						P1 = segment_data[0];																		 //P1 = 0x3F;
						break;
					
					case 0xD7:
						
						P1 = segment_data[1];																		 //P1 = 0x06;
						break;
					
					case 0xB7:
						
						P1 = segment_data[2];																		 //P1 = 0x5B;
						break;
					
					case 0x77:
						
						P1 = segment_data[3];																		 //P1 = 0x4F;
						break;
					
					//row 2
					case 0xEB:
						
						P1 = segment_data[5];																		 //P1 = 0x66;
						break;
					
					case 0xDB:
						
						P1 = segment_data[4];																		 //P1 = 0x6D;
						break;
					
					case 0xBB:
						
						P1 = segment_data[6];																		 //P1 = 0x7D;
						break;
					
					case 0x7B:
						
						P1 = segment_data[7];																		 //P1 = 0x07;
						break;
					
					//ROW 3
					case 0xED:
						
						P1 = segment_data[9];																		 //P1 = 0x7F;
						break;
					
					case 0xDD:
						
						P1 = segment_data[8];																		 //P1 = 0x6F;
						break;
					
					case 0xBD:
						
						P1 = segment_data[10];																		 //P1 = 0x77;
						break;
					
					case 0x7D:
						
						P1 = segment_data[11];																		 //P1 = 0x7C;
						break;
					
					//ROW 4
					case 0xEE:
						
						P1 = segment_data[13];																		 //P1 = 0x39;
						break;
					
					case 0xDE:
						
						P1 = segment_data[12];																		 //P1 = 0x5E;
						break;
					
					case 0xBE:
						
						P1 = segment_data[14];																		 //P1 = 0x79;
						break;
					
					case 0x7E:
						
						P1 = segment_data[15];																		 //P1 = 0x71;
						break;
				}
			}
		}
	}
}