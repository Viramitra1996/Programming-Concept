import java.util.*;
class Employee {
	Scanner sc= new Scanner(System.in);
	private int emp_id;
	private String name;
	private double salary;
	
	public Employee() {
		emp_id=1;
		name= "abc";
		salary= 12000;
	}
	
	
	public Employee(int emp_id, String name, double salary) {
		super();
		this.emp_id = emp_id;
		this.name = name;
		this.salary = salary;
	}
	
	public int getEmp_id() {
		return emp_id;
	}


	public void Accept() {
		System.out.println("Enter your employee id : ");
		this.emp_id= sc.nextInt();
		sc.nextLine();
		System.out.println("Enter your employee name : ");
		this.name=sc.nextLine();
		System.out.println("Enter your employee salary : ");
		this.salary= sc.nextDouble();
		
	}
	public void Display() {
		System.out.println("Employee data :");
		System.out.println(emp_id);
		System.out.println(name);
		System.out.println(salary);
	}
	
	
}


public class Tester {

	public static void main(String[] args) {
		List<Employee> list=new ArrayList<>();
		
		
	
		while(true) {
			Scanner sc=new Scanner(System.in);
			System.out.println("Choose an Option");
			System.out.println(" 1.Add Employee Records :\n 2. Display All Records :\n 3. Update Employee Records :\n 4. Exit : ");
			switch(sc.nextInt()) {
			case 1:
					Employee e1=new Employee();
					e1.Accept();
					list.add(e1);
					break;
			case 2:
						for(Student e: list) {
							e.Display();
						}
						break;
			case 3:
				System.out.println("Enter Employee emp_id");
				int id=sc.nextInt();
						for(Employee e:list)
					if(id==e.getEmp_id())
					System.out.println("Enter the details Name and Salary");
					e1.emp_id(sc.nextInt());
					e1.setname(sc.nextLine());
					e1.setsalary(sc.nextDouble());
					
				
				else 
					System.out.println("Employee id is not Exits");
				
			
		}
		break;
			case 4:
				System.exit(0);
			}
		

	}

}
