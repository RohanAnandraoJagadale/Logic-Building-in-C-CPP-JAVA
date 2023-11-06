// off the 4th bit if on

#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;     
// 0000 0000 0000 0000 0000 0000 0000 0000
// 1111 1111 1111 1111 1111 1111 1111 0111
//	f    f     f    f    f   f     f    7						          
// 0XFFFFFFF7                              

UINT OffBit(UINT No)
{
	UINT iMask = 0XFFFFFFF7;

	
	return (No & iMask);
}

int main()
{
	UINT Value = 0;
	UINT iRet = 0;
	
	printf("Enter Number : \n");
	scanf("%d",&Value);
	
	iRet = OffBit(Value);
	
	printf("Updated number is : %d\n",iRet);
	
	return 0;	
}