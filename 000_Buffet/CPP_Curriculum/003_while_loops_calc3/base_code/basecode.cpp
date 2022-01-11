// base code file
#include "./hfiles/poole.h"
#include <string>
///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	char a;
	int b;
	int c;
	char d='q';
	char e;
	
	while(true){
		
	
	
	
	cout<<"Give me one number"<<endl;
	cin>>b;
	cout<<"Give me a operator"<<endl;
	cin>>a;
	cout<<"Give me a second number"<<endl;
	cin>>c;
	
	char op1='+';
	char op2='*';
	char op3='/';	
	char op4='-';
	
	if(a==op1)
	{
		cout<<b+c<<endl;
	} 
	
	if(a==op2)
	{
		cout<<b*c<<endl;
	} 
	
	if(a==op3)
	{
		cout<<b/c<<endl;
	} 
	
	if	(a==op4)
	{
		cout<<b-c<<endl;
	} 
	
	cout<<"Please enter q to quit, or any other character to continue:"<<endl;
	cin>>e;
	if(e==d){
		break;
	}
		
	}
	
}
