#include<stdio.h>


int CountSmall(char *str)
{
	int iCnt = 0;
	
	while(*str != '\0')
	{
		if((*str >= 'A') && (*str <= 'Z'))
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
	
	iRet = CountSmall(Arr);
	
	printf("Frequecy of Capital letters is : %d\n",iRet);
	
	return 0;
}