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
		
		boolean a=((x<y)||(x>y));
		q
		if(a)
		{
			System.out.println("Your number wasn't the random number.  The number was "+y);
		}
		else
		{
			System.out.println("Good job you got the same number as the random number.  The number was "+y);
		}
		
		
		
		
		
		
		
		
	}
}
