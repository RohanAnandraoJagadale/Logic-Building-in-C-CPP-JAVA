#include<stdio.h>

int CapSmallR(char *str)
{
	int iCnt = 0;
	
	while(*str != '\0')
	{
		if(*str >= 'a' && *str <= 'z')
		{
			iCnt++;
		}	
		str++;
		CapSmallR(str);
	}
	return iCnt;
}

int main()
{
	char Arr[20];
	int iRet = 0;
	
	printf("Enter String : \n");
	scanf("%[^'\n']s",Arr);
	
	iRet = CapSmallR(Arr);
	
	printf("String length is : %d\n",iRet);
	
	return 0;
}