// 4
// * * * * 

#include<stdio.h>

void Display(int iNo)
{
	int iCnt = 0;
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	for(iCnt = 0; iCnt < iNo; iCnt++)
	{
		printf("*\t");   //\t = 4 space
	}

}

int main()
{
	int iValue = 0;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	Display(iValue);
	
	return 0;
}