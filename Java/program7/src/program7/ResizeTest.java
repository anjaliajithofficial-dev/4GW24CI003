package program7;

public class ResizeTest {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Rectangle rect=new Rectangle(10,20);
		System.out.println("Original Size:");
		rect.display();
		rect.resizeWidth(30);
		rect.resizeHeight(40);
		System.out.println("Resized Size");
		rect.display();
	}

}
