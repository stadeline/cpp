#include <iostream.h>
#include <conio.h>
#include <string.h>

main()
{
	// Clear the screen
	clrscr();

	// Define inputs
	int n1, n2, n3, n4, n5;

	// Outputs
	int sum, diff, product, quotient, mod;

	// Enter numbers
	cout << "\n Enter the first number: ";
	cin >> n1;
	cout << "\n Enter the second number: ";
	cin >> n2;
	cout << "\n Enter the third number: ";
	cin >> n3;
	cout << "\n Enter the fourth number: ";
	cin >> n4;
	cout << "\n Enter the last number: ";
	cin >> n5;

	// Manipulate them
	sum = n1 + n2 + n3 + n4 + n5;
	cout << "\n The sum of all the numbers entered is: " << sum;
	diff = n1 - n3 - n5;
	cout << "\n The difference of all the first, third and last number entered is: " << diff;
	product = sum * diff;
	cout << "\n The product of the sum and the difference is: " << product;
	quotient = sum / diff;
	cout << "\n The quotient of the sum and the difference is: " << quotient;
	mod = sum % diff;
	cout << "\n The remainder of the quotient of the sum and the difference is: " << mod;

	// Pause
	getch();
}
