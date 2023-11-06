#include<stdio.h>

int main()
{
	int i = 0;
	
	printf("_________________________________\n");
	printf("ASCII table\n");
	printf("_________________________________\n");
	
	printf("Character\t Decimal\t Hex\t Octal");
	
	for(i = 0; i <= 127; i++)
	{
		printf("%c \t\t %d \t\t %x \t %o\n",i,i,i,i);
	}
	
	printf("\n__________________________________\n");
	
	return 0;
}