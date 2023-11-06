#include<stdio.h>

// I : 5
// O : 5 4 3 2 1 
void DisplayReverse(int iValue)
{
	int iCnt = 0;
	
	printf("Reverse number is : \n");
	
	printf("_____________________\n");
	for(iCnt = iValue; iCnt >= 1; iCnt--)
	{
		printf("%d\t",iCnt);
	}
	printf("\n_____________________\n");
}

int main()
{
	int iNo = 0;
	
	printf("Enter the number : ");
	scanf("%d",&iNo);
	
	DisplayReverse(iNo);
	
	return 0;
}