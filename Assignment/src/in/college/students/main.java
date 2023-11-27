package in.college.students;

 class Student_Class {
			
			private int rollno;
			private String Name;
			private Double Marks;
	
	public Student_Class() {
				
			}

	public int getrollno(int rollno) {
		return rollno;
	}
			
	public void setrollno(int rollno) {
		
		this.rollno=rollno=0;
		rollno++;
	}
	public String getName(String Name) {
		return Name;
	}
			
	public void setName(String Name) {
		this.Name=Name;
	}
	public double getMarks(double Marks) {
		return Marks;
	}
			
	public void setMarks(double Marks) {
		this.Marks=Marks;
	}
	public Student_Class(int rollno, String Name,double Marks) {
		
		this.rollno=rollno;
		this.Name=Name;
		this.Marks=Marks;
	}
	
	
	@Override
	public String toString() {
		return "Student_Class [rollno=" + rollno + ", Name=" + Name + ", Marks=" + Marks + "]";
	}
	public void Display() {
	System.out.println("rollno : "+rollno+ " Name: "+Name+ " Marks : "+Marks);
	}
 }
	public class main{
	

	public static void main(String[] args) {
		
		//for(int i=0;;i++) {
		//int arr[];}
		Student_Class s1=new Student_Class(101,"Ram",85);	
		s1.Display();
	}

	}
