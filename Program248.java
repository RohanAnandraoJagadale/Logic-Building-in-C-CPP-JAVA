// best code but no complete oop
import java.util.*;

class Arithmetic
{
	public int Addition(int i, int j)    
	{
		int Sum = 0;
		Sum = i + j;
		return Sum;
	}
}

class Program248
{
	public static void main(String Arg[])
	{
		Scanner sobj = new Scanner(System.in);
		
		int iNo1 = 0, iNo2 = 0, iAns = 0;
		
		System.out.println("Enter First Number : ");
		iNo1 = sobj.nextInt();
		
		System.out.println("Enter Second Number : ");
		iNo2 = sobj.nextInt();
		
		Arithmetic aobj = new Arithmetic();
		
		iAns = aobj.Addition(iNo1,iNo2);
		
		System.out.println("Addition is : "+iAns);
	}
}