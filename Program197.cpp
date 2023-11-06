#include<iostream>
using namespace std;

class ArrayX
{
	public:
		int * Arr;
		int iSize;
		int iCnt = 0;
		
		ArrayX(int i)
		{
			iSize = iCnt;
			Arr = new int[iSize];
		}
		
		~ArrayX()
		{
			delete []Arr;
		}
		
		void Accept()
		{
			cout<<"Enter the elements of Array : "<<"\n";
			
			for (int iCnt = 0; iCnt < iSize; iCnt++)
			{
				cin>>Arr[iCnt];       // scanf("%d",&Arr[iCnt];
			}
		}
		
		void Display()
		{
			cout<<"Elements of Array are : "<<"\n";
			
			for (int iCnt = 0; iCnt < iSize; iCnt++)
			{
				cout<<Arr[iCnt]<<"\t";       // scanf("%d",&Arr[iCnt];
			}
			cout<<"\n";
		}
};

int main()
{
	ArrayX aobj(5);
	
	obj.Accept();
	obj.Display();
	
	return 0;
}