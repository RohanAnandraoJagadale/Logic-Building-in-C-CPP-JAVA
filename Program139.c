#include<stdio.h>


int CountCh(char *str)
{
	int iCnt = 0;
	
	while(*str != '\0')
	{
		if((*str == 'a') || (*str == 'A'))
		{
			iCnt++;
		}
		str++;
	}
	return iCnt;
}

int main()
{
	char Arr[10];
	int iRet = 0;
	
	printf("Please enter string\n");
	scanf("%[^'\n']s",Arr);
	
	iRet = CountCh(Arr);
	
	printf("Frequecy of a and A is : %d\n",iRet);
	
	return 0;
}