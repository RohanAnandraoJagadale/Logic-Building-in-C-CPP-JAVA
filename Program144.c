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
	char cValue = '\0';  
	int iRet = 0;
	
	printf("Please enter string\n");
	scanf("%[^'\n']s",Arr); 
	
	printf("Please Enter the Character\n");
	scanf(" %c",&cValue);  // \n baher padla space mule
	
	iRet = CountFrequency(Arr,cValue);
	
	printf("Frequecy of letter %c is : %d\n",cValue,iRet);
	
	return 0;
}