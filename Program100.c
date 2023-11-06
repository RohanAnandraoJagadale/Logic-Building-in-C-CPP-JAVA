// Row = 4, Columns = 4
/*
    * * * *
	* * * *
	* * * *
	* * * *
*/ 

#include<stdio.h>

void Display(int iRow,int iCol)     //N^2
{
	int i = 0, j = 0;
	if(iRow < 0)
	{
		iRow = -iRow;
	}
	if(iRow < 0)
	{
		iCol = -iCol;
	}
	
	//     1      2         3
	for(i = 1; i <= iRow; i++)  //outer   
	{
		
		     1       2         3
		for(j = 1; j <= iCol; j++)   // inner   //4 of outer
		{
			printf("*\t");       // 4 of inner
		}
		printf("\n");
	}
	
}

int main()
{
	int iValue1 = 0, iValue2 = 0;
	
	printf("Enter number of Rows\n");
	scanf("%d",&iValue1);
	
	printf("Enter number of Columns\n");
	scanf("%d",&iValue2);
	
	Display(iValue1,iValue2);
	
	return 0;
}