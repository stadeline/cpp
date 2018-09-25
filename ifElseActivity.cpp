// Includes
#include<iostream.h>
#include<conio.h>
// Main
main(){
	// Clear the screen.
	clrscr();
	
	// Get a number 
	int inputNumber;
	cout<<"What is the number that you would like to check?: ";
	cin>>inputNumber;
	
	// Divide it by 2 and see if there is any remainder.
	int result;
	result=inputNumber%2;
	
	if(result==0){
		cout<<"The number "<<inputNumber<<" is even." ;
	} else {
		cout<<"The number "<<inputNumber<<" is odd." ;
	}
	
	// Pause
	getch();
}