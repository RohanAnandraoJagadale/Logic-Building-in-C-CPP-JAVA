#include<stdio.h>
// Display table 

// Input : 5
// Output : 5 10  15 20 25 30 35 40 45 50

int DisplayTable(int iNo)
{
	int iCnt = 0;
	printf("_____________________\n");
	
	printf("\nTable of %d is : \n",iNo);
	
	printf("_____________________\n");
	
	for(iCnt = 1; iCnt <= 10; iCnt++)
	{
		printf("%d\n",iNo * iCnt);
	}
	printf("_____________________\n");
}

int main()
{
	int iValue = 0;
	int	iRet = 0;
	
	printf("Enter the number\n");
	scanf("%d",&iValue);
	
	iRet = DisplayTable(iValue);

	return 0;
}