// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	char a;
	int b;
	char c;
	int d;
	int x=1;
	int y=10;
	int e;
	int f;
	cout<<"Give me a character: "<<endl;
	cin>>a;
	cout<<"Give me a number: "<<endl;
	cin>>b;
	cout<<"Give me a operator: "<<endl;
	cin>>c;
	cout<<"Give me a second number: "<<endl;
	cin>>e;
	//left
	gotoxy(1,10);
	for(d=0;d<8;d=d+1){
		gotoxy(x,y);
		cout<<a;
		y=y+1;
	}
	//right
	x=15;
	y=10;
	gotoxy(x,y);
	for(d=0;d<8;d=d+1){
		gotoxy(x,y);
		cout<<a;
		y=y+1;
		
	}
	//top
	x=1;
	y=10;
	gotoxy(x,y);
	for(d=0;d<15;d=d+1){
		cout<<a;
	}
	
	
	//bottom
	x=1;
	y=17;
	gotoxy(x,y);
	for(d=0;d<15;d=d+1){
		cout<<a;
	}
	gotoxy(6,14);
	char op1='+';
	char op2='*';
	char op3='/';	
	char op4='-';
	
	if(c==op1)
	{
		f=b+e;
		cout<<b<<"+"<<e<<"="<<f;
	} 
	
	if(c==op2)
	{
		f=b*e;
		cout<<b<<"*"<<e<<"="<<f;
	} 
	
	if(c==op3)
	{
		f=b/e;
		cout<<b<<"/"<<e<<"="<<f;
	} 
	
	if(c==op4)
	{
		f=b-e;
		cout<<b<<"-"<<e<<"="<<f;
	} 
	
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;

}
