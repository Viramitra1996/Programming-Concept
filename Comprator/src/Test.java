import java.util.*;
class Product implements Comparable<Product>
{
		private int pid;
		private String make;
		private double cost;
		//Generate hashCode and equals using IDE
		public int getpid()
		{
			return pid;
		}
	public Product(int pid, String make, double cost) {
		super();
		this.pid=pid;
		this.make=make;
		this.cost=cost;
	}
	

	@Override
	public int hashCode() {
		return Objects.hash(cost, make, pid);
	}


	@Override
	public boolean equals(Object obj) {
		if (this == obj)
			return true;
		if (obj == null)
			return false;
		if (getClass() != obj.getClass())
			return false;
		Product other = (Product) obj;
		return Double.doubleToLongBits(cost) == Double.doubleToLongBits(other.cost) && Objects.equals(make, other.make)
				&& pid == other.pid;
	}


	public String toString() {
		return ("Product[pid=" +pid + ",make= "+ make + ", cost ="+cost+ "]\n") ;
		
	}
	public int compareTo(Product o) {    //p1.compareTo(p2)
		if(this.cost>o.cost)
			return 1;
		else if(this.cost<o.cost)
			return -1;
		else 
			return 0;
	}
}
class CompareProduct implements Comparator<Product>
{
	@Override
	public int compare(Product o1, Product o2) {
		if(o1.getpid()>o2.getpid())
			return 1;
		else if (o1.getpid()<o2.getpid())
			return -1;
		else 
			return 0;
	}
}

public class Test {

	public static void main(String[] args){
		List<Product> list=new ArrayList<>();
		list.add(new Product(101,"Marker",35));
		list.add(new Product(102,"bottle",55));
		list.add(new Product(104,"keyboard",500));
		list.add(new Product(103,"mouse",500));
		System.out.println(list);
		
		
		
		System.out.println();
		Collections.sort(list,new CompareProduct());
		System.out.println(list);
		System.out.println();
		
	
	}

}
