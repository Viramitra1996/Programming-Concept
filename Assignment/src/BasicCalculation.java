import java.util.Scanner;

public class BasicCalculation {

	public static void main(String[] args) {
		int a,b,option;
		
		Scanner sc=new Scanner(System.in);
		System.out.println("Choose An Option: \n");
		System.out.println(" 1. Add\n 2. Subtract\n 3. Multiply\n 4. Divide");
		option=sc.nextInt();
		System.out.println("Enter First Number:");
		a=sc.nextInt();
		System.out.println("Enter Second number:");
		b=sc.nextInt();
		switch(option)
		{
			case 1: 
					System.out.println("Addtion is :"+(a+b));
					break;
			case 2: 
				System.out.println("Addtion is :"+(a-b));
				break;
			case 3: 
				System.out.println("Addtion is :"+(a*b));
				break;
			case 4: 
				System.out.println("Addtion is :"+(a/b));
				break;
			default:
						System.out.println("Invalid Option !!\n Try Again!!!!");
						break;
			
	}
		sc.close();}

}
