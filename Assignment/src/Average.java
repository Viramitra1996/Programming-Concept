import java.util.Scanner;

public class Average {

	public static void main(String[] args) {
		int a,b,c,d,e,sum;
		double avg;
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter Marks of five Subject\n");
		a=sc.nextInt();
		b=sc.nextInt();
		c=sc.nextInt();
		d=sc.nextInt();
		e=sc.nextInt();
		sum=a+b+c+d+e;
		avg=sum/5;
		System.out.println("Sum is "+sum);
		System.out.println("Average is "+avg);


	}

}
