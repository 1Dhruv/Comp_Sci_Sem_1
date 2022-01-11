import java.util.Scanner;
import java.util.Random;

class starter {
	public static void main(String args[]) {
		// the string "I love to learn coding remotely." will appear in
		// the command window when you compile and run this program.
		Scanner sc=new Scanner(System.in);
		System.out.println("Do you want to be a wizard, rogue, or warrior.  Please write in lowercase"); 
		String d =sc.nextLine();
		
		boolean a =(d.equals("wizard"));
		boolean b =(d.equals("rogue"));
		boolean c =(d.equals("warrior"));
		
		if(a)
		{
		System.out.println("Ecellente you choose the magic of the Wizard.");
		}
		else if(b)
		{
		System.out.println("Congrats you are know a Rogue.");
		}
		else if(c)
		{
		System.out.println("Outstanding you are know a warrior know you will follow the way of a warrior.")	;
		}
		else
		{
		System.out.println("You have not choosen something please rerun the code.");
		}
		
		
		
	}
}
