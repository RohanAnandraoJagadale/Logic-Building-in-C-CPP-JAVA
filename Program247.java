// dont write such type of syntax
import java.util.*;

class Program247
{
	static int Addition(int i, int j)    // static kelyamule access hoto , obj banat nhi static aslyamule
	{
		int Sum = 0;
		Sum = i + j;
		return Sum;
	}
	
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		
		int iNo1 = 0, iNo2 = 0, iAns = 0;
		
		System.out.println("Enter First Number : ");
		iNo1 = sobj.nextInt();
		
		System.out.println("Enter Second Number : ");
		iNo2 = sobj.nextInt();
		
		iAns = Addition(iNo1,iNo2);
		
		System.out.println("Addition is : "+iAns);
		
	}
	
}