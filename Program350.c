#include<stdio.h>

void DisplayR()
{
	static int iCnt = 1;        // uncontrolled recursion
	
	if(iCnt <= 4)
	{
		printf("*\t");          // * * * *
		iCnt++;
		DisplayR();             // Recursive call
	}
}

int main()
{
	printf("Inside main\n");
	
	DisplayR();
	
	printf("End of main\n");
	
	return 0;
}