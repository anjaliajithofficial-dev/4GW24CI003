package program4_1;

public class MyPoint {
	private int x;
	private int y;
	public MyPoint() {
		// TODO Auto-generated constructor stub
		this.x=0;
		this.y=0;
	}
	public MyPoint(int x,int y) {
		// TODO Auto-generated constructor stub
		this.x=x;
		this.y=y;
	}
	public void setXY(int x, int y) {
		this.x=x;
		this.y=y;
	}
	public int[] getXY() {
		return new int[] {x,y};
	}
	public String toString() {
		return "("+x+","+y+")";
	}
	public double distance(int x, int y) {
		int dx=this.x-x;
		int dy=this.y-y;
		return Math.sqrt(dx*dx+dy*dy);
	}
	public double distance(MyPoint another) {
		int dx=this.x-another.x;
		int dy=this.y-another.y;
		return Math.sqrt(dx*dx+dy*dy);
	}
	public double distance() {
		return Math.sqrt(x*x+y*y);
	}
}
