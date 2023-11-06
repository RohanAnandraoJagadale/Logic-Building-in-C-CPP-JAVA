#include<stdio.h>

void Display(int iValue)
{
	register int iCnt = 0;
	
	iCnt = 1; 
	while(iCnt <= iValue)
	{
	printf("%d : Marvellous\n",iCnt);
	iCnt++;
	}
}

int main()
{
	int iNo = 0;
	printf("Enter the Number of iteration : \n");
	scanf("%d",&iNo);
	
	Display(iNo);

	return 0;
}