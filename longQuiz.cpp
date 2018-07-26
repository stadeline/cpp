#include<iostream.h>
#include<conio.h>

main(){
	
	// Clear Screen
	clrscr();
	
	// Static Values
	double ratePerDay, otRate;
	
	// Inputs
	char employeeId[1];
	
	double numberOfDaysWorked, numberOfOt, cashAdvanced, philhealth, cashbond, sss, pagibig, gsis;
	
	// Outputs
	double basicPay, totalOt, grossPay, tax, totalDeduction, netPay;
	
	// EMPLOYEE ID
	cout<<"ENTER EMPLOYEE ID: ";
	cin>>employeeId;
	
	// RATE PER DAY
	ratePerDay = 512;
	cout<<"THE RATE PER DAY IS: "<<ratePerDay<<"\n";
	
	// NUMBER DAYS WORK
	cout<<"ENTER NUMBER DAYS WORK: ";
	cin>>numberOfDaysWorked;
	
	// BASIC PAY
	basicPay = ratePerDay * numberOfDaysWorked;
	cout<<"THE BASIC PAY IS: "<<basicPay<<"\n";
	
	// OT Rate
	otRate = 70;
	cout<<"THE OT is: "<<otRate<<" PER HOUR \n";
	
	// NUMBER OF OT
	cout<<"ENTER NUMBER OF OT: ";
	cin>>numberOfOt;
	
	// TOTAL OT
	totalOt = otRate * numberOfOt;
	cout<<"THE TOTAL OT is: "<<totalOt<<"\n";
	
	// GROSS PAY
	grossPay = basicPay + totalOt;
	cout<<"THE GROSS PAY is: "<<grossPay<<"\n";
	
	// DEDUCTIONS
	cout<<"\nDEDUCTIONS\n\n";
	
	// CASH ADVANCED
	cout<<"ENTER CASH ADVANCED: ";
	cin>>cashAdvanced;

	// PHILHEALTH
	cout<<"ENTER CASH PHILHEALTH: ";
	cin>>philhealth;
	
	// CASH CASHBOND
	cashbond = 100;
	cout<<"THE CASHBOND is: "<<cashbond<<"\n";
	
	// SSS
	cout<<"ENTER SSS: ";
	cin>>sss;
	
	// PAGIBIG
	cout<<"ENTER PAGIBIG: ";
	cin>>pagibig;
	
	// GSIS
	cout<<"ENTER GSIS: ";
	cin>>gsis;
	
	// TAX
	tax = .15 * grossPay;
	cout<<"THE TAX is: "<<tax<<"\n";
	
	// TOTAL DEDUCTION
	totalDeduction = cashAdvanced + philhealth + cashbond + sss + pagibig + gsis + tax;
	cout<<"THE TOTAL DEDUCTION is: "<<totalDeduction<<"\n";
	
	// NET PAY
	netPay = grossPay - totalDeduction;
	cout<<"THE NET PAY is: "<<netPay<<"\n";
	
	// Pause
	getch();
}