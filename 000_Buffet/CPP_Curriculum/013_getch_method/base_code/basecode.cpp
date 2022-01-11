// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	char a='%';
	int d;
	int x=7;
	int y=10;
	char s='q';
	char r;
	//left
	gotoxy(7,10);
	for(d=0;d<8;d=d+1){
		gotoxy(x,y);
		cout<<a;
		y=y+1;
	}
	//right
	x=22;
	y=10;
	gotoxy(x,y);
	for(d=0;d<8;d=d+1){
		gotoxy(x,y);
		cout<<a;
		y=y+1;
		
	}
	//top
	x=7;
	y=10;
	gotoxy(x,y);
	for(d=0;d<15;d=d+1){
		cout<<a;
	}
	
	
	//bottom
	x=7;
	y=17;
	gotoxy(x,y);
	for(d=0;d<15;d=d+1){
		cout<<a;
	}
	

while(true){	
	gotoxy(14,14);
	cout<<random(99);
	gotoxy(1,7);
	cout<<"if you want to quit press q and if you want to countinue press any other key:";
	char r=getch();
	if(s==r){
		break;
	}
	
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



