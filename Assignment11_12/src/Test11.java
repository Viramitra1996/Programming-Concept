import java.util.*;

	public class Student() {
		private int rollno;
		private String name;
		private Date dob;
	
		public Student() {
			name="abc";
			dob=new Date(05,10,1996);
			rollno=0;
		}
		public Student(int rollno, String name, int d, int m, int y) {
			this.rollno=rollno;
			this.name=name;
			dob=new Date(d,m,y);
	
}
		public void setRollno(int rollno) {
			this.rollno=rollno;
}
		public void Accept() {
			System.out.println("Enter your Name:  ");
			Scanner sc=new Scanner(System.in);
			String name=sc.nextLine();
			this.name=name;
			System.out.println("Enter your date of birth in dd/mm/yyyy format:  ");
			int d=sc.nextInt();
			int m=sc.nextInt();
			int y=sc.nextInt();
			this.dob=new Date();
	}
		public void Display() {
			System.out.println("Roll no.: "+rollno);
			System.out.println("Name :"+name);
			System.out.println("Date of Birth :");
			 Date.Display();

}
}






public class Test11 {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter the no. of Student: ");
		int n=sc.nextInt();
		Student[] arr=new Student[n];
		for(int i=0; i<n; i++) {
			arr[i] = new Student();
			arr[i].Accept();
			arr[i].setRollno(i+1);
		
		}
		for(int i=0; i<n; i++)
			arr[i].Display();
		System.out.println();
		
	}
	
}
