// Demonstration of iteration

#include<stdio.h>

 void Display()
{
	register int iCnt = 0;
	
	for(iCnt = 0; iCnt < 108; iCnt++)
	{
		printf("Jay Ganesh..\n");
		printf("Omm Namah Shivay..\n");
		printf("Jay Ganesh..\n");
		printf("Omm Namah Shivay..\n");   
	}	
}

int main()
{
	printf("Enter the Number : \n");
	
	Display();
	
	return 0;
}