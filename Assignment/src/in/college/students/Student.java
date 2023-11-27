package in.college.students;

class StudentClass
	{
		private int rollno ;
		private String name;
		private double marks;
		
		public StudentClass()     //Default Construction
		{
			
		}
		public int getRollno() {      //Getter Function   Roll No.
			return rollno;
		}
		public void setRollno(int rollno) {		 //Setter Function  Roll no.
			this.rollno =rollno;
		}
		public String getName() {				 //Getter Function   Name
			return name;
		}
		public void setName(String Name) {			//Setter Function  Name
			this.name =Name;
			
		}
		public double getMarks() {		 //Getter Function   Marks
			return marks;
		}
		public void setMarks(double marks) {		//Setter Function  Marks
			this.marks = marks;
		}
		public StudentClass(int rollno, String name, double marks) {    // Parameterized Construction
			this.rollno=rollno;
			this.name=name;
			this.marks=marks;
		}
		@Override
		public String toString() {
			return "StudentClass[rollno=" + rollno+", name="+name+", marks="+marks+"]";
			
		}
		public void Display()
		{
				System.out.println(rollno+ "  "+name+"  "+marks);
	}
	}

public  class Student {	 //	main fn

		public static void main(String[] args) {
		
					StudentClass s1=new StudentClass(101,"Ram",85);
					StudentClass s2=new StudentClass(103,"Shyam",95);
					s1.Display();
					s2.Display();
					System.out.println(s1);
					System.out.println(s2);
			
}
}