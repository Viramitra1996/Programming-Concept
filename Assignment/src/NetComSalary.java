import java.util.Scanner;

public class NetComSalary {

	public static void main(String[] args) {
		
		double bs,NetSal,cc=0,n;
		
			Scanner sc=new Scanner(System.in);
			System.out.println("Enter Basic Salary of An Employee:");
			bs=sc.nextInt();
			System.out.println("Enter Commision of An Employee:");
			n=sc.nextInt();
			if(n>= 4999 && n<= 7500)
			{
				cc=n*0.03f;
			}
			else if (n>= 7501 && n <=10500)
			{
				cc=n*0.08f;
			}
			else if (n>= 10500 && n<=15000)
			{
				cc=n*0.11f;
			}
			else if (n>= 15001)
			{
				cc=n*0.15f;
			}
	
			 NetSal=bs+cc;
		     System.out.println("Commision is :"+cc);
			 System.out.println("Net Salary is :"+NetSal);
			sc.close();
	}

}
