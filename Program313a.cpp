#include<iostream>
using namespace std;

template <class T>

T Maximum(T Arr[], int iSize)
{
	int iCnt = 0;
	T Max = 0;
	
	for(iCnt = 0; iCnt < iSize; iCnt++)
	{
		if(Arr[iCnt] > Max)
		{
			Max = Arr[iCnt];
		}
	}
	return Max;
}

int main()
{
	int Data[] = {110,120,320,40};
	
	int iRet = Maximum(Data,4);
	cout<<"Maximum of Integers : "<<iRet<<"\n";
	
	
	return 0;
}






