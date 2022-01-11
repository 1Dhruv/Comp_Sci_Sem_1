// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	
	int a=5;
	int b=15;
	while(a<=25)
	{
	cout<<a<<endl;
	a=a+1;
	}
	
	cout<<endl;
	cout<<endl;
	cout<<endl;
	
	while(true)
	{
	cout<<b<<endl;
	if(b==5){
		break;
	}
	b=b-1;
	}
	cout<<endl;
	cout<<endl;
	for(int i=5; i<=25; i=i+1){
		cout<<i<<endl;
	}
	cout<<endl;
	cout<<endl;
	
	for(int z=15; z>=5; z=z-1){
		cout<<z<<endl;
	}
	
}
