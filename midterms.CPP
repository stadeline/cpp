#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
main(){
	
	// Clear
	clrscr();
	
	// Assignment Operators
	int someInteger = 10;
	int firstNumber = 22;
	int someOtherNumber = 7;
	char someString[10];
	
	// Common Methods
	cout<<"Enter any string: ";
	cin>>someString;
	cout<<"This is the result of the string is: "<<someString<<"\n";
	// printf takes 2 arguments.
	// Anything beginning with % is a specifier and will be replaced by the variable formatted to the specifier.
	// http://www.cplusplus.com/reference/cstdio/printf/
	printf("The current value of someInteger is %.2i \n", someInteger);
	
	
	// Mathemathical Operators
	float result;
	// Modulus Division cannot be performed on floats. Use integers to use this operator.
	result = firstNumber % someOtherNumber * firstNumber / someOtherNumber - firstNumber + someOtherNumber;
	cout<<"The result of that wierd operation is: "<<result;
	
	// Comparison Operators
	if (1==1 && 2>=1 && 1<=2 && 1!=2){
		// Methods on evaluation to true.
	}
	// String comparison requires a strcmp method which takes two arguments of the type string?
    // strcmp returns 0 if they are equal. My guess is it returns something else (perhaps an error code) if it's false.
    // Spaces don't work.
	if (strcmp(someString,"asd")==0){
        cout<<"\nThe string you've typed is \"Some literal string\"";
    }
	
	
	// Pause
	getch();
}