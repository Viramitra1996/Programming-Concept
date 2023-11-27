import java.util.*; 
class Softwarelibrary {
				private int mrp;
				private String Book_name;
				
				private string publisher;
				private string Writer;
			
				
		public Softw() {
				skillset=new LinkedHashSet<>();
				}
				
		public void accept(){
				Scanner sc=new Scanner(System.in);
				System.out.println("Enter Book info\nRollno= ");
				rollno=sc.nextInt();
				System.out.println("Name= ");
				name=sc.next();
				System.out.println("Percentage= ");
				percentage=sc.nextDouble();
				
				System.out.println("Enter 1 skills");
				skillset.add(sc.next());
				System.out.println("Enter 2 skills");
				skillset.add(sc.next());
				System.out.println("Enter 3 skills");
				skillset.add(sc.next());
				
				}
		

		public void display(){
			System.out.println("Rollno= "+rollno+"Name= "+name+"percentage= "+percentage+"Skillset= "+skillset);
		}
}

class UtilityList {
			private List<Software> list=new ArrayList<>();

			public void createList(Softwarelibrary s) 
			{
						list.add(s);
			}

	public void printList(){

		for(Softwarelibrary s:list)
				s.display();
				}
}


public class Book{
	public static void main(String[] args) {
		
		Scanner sc=new Scanner(System.in);

		UtilityList ul=new UtilityList();
		boolean t=true;
	while(t){
		System.out.println("1.Add Book Record");
		System.out.println("2.Display  Records of all Books");
		System.out.println("3.Exit");
		
		switch(sc.nextInt())
		
		{

		case 1:
				Softwarelibrary s=new Softwarelibrary();
				s.accept();
				ul.createList(s);
						break;
		
		case 2:
					ul.printList();
						break;
		case 3:
					t=false;
							

}
}
}
}
	