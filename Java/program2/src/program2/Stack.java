package program2;

public class Stack {
	private int maxSize=10;
	private int top;
	private int[] stackArray;

	public Stack() {
		stackArray=new int[maxSize];
		top=-1;
	}
	public void push(int value) {
		if(top==maxSize-1) {
			System.out.println("Stack Overflow! Cannot push"+value);
		}
		else {
			stackArray[++top]=value;
			System.out.println(value+"pushed to Stack.");
		}
	}
	public int pop() {
		if(top==-1) {
			System.out.println("Stack Underflow! Stack is empty.");
			return -1;
		}
		else {
			int value=stackArray[top--];
			System.out.println(value+"popped from Stack.");
			return value;
		}
	}
	public void display() {
		if(top==-1) 
			System.out.println("Stack is empty.");
		else {
			System.out.println("Stack elements are (top to bottom):");
			for(int i=top;i>=0;i--)
				System.out.println(stackArray[i]);
		}
	}
}

