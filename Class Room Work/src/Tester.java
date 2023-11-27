import in.cdac.gadgets.Computer;
import static in.cdac.gadgets.Computer.showCnt;

public class Tester {

	public static void main(String[] args) {
		Computer    c1=new Computer();
		Computer	c2=new Computer(11,"Hp",42345);
		Computer	c3=new Computer(12,"Apple",75000);
		Computer	c4=new Computer();
		showCnt();
		c3.display();
	}

}
