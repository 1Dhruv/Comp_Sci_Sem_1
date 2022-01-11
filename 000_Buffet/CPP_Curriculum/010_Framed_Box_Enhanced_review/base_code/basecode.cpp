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
	int e;
	int f;
	int x=1;
	int y=11;
	cout<<"please enter the box height:"<<endl;
	cin>>a;
	cout<<"what symbol do you want the box to be made out of"<<endl;
	cin>>b;
	cout<<"what do you want the width of the box to be: "<<endl;
	cin>>c;
	cout<<"Please enter box x coordinate: "<<endl;
	cin>>e;
	cout<<"Please enter box y coordinate: "<<endl;
	cin>>f;
	
	// left
	x=x+e-1;
	y=y+f;
	gotoxy(x,y);
	for(d=0;d<a;d=d+1){
		gotoxy(x,y);
		cout<<b;
		y=y+1;
	}
	
	//right
	x=1;
	y=11;
	x=x+e+c-2;
	y=y+f;
	gotoxy(x,y);
	for(d=0;d<a;d=d+1){
		gotoxy(x,y);
		cout<<b<<endl;
		y=y+1;
		
	}
	
	//top
	x=1;
	y=11;
	x=x+e-1;
	y=y+f;
	gotoxy(x,y);
	for(d=0;d<c;d=d+1){
		cout<<b;
	}
	
	
	//bottom
	x=1;
	y=11;
	x=x+e-1;
	y=y+f+a-1;
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
	
	
	
}
