// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	char a;
	char b=' ';
	char s='q';
	char r = ' ';
	while(true){
		if(r==b){	
			while(kbhit() == 0){
				gotoxy(5,5);
				cout <<random(99);
			}
		}
			cout<<endl;
			gotoxy(2,6);
			cout<<""<<endl;
			r=getch();
			if(r == s){
				break;
			}
	}
}
	