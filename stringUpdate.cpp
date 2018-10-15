#include<stdio.h>
#include<iostream.h>
#include<conio.h>
#include<string.h>

main(){
	clrscr();
	int highestNumber, lowestNumber;
	double product = 1;
	cout<<"Enter highest number: ";
	cin>>highestNumber;
	cout<<"Enter lowest number: ";
	cin>>lowestNumber;
	for(int i = highestNumber; i>=lowestNumber; i--){
		product = product * i;
		char parity[100];
		if(i%2==0){
			strcpy(parity,"Even");
		} else {
			strcpy(parity,"Odd");
		}
		cout<<i<<"\t"<<parity<<"\n";
	}
	cout<<"The factorial is "<<product;
	getch();
}