#include<stdio.h>

int CapCountR(char *str)
{
	int iCnt = 0;
	
	while(*str != '\0')
	{
		if(*str >= 'A' && *str <= 'Z')
		{
			iCnt++;
		}	
		str++;
		CapCountR(str);
	}
	return iCnt;
}

int main()
{
	char Arr[20];
	int iRet = 0;
	
	printf("Enter String : \n");
	scanf("%[^'\n']s",Arr);
	
	iRet = CapCountR(Arr);
	
	printf("String length is : %d\n",iRet);
	
	return 0;
}