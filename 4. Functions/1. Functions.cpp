/*
 / FUNCTION
 Functions are used to perform certain actions, and they are important for reusing code: Define the code once, and use it 
 many times.
 
 / Create a Function

. A C++ function consist of two parts:

.1) Declaration: the function's name, return type, and parameters (if any)
.2) Definition: the body of the function (code to be executed)

To create (often referred to as declare) a function, specify the name of the function, followed by parentheses ():

type function_name()
{
    //code to be executed
}

Here type is the datatype of the function and also the return type 

. Define a function

int number(p1,p2,p3){

    statements
    .
    .
    .
}

Where p1 p2 p3 are the parameters of the function on which the function will do some statements and return the required data

/ 

 : A function declaration tells the compiler about a function's name, return type, and parameters. 
 : A function definition provides the actual body of the function.
 
 */

#include <iostream>
using namespace std;

int sum(int num1, int num2)
{
    int c;
    c = num1 + num2;
    return c;
}

int main()
{
    int a, b;
    cout << "Enter 1st value "
         << "\n";
    cin >> a;
    cout << "Enter 2nd value "
         << "\n";
    cin >> b;
    cout << "Sum of numbers is: " << sum(a, b);
    return 0;
}

// > https://www.tutorialspoint.com/cplusplus/cpp_functions.htm