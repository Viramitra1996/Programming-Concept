import java.util.*;

public class LeapYear {

	public static void main(String[] args) {
		int year;
		Scanner sc = new Scanner(System.in);
		System.out.println(" Enter year");
		year=sc.nextInt();
		if( (year%4)==0 && (year%100)!=0 || (year%400)==0){
		     System.out.println("Entered year is Leap year: \n");
		 }  
		    else
		    {
		     System.out.println("Entered year is Non Leap year: \n");
	        }
		sc.close();

}
}
