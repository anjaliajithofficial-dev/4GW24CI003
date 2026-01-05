package program3;
import java.util.Scanner;
public class EmployeeDemo {
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc=new Scanner(System.in);
		System.out.print("Enter Employee id:");
		int id=sc.nextInt();
		System.out.print("Enter Employee Name:");
		String name=sc.next();
		System.out.print("Enter Employee Salary:");
		double salary=sc.nextDouble();
		Employee emp=new Employee(id,name,salary);
		System.out.println("\n----Employee Details before Salary Raise----");
		emp.display();
		System.out.print("\n Enter percentage to increase Salary:");
		double percent=sc.nextDouble();
		emp.raiseSalary(percent);
		System.out.println("\n----Employee Details after Salary Raise----");
		emp.display();
		sc.close();
	}

}
