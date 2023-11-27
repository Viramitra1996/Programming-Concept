class Account {
	private int balance;
	
		public Account() {
			balance=10000;
		}
public void deposite(int amount)
{
	System.out.println("Balance before Deposite :"+balance);
	balance=balance+amount;
	System.out.println("Balance after deposite :"+balance);
}
public void withdraw(int amount)
{
	System.out.println("Balance before Withdraw :"+balance);
	balance=balance-amount;
	System.out.println("Balance after Withdraw :"+balance);
}
}
class AccountUser extends Thread{
	private String name, tot;
	private Account account;
	private int amount;
	
	public AccountUser(String n,Account a, String tran, int amt)
	{
		name=n;
		account=a;
		tot=tran;
		amount=amt;
		
	}
	public void run() {
		if (tot.equals("deposite"))
				account.deposite(amount);
		else if (tot.equals("withdraw"))
				account.withdraw(amount);
		
	}
}



	public class AccountTester {
		
		public static void main(String[] args) {
			Account acc=new Account();
			AccountUser user1=new AccountUser("user1",acc,"deposite",10000);
			
			AccountUser user2=new AccountUser("user2",acc,"withdraw",500);
			user1.start();
			user2.start();
	}

}
