package program5;

public class ShapeDemo {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Shape shape;
		shape = new Circle();
		shape.draw();
		shape.erase();
		shape = new Triangle();
		shape.draw();
		shape.erase();
		shape = new Square();
		shape.draw();
		shape.erase();
	}

}
