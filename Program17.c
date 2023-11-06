// Demonstration of iteration

#include<stdio.h>

 void Display(int iValue)
{
	register int iCnt = 0;
	//    1        2         3
	for(iCnt = 1; iCnt <= iValue; iCnt++)
	{
		printf("Jay Ganesh..\n");   
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