#include<stdio.h>

int SumDigits(int iNo)
{
	int iDigit = 0, iSum = 0;
	
	while(iNo != 0)
	{
		iDigit = iNo % 10;
		iNo = iNo / 10;
		iSum = iSum + iDigit;
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
// -ve iNo asel tr negative sum yete