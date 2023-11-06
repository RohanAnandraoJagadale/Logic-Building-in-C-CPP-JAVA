#include<stdio.h>
// 4
// 4 + 3 + 2 + 1 = 10
  
int AdditionR(int No)
{
	static int Sum = 0;
	static int iCnt = 1;        // uncontrolled recursion
	
	if(iCnt <= No)
	{
		Sum = Sum + iCnt;
		iCnt++;
		AdditionR(No);
	}
	return Sum;
}

int main()
{
	int Value = 0;
	int Ret = 0;
	
	printf("Enter the number \n");
	scanf("%d",&Value);
	
	Ret = AdditionR(Value);
	printf("Summation is : %d\n",Ret);
		
	return 0;
}