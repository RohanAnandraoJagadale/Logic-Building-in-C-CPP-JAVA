//Display non factors
#include<stdio.h>

void SumNonFactors(int iNo)
{
	int iCnt = 0;
	printf("Non factors of %d are : \n",iNo);
	
	for(iCnt = 1; iCnt < iNo; iCnt++)
	{
		if((iNo % iCnt) != 0)
		{
			printf("%d\n",iCnt);
		}
	}
	
}

int main()
{
	int iValue = 0;
	
	printf("Enter the number\n");
	scanf("%d",&iValue);
	
	SumNonFactors(iValue);

	return 0;
}