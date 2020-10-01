/*
/ POINTER
A pointer is a variable whose value is the address of another variable. 
Pointers are used to store addresses rather than values. 

/ Use of Unary Operators 
: 1) &  ampersand sign use to Assigning the address of a variable to a pointer. 
: 2) *  asterisk sign use to access the value stored in the address which is assigned to the pointer.
--------------------------------------------------------------------------------------------------------------------------

/ Assigning Addresses to Pointers

Before assigning address of other variable to the pointer first we have to defined the pointer

.Defining a pointer 
Defining a pointer is similar to defining any other variable.
The only difference is in the datatype. While defining the datatype of pointers we just have to use the " * " sign.

.Assigning address to Pointer
"&" is use to assign the address of a variable to a pointer.

--------------------------------------------------------------------------------------------------------------------------


/// Reference: Get the memory address of the varible Pointing by the pointer.

/// Dereference: Get the value of the variable to which the pointer is pointing.

NOTE: that the * sign can be confusing here, as it does two different things in our code:

: When used in declaration (int* ptr), it creates a pointer variable.
: When not used in declaration, it act as a dereference operator.
--------------------------------------------------------------------------------------------------------------------------
*/
//Example :

#include <iostream>
using namespace std;

int main()
{
    int myvariable = 9;
    int *mypointer;          // Declaring Pointer (Use of "*" after datatype.)
    mypointer = &myvariable; // Assigning Value (use of "&" before identifier)
    int &hello = myvariable;

    cout << &hello << "\n";
    cout << mypointer << endl; // Accessing the address pointed by the pointer.
    cout << &mypointer << endl;
    cout << *mypointer; // Access the value pointed by a pointer (use of "*" before identifier)
    return 0;
}

// > https://www.tutorialspoint.com/cplusplus/cpp_pointers.htm
// > https://www.programiz.com/cpp-programming/pointers
