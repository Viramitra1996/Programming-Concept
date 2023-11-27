import java.util.Scanner;

public class NetSalary {

	public static void main(String[] args) {
		double bs,gs,hra,pf,NetSal,da;
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter Basic Salary of An Employee:");
		bs=sc.nextInt();
		hra=bs/100*(15);
		da=bs/100*(30);
		gs=hra+da+bs;
		pf=gs/100*(12.5);
		NetSal=gs-pf;
		System.out.println("HRA is :"+hra);
		System.out.println("DA is :"+da);
		System.out.println("PF is :"+pf);
		System.out.println("Gross Salary is :"+gs);
		System.out.println("Net Salary is :"+NetSal);

	}

}
