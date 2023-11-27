import java.util.Scanner;

class MyThread implements Runnable {
	
	private static final String  = null;
	Thread t1,t2;
	public MyThread() {
		
	t1 = new Thread(this,"Increament Value is=");
	t2 = new Thread(this,"Hi...");
	t1.start();
	t2.start();
	
	}
	
	@Override
	public void run() {
	for(int i=0; i<10; i++){
	
		if(Thread.currentThread()==t1);
			for(int j=1; j<11; j++) {
				int num,n=0;
					num=n+i;
			
				System.out.println("Hello..." +num);
			}
		 if (Thread.currentThread()==t2);{
		for(int j=1; j<11; j++); 
			int mum=0,m=1;
			mum=m*i;
		}
		System.out.println("Hi..."+mum);
	}
	
	
	}
}

public class Threads16{
	public  void main(String[] args)
	{
		int n=0,m=1,num,mum;
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter a number For Encrement");
		System.out.println("Enter a number For Encrement");
		n=sc.nextInt();
		m=sc.nextInt();
		
		new MyThread();
	}
}

