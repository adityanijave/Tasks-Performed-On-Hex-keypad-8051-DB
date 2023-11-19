//including required lib's
#include<reg51.h>

//sbit decleration for rows and cols
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


//forward decleration of user defined funcations
unsigned int hexkeyPad();															//proto-type of hexkeyPad() funcation