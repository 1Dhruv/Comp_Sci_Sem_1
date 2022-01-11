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
	
	cout<<"please enter the box height:"<<endl;
	cin>>a;
	cout<<"what symbol do you want the box to be made out of"<<endl;
	cin>>b;
	cout<<"what do you want the width of the box to be: "<<endl;
	cin>>c;
	
	for(d=0;d<a;d=d+1){
		for(e=0;e<c;e=e+1){
		cout<<b;
	}
	cout<<endl;
		
	}
	

}
