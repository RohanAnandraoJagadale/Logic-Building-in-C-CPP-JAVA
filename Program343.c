// nibble = 0000
// toggle ulternate nibble

#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

// 0000 1111 0000 1111 0000 1111 0000 1111
//  0     f    0    f   0    f     0   f
// 0X0F0F0F0F
                    

UINT ToggleNibble(UINT No)
{
	UINT iMask = 0X0F0F0F0F;
	UINT iAns = 0;
	
	iAns = No ^ iMask;
	
	return iAns;
}

int main()
{
	UINT Value = 0;
	UINT iRet = 0;
	
	printf("Enter Number : \n");
	scanf("%d",&Value);
	
	iRet = ToggleNibble(Value);
	
	printf("Updated number is : %d\n",iRet);
	
	return 0;	
}