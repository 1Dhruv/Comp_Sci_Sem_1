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
	int x=0;
	int y=0;
	int q=2;
	int p=8;
	
	cout<<"Please give me a symbol:"<<endl;
	cin>>a;
	
	cout<<"Please give me the length:"<<endl;
	cin>>b;
	
	cout<<"Please enter h for horizontal, v for vertical, or d for diagonal:"<<endl;
	cin>>c;
	
	if(c=='v'){
		
	for(d=0;d<b;d=d+1){
	cout<<a<<endl;
	}
		
	}
	
	if(c=='h'){
		
	for(d=0;d<b;d=d+1){
	cout<<a;
	}
		
	}
	if(c=='d'){
	
		
	
	for(d=0;d<b;d=d+1){
	gotoxy(q,p);
	
	cout<<a;
	q=q+1;
	p=p+1;	
	}
		
	}
}
