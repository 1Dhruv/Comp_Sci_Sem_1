import java.util.Scanner;

class starter {
	public static void main(String args[]) {
		// the string "I love to learn coding remotely." will appear in
		// the command window when you compile and run this program.
		Scanner sc=new Scanner(System.in);
		System.out.println("Please put your first number"); 
		int x=sc.nextInt();
		
		System.out.println("Please put your second number"); 
		int y=sc.nextInt();
		
		boolean a=(x<y);
		boolean b=(x>y);
		boolean c=(x==y);
		
		if (a){
			System.out.println("Your numbers are diffrent!");
			
		}
		
		if (b){
			System.out.println("Your numbers are diffrent!");
			
		}
		
		if (c){
			System.out.println("Your numbers are the same!");
			
		}
		
	}
}
