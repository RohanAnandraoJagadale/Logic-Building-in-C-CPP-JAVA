#include<stdio.h>

char ToUpperX(char ch)
{
	
	return ch - 32;  // ascii table
}

int main()
{
	char cValue = '\0';
	char cRet = '\0';
	
	printf("Enter The Character\n");
	scanf("%c",&cValue);
	
	cRet = ToUpperX(cValue);
	
	printf("Character in the upper case is : %c\n",cRet);
	
	
	return 0;
}