import java.util.Scanner;

public class SwapA {

	public static void main(String[] args) {
		
		int a,b,Swap;
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter Two Numbers:");
		System.out.println("First Numbers is:");
		a=sc.nextInt();
		System.out.println("Second Numbers is:");
		b=sc.nextInt();
		Swap=a;
		a=b;
		b=Swap;
		System.out.println("Swap number is: \n"+a);
		System.out.println("Swap number is: \n"+b);
	}   

}
