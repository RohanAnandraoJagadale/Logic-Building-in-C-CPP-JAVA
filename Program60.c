
#include<stdio.h>
#include<stdbool.h>

bool Checkpallindrome(int iNo)
{
    int iDigit = 0, iRev =0;
    int iTemp = iNo;          //copy kela
	
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iRev = (iRev * 10) + iDigit;
        iNo = iNo / 10;                   // iNo = 0 ; original number jato
    }
    	
	return (iRev == iTemp);          // == comparison operator 
	
}

int main()
{
    int iValue = 0;
	bool bRet = false;

    printf("Please enter number : \n");
    scanf("%d",&iValue);

    bRet = Checkpallindrome(iValue);
	if(bRet == true)
	{
		printf("%d is a pallindrome number\n",iValue);
	}
	else
	{
		printf("%d is not a pallindrome number\n",iValue);
	}

    return 0;
}	