/*
/ OVERLOADING
Overloading allows different methods to have the same name, but different signatures where the signature can 
differ by the number of input parameters or type of input parameters or both. 
Overloading is related to compile-time (or static) polymorphism.
Overloading is a concept used to avoid redundant code where the same method name is used multiple times but with
a different set of parameters.
(In computer programming, redundant code is source code or compiled code in a computer program that is 
unnecessary, such as: recomputing a value that has previously been calculated and is still available,)


*/
//--------------------------------------------------------------------------------------------------------------------------

/*
/ Function Overloading
Function overloading is a feature in C++ where two or more functions can have the same name but different parameters.
Function overloading can be considered as an example of polymorphism feature in C++.
The functions having the same name but different arguments are known as overloaded functions. 
In C++, two functions can have the same name if the number and/or type of arguments passed is different.

*/

#include <iostream>
using namespace std;

void print(int i)
{
    cout << " Here is int " << i << endl;
}
void print(double f)
{
    cout << " Here is float " << f << endl;
}
int print(int a, double b)
{
    cout << " Here is int " << a << endl;

    cout << " Here is float " << b << endl;
}

int main()
{
    print(10);
    print(10.1110);
    print(5, 4.1254);
    return 0;
}

/*
! As we can see in the above example all 3 functions(print) are overloaded functions.
! Notice that the return types of all these 3 functions(print) are not the same. 
! Overloaded functions may or may not have different return types but they must have different arguments.
*/
//-------------------------------------------------------------------------------------------------------------------------


/*
/ OPERATOR OVERLOADING






*/




//-------------------------------------------------------------------------------------------------------------------------

/*
/ OVERLOADING VS OVERRIDING

. Overloading: It is about same function have different signatures. 
.              Overloading is an example of compiler time polymorphism

. Overriding : It is about same function, same signature but different classes connected through inheritance.
.              Overriding is an example of run time polymorphism.


*/

// > https://www.tutorialspoint.com/cplusplus/cpp_overloading
// > https://www.geeksforgeeks.org/overloading-in-java/

