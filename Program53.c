#include<stdio.h>

int SumDigits(int iNo)
{
	int iDigit = 0, iSum = 0;
	
	if(iNo < 0)      // filter
	{
		iNo = -iNo;
	}
	
	while(iNo != 0)
	{
		iDigit = iNo % 10;
		iNo = iNo / 10;
		iSum = iSum + iDigit;   // line 15,16 var khali keli tri chalel
	}
	return iSum;
}
int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter the number : \n");
	scanf("%d",&iValue);
	
	iRet = SumDigits(iValue);
	
	printf("Summation all digits : %d\n",iRet);
	
	return 0;
}