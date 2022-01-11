import java.util.Scanner;
import java.util.Random;

class starter {
	public static void main(String args[]) {
		// the string "I love to learn coding remotely." will appear in
		// the command window when you compile and run this program.
		Scanner sc =new Scanner(System.in);
		
		System.out.println("What is your name");
		String a=sc.nextLine();
		
		System.out.println("What is your title? Ex: Blacksmith");
		String ab=sc.nextLine();
		System.out.println("Do you want to be a wizard, rogue, or warrior.  Please write in lowercase"); 
		String b =sc.nextLine();
		
		boolean c =(b.equals("wizard"));
		boolean d =(b.equals("rogue"));
		boolean e =(b.equals("warrior"));
		
		if(c)
		{
		System.out.println("Ecellente you choose the magic of the Wizard.");
		}
		else if(d)
		{
		System.out.println("Congrats you are know a Rogue.");
		}
		else if(e)
		{
		System.out.println("Outstanding you are know a warrior know you will follow the way of a warrior.")	;
		}
		else
		{
		System.out.println("You have not choosen something please rerun the code.");
		}
		
		System.out.println("You have 25 skill points to spend in the following: Strength, Dexterity, Intelligence, Constitution, and Charisma. Spend them wisely.");
		System.out.println("");
		System.out.println("");
		
		System.out.println("Strength (1-10)");
		int f=sc.nextInt();
		boolean g=((f<10)||(f==10));
		int h=25-f;
		if(g)
		{
			System.out.println("You have "+ h + " left to spend.");
		}
		else
		{
			System.out.println("Please input a smaller value.  Strength (1-10)");
			f=sc.nextInt();
			h=25-f;
			System.out.println("You have "+ h + " left to spend.");
		}
		System.out.println("");
		System.out.println("");
		
		System.out.println("Dexterity (1-10)");
		int j=sc.nextInt();
		boolean k=((j<10)||(j==10));
		int l=h-j;
		if(k)
		{
			System.out.println("You have "+ l + " left to spend.");
		}
		else
		{
			System.out.println("Please input a smaller value.  Derexity (1-10)");
			j=sc.nextInt();
			l=h-j;
			System.out.println("You have "+ l + " left to spend.");
		}
		
		System.out.println("");
		System.out.println("");
		
		System.out.println("Intelligence (1-10)");
		int n=sc.nextInt();
		boolean o=(((n<10)||(n==10)) && ((n<l) || (n==l)));
		int p=l-n;
		if(o)
		{
			System.out.println("You have "+ p + " left to spend.");
		}
		else
		{
			System.out.println("Please input a smaller value.  Intelligence (1-10)");
			n=sc.nextInt();
			p=l-n;
			System.out.println("You have "+ p + " left to spend.");
		}
		
		System.out.println("");
		System.out.println("");
		
		System.out.println("Constitution (1-10)");
		int r=sc.nextInt();
		boolean s=(((r<10)||(r==10)) && ((r<p) || (r==p)));
		int t=p-r;
		if(s)
		{
			System.out.println("You have "+ t + " left to spend.");
		}
		else
		{
			System.out.println("Please input a smaller value.  Consitution (1-10)");
			r=sc.nextInt();
			t=p-r;
			System.out.println("You have "+ t + " left to spend.");
		}
	
		System.out.println("");
		System.out.println("");
		
		System.out.println("Charisma (1-10)");
		int u=sc.nextInt();
		boolean v=(((u<10)||(u==10)) && ((u<t) || (u==t)));
		int w=t-u;
		if(v)
		{
			System.out.println("You have "+ w + " left to spend.");
		}
		else
		{
			System.out.println("Please input a smaller value.  Intelligence (1-10)");
			u=sc.nextInt();
			w=t-u;
			System.out.println("You have "+ w + " left to spend.");
		}
	
	System.out.println("");
	System.out.println("");	
	
	System.out.println("-----------------------------------------------------------------------");
	System.out.println("You are "+ a+" the " + ab+" of CVHS");
	System.out.println("You're a " + b+ " with the following stats!");
	System.out.println("Strenght - " +f);	
	System.out.println("Dexterity - " +j);		
	System.out.println("Intelligence - " +n);		
	System.out.println("Constitution - " +r);		
	System.out.println("Charisma - " +u);
	System.out.println("");
	System.out.println("Good luck on your quest "+a);
	}
}
