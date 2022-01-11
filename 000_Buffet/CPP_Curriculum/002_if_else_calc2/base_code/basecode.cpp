// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	char a;
	int b;
	int c;
	
	
	
	cout<<"Give me one number"<<endl;
	cin>>b;
	cout<<"Give me a second number"<<endl;
	cin>>c;
	cout<<"Give me a operator"<<endl;
	cin>>a;
	char op1='+';
	char op2='*';
	char op3='/';	
	char op4='-';
	
	if(a==op1)
	{
		cout<<b+c;
	} 
	
	if(a==op2)
	{
		cout<<b*c;
	} 
	
	if(a==op3)
	{
		cout<<b/c;
	} 
	
	if(a==op4)
	{
		cout<<b-c;
	} 
	
		
	
	

	
}
