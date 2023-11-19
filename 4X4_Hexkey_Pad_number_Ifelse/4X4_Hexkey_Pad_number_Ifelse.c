//including header file
#include<reg51.h>

//sbit decleration
//rows
sbit row_1 = P2^0;
sbit row_2 = P2^1;
sbit row_3 = P2^2;
sbit row_4 = P2^3;
//cols
sbit col_1 = P2^4;
sbit col_2 = P2^5;
sbit col_3 = P2^6;
sbit col_4 = P2^7;


//main funcation
void main()
{
	//decleration and initi. of local variables
	unsigned int data_segment[16] = {0x3F, 0x06, 0x5B, 0x4F, 0x66, 0x6D, 0x7D, 0x07, 0x7F, 0x6F, 0x77, 0x7C,0x39,0x5E,0x79, 0x71};
	P1 = 0x00;
	P2 = 0xFF;
	
	//forever loop
	while(1)																														//or we can for(;;)
	{
		
		//for row 1
		row_1 = 0;
		row_2 = 1;
		row_3 = 1;
		row_4 = 1;
		
		col_1 = 1;
		col_2 = 1;
		col_3 = 1;
		col_4 = 1;
		if(col_1 == 0)
		{
			P1 = data_segment[0];																					  //P1 = 0x3F;
		}
		 if(col_2 == 0)
		{
			P1 = data_segment[1];																					  //P1 = 0x06;
		}
		 if(col_3 == 0)
		{
			P1 = data_segment[2];																					  //P1 = 0x5B;
		}
		 if(col_4 == 0)
		{
			P1 = data_segment[3];																					  //P1 = 0x4F;
		}
		
		// for row 2
		row_1 = 1;
		row_2 = 0;
		row_3 = 1;
		row_4 = 1;
		
		col_1 = 1;
		col_2 = 1;
		col_3 = 1;
		col_4 = 1;
		if(col_1 == 0)
		{
			P1 = data_segment[4];																					  //P1 = 0x66;
		}
		 if(col_2 == 0)
		{
			P1 = data_segment[5];																					  //P1 = 0x6D;
		}
		 if(col_3 == 0)
		{
			P1 = data_segment[6];																					  //P1 = 0x7D;
		}
		 if(col_4 == 0)
		{
			P1 = data_segment[7];																					  //P1 = 0x07;
		}
		
		// for row 3
		row_1 = 1;
		row_2 = 1;
		row_3 = 0;
		row_4 = 1;
		
		col_1 = 1;
		col_2 = 1;
		col_3 = 1;
		col_4 = 1;
		if(col_1 == 0)
		{
			P1 = data_segment[8];																					  //P1 = 0x7F;
		}
		 if(col_2 == 0)
		{
			P1 = data_segment[9];																					  //P1 = 0x6F;
		}
		 if(col_3 == 0)
		{
			P1 = data_segment[10];																					//P1 = 0x77;
		}
		 if(col_4 == 0)
		{
			P1 = data_segment[11];																					//P1 = 0x7C;
		}
		
		// for row 4
		row_1 = 1;
		row_2 = 1;
		row_3 = 1;
		row_4 = 0;
		
		col_1 = 1;
		col_2 = 1;
		col_3 = 1;
		col_4 = 1;
		if(col_1 == 0)
		{
			P1 = data_segment[12];																					  //P1 = 0x39;
		}
		 if(col_2 == 0)
		{
			P1 = data_segment[13];																					  //P1 = 0x5E;
		}
		 if(col_3 == 0)
		{
			P1 = data_segment[14];																					  //P1 = 0x79;
		}
		 if(col_4 == 0)
		{
			P1 = data_segment[15];																					  //P1 = 0x71;
		}
		
		
		
	}
}