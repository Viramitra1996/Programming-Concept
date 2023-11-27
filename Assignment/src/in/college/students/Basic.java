package in.college.students;

import java.util.Scanner;

public class Basic {


	public static void main(String[] args) {
		int option,a,b;
		while(true) {
		Scanner sc=new Scanner (System.in);
		System.out.println("Choose an option");
		System.out.println(" 1. Add\n 2. Subtract\n 3. Multiply\n 4. Divide");
		option=sc.nextInt();
		System.out.println("Enter a number");
		a=sc.nextInt();
		System.out.println("Enter a number");
		b=sc.nextInt();

		switch(option) {
		
		case 1:	
				System.out.println("Addition"+(a+b));
				break;
		case 2:
				System.out.println("Sub"+(a-b));
				break;
		case 3:	
				System.out.println("Multiply"+(a*b));
				break;
		case 4:
				System.out.println("ADivide"+(a/b));
				System.out.println("Remainder"+(a%b));
				break;
		case 5:
				System.exit(0);
				
	}
		
		sc.close();

	}
	}}
