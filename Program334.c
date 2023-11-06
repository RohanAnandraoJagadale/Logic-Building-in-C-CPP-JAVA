// 10th bit of number is on or off .
// hexadecimal
#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;     

// 0000 0000 0000 0000 0000 0010 0000 0000
//							  1
// 0X00000200                              

bool ChechBit(UINT No)
{
	UINT iMask = 0X00000200;   // magun mojayche 
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
		printf("10th bit is on\n");
	}
	else
	{
		printf("10th bit is off\n");
	}
	
	return 0;	
}