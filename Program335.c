// 12th bit of number is on or off .
// hexadecimal
#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;     

// 0000 0000 0000 0000 0000 1000 0000 0000
//	0 	  0    0  	0    0    8   0    0						  1
// 0X00000800                              

bool ChechBit(UINT No)
{
	UINT iMask = 0X00000800;   // magun mojayche 
	UINT Result = 0;
	
	Result = No & iMask;
	
	if(Result == iMask)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	UINT Value = 0;
	bool bRet = false;
	
	printf("Enter Number : \n");
	scanf("%d",&Value);
	
	bRet = ChechBit(Value);
	
	if(bRet == true)
	{
		printf("12th bit is on\n");
	}
	else
	{
		printf("12th bit is off\n");
	}
	
	return 0;	
}