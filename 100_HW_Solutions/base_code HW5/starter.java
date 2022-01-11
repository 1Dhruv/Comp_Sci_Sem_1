import java.util.Scanner;
import java.util.Random;

class starter {
	public static void main(String args[]) {
		// the string "I love to learn coding remotely." will appear in
		// the command window when you compile and run this program.
		Scanner sc =new Scanner(System.in);
		Random rand=new Random();
		System.out.println("Hello and welcome to gambling with Dhruv.");
		System.out.println("You will be given 100 coins.");
		System.out.println("");
		System.out.println("");
		System.out.println("");
			int df = 100;
		
	
	
		while (true)	
	{
	System.out.println("How much do you want to wage ");
	int b=sc.nextInt();
	
		int ab=rand.nextInt(6)+1;
		int bc=rand.nextInt(6)+1;
		int cd=rand.nextInt(6)+1;
		boolean c=((ab==bc)||(bc==cd)||(ab==cd));
		boolean d=((ab==bc)&&(bc==cd)&&(ab==cd));
		boolean e=((ab!=bc)&&(bc!=cd)&&(ab!=cd));
		boolean y=(b==df);
		boolean k=(df==0);
		boolean yes=(b<=df);
		boolean cheat=(b<0);
		
	if(cheat)
	{
	System.out.println("No cheating,no cheating,no cheating, don't be a cheater, no cheating in gambling with Dhruv.");
	break;
	}
	
	if(k)
	{
		System.out.println("Sorry you lost you have 0 points left");
		break;
	}
	else if(yes)
	{
	
	if(c)
		{
		System.out.println("Hey two of numbers in the dice roll are the same.");
		df=(df-b)+(b*2);
		System.out.println("Your new balance is "+df);
		}
	else if (d)
		{
		System.out.println("You're lucky all three of the numbers are the same");
		df=(df-b)+(b*3);
		System.out.println("Your new balance is "+df);
		}
	else if (e)
		{
		System.out.println("So sorry none of the rolls had the same number");
		df=df-b;
		System.out.println("Your new balance is "+df);
		}
	else if(y)
	{
		System.out.println("Remember the number you enter has to be less than or equal to your balance");
	}	
	sc.nextLine();
	System.out.println("Do you want to play again yes or no");
	String i=sc.nextLine();
	boolean l=(i.equals("yes") || i.equals("y") || i.equals("Y") || i.equals("Yes"));
	boolean j=(i.equals("no") || i.equals("n") || i.equals("N") || i.equals("No"));
	
	if(l)
	{
		System.out.println("okay let's continue playing, you have "+df+" points left");
	}
	
	else if(j)
	{
		System.out.println("okay good job you got "+df+" points thank you for playing gambling with Dhruv");
		break;
	}
		
	else
	{
		System.out.println("Okay looks like you didn't select anything so I am assuming it is a yes so know you will countinue to play.  Your cureent score is "+df);
	
	}
		
	}
	
	
		
	
		
	}
		
	}
}
