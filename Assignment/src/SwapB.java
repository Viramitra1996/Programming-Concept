import java.util.Scanner;

public class SwapB {

	public static void main(String[] args) {
		int a,b;
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter Two Numbers:");
		System.out.println("First Numbers is:");
		a=sc.nextInt();
		System.out.println("Second Numbers is:");
		b=sc.nextInt();
		a=a+b;
		b=a-b;
		a=a-b;
		
		System.out.println("Swap number is: \n"+a);
		System.out.println("Swap number is: \n"+b);

	}

}
