package program8;

public class OuterInnertest {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Outer outer=new Outer();
		outer.display();
		Outer.Inner inner=outer.new Inner();
		inner.display();
	}

}
