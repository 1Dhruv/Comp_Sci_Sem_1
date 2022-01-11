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
	cout<<"Please give me a symbol:"<<endl;
	cin>>a;
	
	cout<<"Please give me the length:"<<endl;
	cin>>b;
	
	cout<<"Please enter h for horizontal, or v for vertical:"<<endl;
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
	
}
