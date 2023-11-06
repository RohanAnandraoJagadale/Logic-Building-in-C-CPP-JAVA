// best code but using user define package is more powerfull
import java.util.*;

class Arithmetic
{
	public int iValue1;    // characteristis
	public int iValue2;    // Characteristics
	
	public Arithmetic(int i, int j)    // paramerised constrctor 
	{
		iValue1 = i;
		iValue2 = j;
	}
	public int Addition()  // Behaviou  
	{
		int Sum = 0;
		Sum = iValue1 + iValue2;
		return Sum;
	}
}

class Program249
{
	public static void main(String Arg[])
	{
		Scanner sobj = new Scanner(System.in);
		
		int iNo1 = 0, iNo2 = 0, iAns = 0;
		
		System.out.println("Enter First Number : ");
		iNo1 = sobj.nextInt();
		
		System.out.println("Enter Second Number : ");
		iNo2 = sobj.nextInt();
		
		Arithmetic aobj = new Arithmetic(iNo1,iNo2);
		
		iAns = aobj.Addition();
		
		System.out.println("Addition is : "+iAns);
	}
}