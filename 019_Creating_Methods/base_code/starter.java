import java.util.Scanner;
import java.util.Random;

class starter {
	
	public static void printf(String a, String b){
		String x=a;
		String y=b;
		String z=a+b;
		System.out.println(x);
		System.out.println(z);
		return;
	}
	
	public static void main(String args[]) {
		// Your code goes below here
	
	Scanner bill=new Scanner(System.in);
	
	System.out.println("Write a sentence!");
	String x=bill.nextLine();
	
	System.out.println("Write a sentence!");
	String y=bill.nextLine();
	
	printf(x,y);

	
	
	
	
	
	}
}
