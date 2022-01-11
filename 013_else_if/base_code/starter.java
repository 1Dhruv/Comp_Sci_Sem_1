import java.util.Scanner;
import java.util.Random;

class starter {
	public static void main(String args[]) {
		// the string "I love to learn coding remotely." will appear in
		// the command window when you compile and run this program.
		Random rand=new Random();
		Scanner sc=new Scanner(System.in);
		System.out.println("Pick a number between 1-1000");
		int x=sc.nextInt();
		
		int y= rand.nextInt(1000)+1;
		
		boolean a=(x<y);
		boolean b=(x>y);
		boolean c=(x==y);
		if(a)
		{
			System.out.println("Your number was Smaller than the random number. The random number was "+y);
		}
		else if(b)
		{
			System.out.println("Your number was Larger than the random number. The random number was "+y);
		}
		else if(c)
		{
			System.out.println("Your number is the same as the random number. The random number was "+y);
		}
	
		
		
	}
}
