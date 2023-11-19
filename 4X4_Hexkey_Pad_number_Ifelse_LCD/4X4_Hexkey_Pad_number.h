//including required lib's
#include<reg51.h>

//sbit decleration for rows and cols
//rows
sbit row_1 = P0^0;
sbit row_2 = P0^1;
sbit row_3 = P0^2;
sbit row_4 = P0^3;
//cols
sbit col_1 = P0^4;
sbit col_2 = P0^5;
sbit col_3 = P0^6;
sbit col_4 = P0^7;


//forward decleration of user defined funcations
unsigned int hexkeyPad();															//proto-type of hexkeyPad() funcation