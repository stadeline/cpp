#include<iostream.h>
#include<conio.h>

main () {
	int typeOfPassenger, numberOfPassenger, fareRate;
	float numberOfKilometer, discountRate, netFare;
	char someString [1];
	
	Start:
	clrscr();
	
	cin>>someString;
	cout<<someString;
	
	cout<<"(1)Senior\n";
	cout<<"(2)Student\n";
	cout<<"(3)Regular\n";
	cout<<"Enter type of passenger: ";
	cin>>typeOfPassenger;
	
	switch(typeOfPassenger) {
    case 1 :
		fareRate = 8;
		discountRate = 0.25;
		break;
    case 2 :
		fareRate = 8;
		discountRate = 0.20;
		break;
	case 3 :
		fareRate = 9;
		discountRate = 0.00;
		break;
	default:
		cout<<"Invalid passenger type. Press any key to try again.";
		getch();
		goto Start;
		break;
		
	}
	
	cout<<"Enter number of Kilometer: ";
	cin>>numberOfKilometer;
	
	cout<<"Enter number of Passenger: ";
	cin>>numberOfPassenger;
	
	cout<<"Passenger discount is: "<<discountRate*100<<"%\n";
	
	netFare = (fareRate * numberOfKilometer) - ((fareRate * numberOfKilometer))*discountRate;
	cout<<"Your Fare Ride is: "<<netFare<<"\n";
	
	cout<<"Total Fare Ride is: "<<netFare * numberOfPassenger;
	
	getch();
}