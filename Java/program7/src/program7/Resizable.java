package program7;

public interface Resizable {
	void resizeWidth(int width);
	void resizeHeight(int height);
}
class Rectangle implements Resizable{
	int width;
	int height;
	Rectangle(int w, int h){
		width=w;
		height=h;
	}
	void display() {
		System.out.println("Width:"+width+",Height:"+height);
	}
	public void resizeWidth(int newWidth) {
		width=newWidth;
	}
	public void resizeHeight(int newHeight) {
		height=newHeight;
	}
}
