import java.util.*;
class Student implements Comparable<Student>
{
		private int rollno;
		private String name;
		private double percentage;
		//Generate hashCode and equals using IDE
		public int getrollno()
		{
			return rollno;
		}
	public Student(int rollno, String name, double percentage) {
		super();
		this.rollno=rollno;
		this.name=name;
		this.percentage=percentage;
	}
	

	@Override
	public int hashCode() {
		return Objects.hash(percentage, name, rollno);
	}


	@Override
	public boolean equals(Object obj) {
		if (this == obj)
			return true;
		if (obj == null)
			return false;
		if (getClass() != obj.getClass())
			return false;
		Student other = (Student) obj;
		return Double.doubleToLongBits(percentage) == Double.doubleToLongBits(other.percentage) && Objects.equals(name, other.name)
				&& rollno == other.rollno;
	}


	public String toString() {
		return ("Student[rollno=" +rollno + ",name= "+ name + ", percentage ="+percentage+ "]\n") ;
		
	}
	public int compareTo(Student o) {    //p1.compareTo(p2)
		if(this.percentage>o.percentage)
			return 1;
		else if(this.percentage<o.percentage)
			return -1;
		else 
			return 0;
	}
}
class CompareStudent implements Comparator<Student>
{
	@Override
	public int compare(Student o1, Student o2) {
		if(o1.getrollno()>o2.getrollno())
			return 1;
		else if (o1.getrollno()<o2.getrollno())
			return -1;
		else 
			return 0;
	}
}

public class Testmain {

	public static void main(String[] args){
		List<Student> list=new ArrayList<>();
		list.add(new Student(222,"Shiva	",85));
		list.add(new Student(111,"Anjali",95));
		list.add(new Student(444,"Rohan",75));
		list.add(new Student(333,"Abhi",65));
		System.out.println(list);
		
		
		
		System.out.println();
		Collections.sort(list,new CompareStudent());
		System.out.println(list);
		System.out.println();
		
		Set<Student> set=new TreeSet<>();
		set.add(new Student(222,"Shiva	",85));
		set.add(new Student(111,"Anjali",95));
		set.add(new Student(444,"Rohan",75));
		set.add(new Student(333,"Abhi",65));
		System.out.println(set);
	
		System.out.println();
	
	}

}
