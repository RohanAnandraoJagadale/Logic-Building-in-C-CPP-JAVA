#include<iostream>
using namespace std;  

// compile time generic

template <class T>  //(T chya aivaji kahihi lihu shakto) T = template

T Addition(T i, T j)
{
	T ans;    // initializ nhi karaychi kaat konta data type yeil mhiti nhi
	ans = i + j;
	
	return ans;
}

int main()
{
	double a = 11.9, b = 10.1, ret = 0.0;
	
	ret = Addition(a,b);
	
	cout<<"Addition is : "<<ret<<"\n";
	
	int x = 11, y = 10, iret = 0;
	
	iret = Addition(x,y);
	
	cout<<"Addition is : "<<iret<<"\n";
	
	return 0;
}