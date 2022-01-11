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
	int z;
	
	cout<<"Please enter line length: "<<endl;
	cin>>a;
	cout<<"Please enter line symbol: "<<endl;
	cin>>b;
	cout<<"Please enter line x coordinate: "<<endl;
	cin>>c;
	cout<<"Please enter line y coordinate: "<<endl;
	cin>>d;
	
	x=x+c;
	y=y+d;
	gotoxy(x,y);
	for(z=0;z<a;z=z+1){
		cout<<b;
	}
	

}
