#include<iostream>
using namespace std;

// input = 79857377
// output = Maximum times occured digit is 7 and its frequency is 4

class DigitX
{
	public:
		int iNo;
		
		DigitX()
		{
			iNo = 0;
		}
		DigitX(int i)
		{
			iNo = i; 
		}
		
		void MaxFrequency()
		{
			int iTemp = iNo;
			int iDigit = 0;
			int Frequency[10] = {0};  // sagle elements 0 la initialize jale
			
			while(iTemp != 0)
			{
				iDigit = iTemp % 10;
				Frequency[iDigit]++;
				iTemp = iTemp / 10;
			}
			
			int iMaxFrequency = 0;
			int iMaxDigit = 0;
			for(int iCnt = 0; iCnt < 10; iCnt++)
			{
				if(Frequency[iCnt] > iMaxFrequency)
				{
					iMaxFrequency = Frequency[iCnt];
					iMaxDigit = iCnt;
				}
			}
			cout<<"Maximum times occured digit is "<<iMaxDigit<<" and its frequency is "<<iMaxFrequency <<"\n";
		}
};

int main()
{
    int iValue = 0;
    int iRet = 0;
	
	cout<<"Enter Number : "<<"\n";
	cin>>iValue;
	
	DigitX obj(iValue);
	
	obj.MaxFrequency();
	
    return 0;
}