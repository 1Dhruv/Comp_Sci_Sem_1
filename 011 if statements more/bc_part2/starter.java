import java.util.Scanner;

class starter {
	public static void main(String args[]) {
		// the string "I love to learn coding remotely." will appear in
		// the command window when you compile and run this program.
		Scanner sc=new Scanner(System.in);
		
		System.out.println("Please enter one number");
		int x=sc.nextInt();

		System.out.println("Please enter a second number");
		int y=sc.nextInt();
		
		System.out.println("Please enter a third number");
		int z=sc.nextInt();

		
		boolean a=((z<x)&&(y<x));
		boolean b=((x<y)&&(z<y));
		boolean c=((x<z)&&(y<z));
		boolean d=((z>x)&&(y>x));
		boolean e=((x>y)&&(z>y));
		boolean f=((x>z)&&(y>z));
		
		if(a)
		{System.out.println("Your first number is the biggest number");
		System.out.println("The number was "+x);	
		}

		if(b)
		{System.out.println("Your second number is the biggest number");
		System.out.println("The number was "+y);
			
		}
		
		if(c)
		{System.out.println("Your third number is the biggest number");
		System.out.println("The number was "+z);	
		}
		
		if(d)
		{System.out.println("Your first number is the smallest number");
		System.out.println("The number was "+x);	
		}

		if(e)
		{System.out.println("Your second number is the smallest number");
		System.out.println("The number was "+y);
			
		}
		
		if(f)
		{System.out.println("Your third number is the smallest number");
		System.out.println("The number was "+z);	
		}
		
	}
}
