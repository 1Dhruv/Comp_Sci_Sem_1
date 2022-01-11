// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	char a;
	int x=5;
	int y=4;
	int d;
	cout<<"What symbol do you want to use as your snowflake"<<endl;
	cin>>a;
for(d=0;d<7;d=d+1){
	gotoxy(x,y);
	cout<<a<<endl;
	sleep(1);
	gotoxy(x,y);
	cout<<" ";
	y=y+1;
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
	
	
	
	
}
