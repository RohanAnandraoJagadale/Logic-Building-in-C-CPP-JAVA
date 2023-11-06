#include<stdio.h>

// output : 2 4 6 7 8 9 10 11 12 13 14

int SumNonFactors(int iNo)
{
	int iCnt = 0;
	int iSum = 0;
	
	for(iCnt = 1; iCnt < iNo; iCnt++)
	{
		if((iNo % iCnt) != 0)
		{
			iSum = iSum + iCnt;
		}
	}
	return iSum;
}

int main()
{
	int iValue = 0, iRet = 0;
	
	printf("Enter the number\n");
	scanf("%d",&iValue);
	
	iRet = SumNonFactors(iValue);
	printf("Summation of non factors are %d\n",iRet);

	return 0;
}