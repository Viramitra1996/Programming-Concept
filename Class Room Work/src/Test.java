import java.util.*;
public class Test {

	public static void main(String[] args) {
		
		List<Integer> v=new Vector<>();
		
		
		v.add(12);
		v.add(10);
		v.add(15);
		System.out.println(v);       //Using toString Method
		
		for(Integer x:v)			// Using for-each loop;
		{
			System.out.println(x+"  ");
		}
		System.out.println();
		
		Iterator itr=v.iterator();  	// Using Iterator
		while(itr.hasNext())
		{
			System.out.println(itr.next()+"   ");
		}
			System.out.println();
	}

}
