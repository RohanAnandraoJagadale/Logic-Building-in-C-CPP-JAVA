
#include<iostream>
using namespace std;

// input = 7985674
// output = 4 occurs 1 time
//          5 occurs 1 time
//          6 occurs 1 time
//          7 occurs 2 time
//          etc

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
		
		void DisplayFrequency()
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
			
			for(int iCnt = 0; iCnt < 10; iCnt++)
			{
				if(Frequency[iCnt]>0)
				{
					cout<<iCnt<<" occurs at "<<Frequency[iCnt]<<" times"<<"\n";
				}
			}
		}
};

int main()
{
    int iValue = 0;
    int iRet = 0;
	
	cout<<"Enter Number : "<<"\n";
	cin>>iValue;
	
	DigitX obj(iValue);
	
	obj.DisplayFrequency();
	
    return 0;
}