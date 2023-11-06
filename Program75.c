#include<stdio.h>
#include<stdlib.h>

// Step 5 : Perform the operation on array
int DisplayEvenOddCount(int Arr[], int iSize)        // server mhantat
{
	int iCnt = 0, iEvenCnt = 0;
	
	for(iCnt = 0; iCnt < iSize; iCnt++)
	{
		if((Arr[iCnt] % 2) == 0)
		{
		//	printf("Even number is : %d\n",Arr[iCnt]);
			iEvenCnt++;
			
		}
	}
	printf("Number of even numbers are : %d\n",iEvenCnt);
	printf("Number of Odd numbers are : %d\n",iSize - iEvenCnt);
}

int main()
{
    int *ptr = NULL;
    int iLength = 0, i = 0, iRet = 0;

    // Step 1 : Accept size of array
    printf("Enter number of elements : \n");
    scanf("%d",&iLength);

    // Step 2 : Allocate memory for array
    ptr = (int *)malloc(iLength * sizeof(int));

    // Step 3 : Accept the elements of array
    printf("Enter the elements : \n");

    for(i = 0 ;i < iLength; i++)
    {
        scanf("%d",&ptr[i]);
    }

    // Step 4 : Call the function
    iRet = DisplayEvenOddCount(ptr, iLength);    //client mhantat industri madhe

    // Step 6 : Deallocate the memory
    free(ptr);

    return 0;
}