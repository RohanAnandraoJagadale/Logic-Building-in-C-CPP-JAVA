#include<stdio.h>

void Display(char *str)
{
	int iCnt = 0;
	
	if(*str != '\0')
	{
		printf("%s\n",str);	
		str++;
		Display(str);
	}
}

int main()
{
	char Arr[20];
	
	printf("Enter String : \n");
	scanf("%[^'\n']s",Arr);
	
	Display(Arr);
	
	return 0;
}