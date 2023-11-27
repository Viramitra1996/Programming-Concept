package book;

import java.util.*;
class Softwarelibrary {
				private int mrp;
				private String Book_name;
				private String publisher;
				private String Writer;
			
				
		public void accept(){
				Scanner sc=new Scanner(System.in);
				System.out.println("Enter Book info\nBook_MRP :");
				System.out.println("Book_Name :");
				System.out.println("Book_Publisher : ");
				System.out.println("Book_Writter :");
				mrp=sc.nextInt();
				Book_name=sc.next();
				publisher=sc.next();
				Writer=sc.next();
			
				
				}

		

		public void display(){
			System.out.println("Book_Name :"+Book_name+"Book_Publisher :"+publisher+"Book_Writer :"+Writer);
		}
}

class UtilityList {
			private List<Softwarelibrary> list=new ArrayList<>();

			public void createList(Softwarelibrary s) 
			{
						list.add(s);
			}

	public void printList(){

		for(Softwarelibrary s:list)
				s.display();
				}
}


public class test{
	public static void main(String[] args) {
		
		Scanner sc=new Scanner(System.in);

		UtilityList ul=new UtilityList();
		boolean t=true;
	while(t){
		System.out.println("1.Save Book");
		System.out.println("2.Display all saved Books");
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
	