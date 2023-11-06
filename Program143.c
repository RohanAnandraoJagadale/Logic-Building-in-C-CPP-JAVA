#include<stdio.h>

int CountFrequency(char *str, char ch)
{
	int iCnt = 0;
	
	while(*str != '\0')
	{
		if(*str == ch)
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
	char cValue = '\0';  // flush
	int iRet = 0;
	
	printf("Please enter string\n");
	scanf("%[^'\n']s",Arr);  // input buffer \n mule
	
	printf("Please Enter the Character\n");
	scanf(" %c",&cValue);
	
	iRet = CountFrequency(Arr,cValue);
	
	printf("Frequecy of letters is : %d\n",iRet);
	
	return 0;
}