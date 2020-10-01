/*
/ FUNCTION PROTOTYPES
The Function prototype serves the following purposes –

1) It tells the return type of the data that the function will return.
2) It tells the number of arguments passed to the function.
3) It tells the data types of the each of the passed arguments.
4) Also it tells the order in which the arguments are passed to the function.

By this information, the compiler cross-checks the function signatures before calling it. 
If the function prototypes are not mentioned, then the program may be compiled with some warnings, and sometimes generate 
some strange output.

Prototype of a function is also called signature of the function.

/ Need of Function prototype
If some function is called somewhere, but its body is not defined yet, that is defined after the current line, then it may
generate problems. 
The compiler does not find what is the function and what is its signature. 
In that case, we need to function prototypes. 
If the function is defined before then we do not need prototypes.


*/

#include <iostream>
using namespace std;

int sum(int num1, int num2);  /// Function Prototype

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

int sum(int num1, int num2)
{
    int c;
    c = num1 + num2;
    return c;
}

// > https://www.tutorialspoint.com/what-is-the-purpose-of-a-function-prototype-in-c-cplusplus
// > https://www.geeksforgeeks.org/what-is-the-purpose-of-a-function-prototype/