#include<iostream>
using namespace std;
// class template

class ArrayX
{
    public:
        int *Arr;
        int iSize;
		
		ArrayX(int i);
		void Accept();
		void Display();
};

/*
    Return value ClassName :: FunctionName()
*/

ArrayX :: ArrayX(int i)
{
	iSize = i;
	Arr = new int[iSize];
}

void Accept:: Accept()
{
	cout<<"Enter the elements : "<<"\n";
	for(int iCnt = 0; iCnt < iSize; iCnt++)
	{
		cin>>Arr[iCnt];
	}
}

void Display :: Display()
{
	cout<<"Elements of the array are : "<<"\n";
	for(int iCnt = 0; iCnt < iSize; iCnt++)
	{
		cout<<Arr[iCnt]<<"\n";
	}
}

int main()
{
    ArrayX obj(5);
    obj.Accept();
    obj.Display();

    return 0;
}