#include<stdio.h>

 void Display()
{
	register int iCnt = 0;
	
	iCnt = 1;              //1
	while(iCnt <= 108)      //2
	{
		printf("Jay Ganesh..\n");  //4
		iCnt++;             //3
	}	
}

int main()
{
	Display();
	
	return 0;
}