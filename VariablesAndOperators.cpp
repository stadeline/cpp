// #include <iostream.h> - Turbo C++ Uses This.
#include <iostream>
#include <conio.h>
#include <cmath>
// Not needed in Turbo C++.
using namespace std;
// 
int main()
{
    int inptNum1, inputNum2, outSum,outDifference,outProduct,outQuotient,outRemainder;
    // 
    int outPowerOf;
    // clrscr(); - Non-standard c++ function.
    cout<<"What's the first number? ";
    cin>>inptNum1;
    cout<<"What's the second number? ";
    cin>>inputNum2;

    // Calculate Values
    outSum = inptNum1 + inputNum2;
    outDifference = inptNum1 + inputNum2;
    outProduct = inptNum1 * inputNum2;
    outQuotient = inptNum1 / inputNum2;
    outRemainder = inptNum1 % inputNum2;
    // 
    outPowerOf = pow(inptNum1, inputNum2);

    // Display Everything
    cout<<"\n The sum of the first two numbers is "<<outSum;
    cout<<"\n The difference between the first two numbers is "<<outDifference;
    cout<<"\n The product of the first two numbers is "<<outProduct;
    cout<<"\n The quotient of the first two numbers is "<<outQuotient<<" and the remainder is "<<outRemainder;
    // 
    cout<<"\n "<<inptNum1<<" to the power of "<<inputNum2<<" is "<<outPowerOf;

    // Pause - Not needed in VSCode. =)
    getch();
}