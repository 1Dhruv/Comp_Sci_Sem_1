import java.util.Scanner;
class starter {
	public static void main(String args[]) {
		// the string "I love to learn coding remotely." will appear in
		// the command window when you compile and run this program.
		Scanner sc=new Scanner(System.in);
		System.out.println("Give me a number");
		int a=sc.nextInt();
		
		
		System.out.println("Give me a number");
		int b=sc.nextInt();
		int c=a*b;
		int d=c%3;
		boolean e=(d==0);
		if(e)
		{
		System.out.println(c);	
		}
		
		
	}
}
