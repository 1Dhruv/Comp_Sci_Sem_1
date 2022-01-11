import java.util.Scanner;
import java.util.Random;

class starter {
	public static void main(String args[]) {
		// Your code goes below here
		Scanner sc= new Scanner(System.in);
		Random rand= new Random();
	int a =rand.nextInt(1000)+1;
	while (true)	
	{
	System.out.println("Guess a number: ");
	int b=sc.nextInt();
	boolean c=(b>a);
	boolean d=(b<a);
	boolean e=(b==a);
	if(c)
		{
		System.out.println("You're a little too high!");	
		}
	else if (d)
		{
		System.out.println("You're a little too low!");
		}
	else if (e)
		{
		System.out.println("You guessed it!");
		break;
		}
	
	
	}

		
	}
}
