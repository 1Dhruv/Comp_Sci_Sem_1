// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	int a;
	char b;
	int c;
	int d;
	int x=1;
	int y=8;
	cout<<"please enter the box height:"<<endl;
	cin>>a;
	cout<<"what symbol do you want the box to be made out of"<<endl;
	cin>>b;
	cout<<"what do you want the width of the box to be: "<<endl;
	cin>>c;
	for(d=0;d<a;d=d+1){
		cout<<b<<endl;
	}
	x=x+c-1;
	gotoxy(x,y);
	for(d=0;d<a;d=d+1){
		gotoxy(x,y);
		cout<<b<<endl;
		y=y+1;
		
	}
	x=1;
	y=8;
	gotoxy(x,y);
	for(d=0;d<c;d=d+1){
		cout<<b;
	}
	
	
	
	y=8;
	y=y+a-1;
	gotoxy(x,y);
	for(d=0;d<c;d=d+1){
		cout<<b;
	
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
