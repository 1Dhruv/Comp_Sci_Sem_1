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
	int g;
	int x=1;
	int y=11;
	
	cout<<"please enter the box height:"<<endl;
	cin>>a;
	cout<<"what symbol do you want the box to be made out of"<<endl;
	cin>>b;
	cout<<"what do you want the width of the box to be: "<<endl;
	cin>>c;
	cout<<"Please enter line x coordinate: "<<endl;
	cin>>f;
	cout<<"Please enter line y coordinate: "<<endl;
	cin>>g;
	
	x=x+f;
	y=y+g;
	gotoxy(x,y);
	
	for(d=0;d<a;d=d+1){
		for(e=0;e<c;e=e+1){
		cout<<b;
	
		
	}
	cout<<endl;
	y=y+1;
	gotoxy(x,y);
	
	
		
	}

}
