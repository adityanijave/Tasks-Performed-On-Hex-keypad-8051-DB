//including header files
#include"4X4_Hexkey_Pad_number.h"

//funcation defination of user defined funcation
unsigned int hexkeyPad()
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
			return 0;
		}
		 if(col_2 == 0)
		{
			return 1;
		}
		 if(col_3 == 0)
		{
			return 2;
		}
		 if(col_4 == 0)
		{
			return 3;
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
			return 4;
		}
		 if(col_2 == 0)
		{
			return 5;
		}
		 if(col_3 == 0)
		{
			return 6;
		}
		 if(col_4 == 0)
		{
			return 7;
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
			return 8;
		}
		 if(col_2 == 0)
		{
			return 9;
		}
		 if(col_3 == 0)
		{
			return 10;
		}
		 if(col_4 == 0)
		{
			return 11;
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
			return 12;
		}
		 if(col_2 == 0)
		{
			return 13;
		}
		 if(col_3 == 0)
		{
			return 14;
		}
		 if(col_4 == 0)
		{
			return 15;
		}
}