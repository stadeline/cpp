#include<iostream.h>
#include<conio.h>

void someFunction(){
	cout<<"This is a function.";
}

main(){
		
	clrscr();
	
	int n1,n2,n3,n4,n5;
	int outSum, outDiff, outProd ,outQuot;
	int outRem;
	char someString [1];
	
	cout<<"Enter the first number: ";
	cin>>n1;
	cout<<"Enter the second number: ";
	cin>>n2;

	outSum = n1+n2;
	outDiff = n1-n2;
	outProd = n1*n2;
	outQuot = n1/n2;
	outRem = n1%n2;
	
	cout<<"The sum is "<<outSum<<". The difference is "<<outDiff<<". The product is "<<outProd<<". The quotient is "<<outQuot<<" remainder "<<outRem;
	
	someFunction();
	
	switch (outSum) {
		case 1:
			cout<<"It's exactly 1";
			break;
		default:
			cout<<"Hello switch.";
			break;
	}
	
	if(outSum<0){
		cout<<"The result is negative";
	} else if (outSum > 0){
		cout<<"The result is positive";
	}
	
	getch();
}