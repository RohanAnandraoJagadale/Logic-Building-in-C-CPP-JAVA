#include<stdio.h>

//o(N)  
void DisplayFactors(int iNo)
{
	int iCnt = 0;
	printf("Factors are : \n");
	//      1        2          3
	for(iCnt = 1; iCnt < iNo; iCnt++)
	{
	//          4
		if((iNo % iCnt) == 0)
		{
			printf("%d\n",iCnt);
		}
	}
}

int main()
{
	int iValue = 0;
	
	printf("Enter Number : \n");
	scanf("%d",&iValue);
	
	DisplayFactors(iValue);
	
	return 0;
}