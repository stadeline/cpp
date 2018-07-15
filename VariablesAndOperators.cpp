#include <iostream.h>
#include <conio.h>
main()
{

	clrscr();

	// Declare a variable. Available are char, char string [anyInteger], int, float, double.
	char someVariable[1];

	// Display a string to the console
	cout << "\nEnter a string: ";

	// Pipe a variable from what a user inputs.
	// This can't take spaces :(
	cin >> someVariable;

	// Display a variable to the console.
	cout << "\nThe string typed was: " << someVariable;

	// Pause the console.
	getch();
}