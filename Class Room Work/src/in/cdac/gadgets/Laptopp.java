package in.cdac.gadgets;
	class Laptop
	{
		private int srno;
		private String make;
		private double cost;
		
		public Laptop()
		{
			
		}
		public int getSrno() {
			return srno;
		}
		public void setSrno(int srno) {
			this.srno =srno;
		}
		public String getMake() {
			return make;
		}
		public void setMake(String make) {
			this.make =make;
			
		}
		public double getCost() {
			return cost;
		}
		public void setCost(double cost) {
			this.cost = cost;
		}
		public Laptop(int srno, String make, double cost) {
			this.srno=srno;
			this.make=make;
			this.cost=cost;
		}
		@Override
		public String toString() {
			return "Laptop[srno=" + srno+", make="+make+", cost="+cost+"]";
			
		}
		public void Display()
		{
				System.out.println(srno+ "  "+make+"  "+cost);
	}
	}

public class Laptopp {

		public static void main(String[] args) {
			Laptop l1=new Laptop(101,"dell",45000);
			l1.Display();
			System.out.println(l1);
		

	}

}
