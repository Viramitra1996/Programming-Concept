package in.cdac.gadgets;

public class Computer
{
		private int srno;
		private String make;
		private double cost;
		private static int cnt;
		
		static {
			cnt=0;
			
		}
		
		public Computer() {
			//this(1, "abc", 25000);
			cnt++;
		}
		
		public Computer (int srno, String make, double cost) {
			this.srno=srno;
			this.make=make;
			this.cost=cost;
			cnt++;
		}
		
		public void display()
		{
			System.out.println(srno +"  "+make+"   "+cost);
		}
		
		public static void showCnt()
		{
			//make="abc";
			System.out.println("Number of Objects"+cnt);
		}
}




