// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	int a;
	int x=35;
	int y=4;
	int d=1;
	int b;
	int c;
	cout<<"how tall do you want your christmas tree to be"<<endl;
	cin>>a;
	gotoxy(x,y);
	for(b=0;b<a;b=b+1){
		for(c=0;c<d;c=c+1){
			cout<<"*";
		}
		x=x-1;
		y=y+1;
		gotoxy(x,y);
		d=d+2;
	
		
	}
	y=4;
	y=y+a;
	gotoxy(34,y);
	cout<<"| |"<<endl;

	
while(true)	{
	int x1=5;
	int y1=4;
	int r;
	int x2=45;
	int y2=4;
	int q;
	int x3=20;
	int y3=4;
	int s;
	for(r=0;r<7;r=r+1){
		gotoxy(x1,y1);
		cout<<"❄️"<<endl;
		gotoxy(x2,y2);
		cout<<"❄️"<<endl;
		gotoxy(x3,y3);
		cout<<"❄️"<<endl;
		sleep(1);
		gotoxy(x1,y1);
		cout<<" ";
		gotoxy(x2,y2);
		cout<<" ";
		gotoxy(x3,y3);
		cout<<" ";
		x1=x1+1;
		y1=y1+1;
		y2=y2+1;
		x3=x3-1;
		y3=y3+1;

	
}
	
}
}