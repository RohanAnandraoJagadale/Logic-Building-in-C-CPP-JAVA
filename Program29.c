 #include<stdio.h>

int Summation(int iNo)
{
	int iSum = 0;
	int iCnt = 0;
	
	for(iCnt = 1; iCnt <= iNo; iCnt++)
	{
		iSum = iSum + iCnt;
	}
	
	return iSum;
}

int main()
{
	int iValue = 0;
	printf("Enter the value : \n");
	scanf("%d",&iValue);
	
	int iRet = 0;
	
	iRet = Summation(iValue);
	
	printf("Summation is : %d\n",iRet);
	
	return 0;
}