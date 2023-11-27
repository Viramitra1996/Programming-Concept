
class StudentClass
	{
		private int rollno ;
		private String name;
		private double marks;
		
		public StudentClass()
		{
			
		}
		public int getRollno() {
			return rollno;
		}
		public void setRollno(int rollno) {
			this.rollno =rollno;
		}
		public String getName() {
			return name;
		}
		public void setName(String Name) {
			this.name =Name;
			
		}
		public double getMarks() {
			return marks;
		}
		public void setMarks(double marks) {
			this.marks = marks;
		}
		public StudentClass(int rollno, String name, double marks) {
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

public  class Student {

		public static void main(String[] args) {
		
					StudentClass s1=new StudentClass(101,"Ram",85);
					s1.Display();
					System.out.println(s1);
			
}
}