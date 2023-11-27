import java.util.Scanner;

public class Maximum {

	public static void main(String[] args) {
		int a,b,c,max;
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter Three Numbers");
		a=sc.nextInt();
		b=sc.nextInt();
		c=sc.nextInt();
		max=(a>b)?(a>c)?a:c:(b>c)?b:c;
		System.out.println("Max Number is:  "+max);
}
}