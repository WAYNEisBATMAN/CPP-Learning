/*

- The difference between normal functions and inline functions is the difference in compilation process for them.

/ Normal Function Working
After writing any program, it is first compiled to get an executable code. 
Which is then executed, the OS loads the instructions into the computer's memory, so that each instruction is stored in a 
specific memory location. 

When a function call instruction is encountered, the compiler stores the memory address of the instruction immediately following 
the function call statement, loads the function being called into the memory, copies argument values, jumps to the memory 
location of the called function, executes the function code, stores the return value of the function, and then jumps back 
to the address of the instruction that was saved just before executing the called function.

/ Inline Function Working
The C++ inline function provides an alternative. With inline code, the compiler replaces the function call statement with 
the function code itself (this process is called expansion) and then compiles the entire code. 
Thus, with this the compiler doesn't have to do the long, time consuming process.
The inline functions are a C++ enhancement designed to speed up programs.

. Main Advantage of Inline Functions : 
They save on overheads of a function call as it's not invoked, rather its code is replaced in the program.

. Main Disadvantage of Inline Functions : 
With more function calls (for ex: in a loop), the repeated occurrences of same function code wastes memory space.

: Inlining is only a request to complier, not a command. Compiler can ignore the request under some circumstances like, 
: if a function is recursive, contains a loop, has static variables etc.
--------------------------------------------------------------------------------------------------------------------------

/ Inline Function Syntax

Just write the inline keyword before the function name 

.  inline int sum()

*/

inline int product(int a, int b) /// Creating a normal function to inline function.
{
    return a * b;
}

#include <iostream>
using namespace std;

int main()
{
    int a = 5, b = 6;

    cout << "The product of 5 and 6 is: " << product(a, b) << "\n";
    cout << "The product of 5 and 6 is: " << product(a, b) << "\n";
    cout << "The product of 5 and 6 is: " << product(a, b) << "\n";
    cout << "The product of 5 and 6 is: " << product(a, b) << "\n";
    cout << "The product of 5 and 6 is: " << product(a, b) << "\n";
    cout << "The product of 5 and 6 is: " << product(a, b) << "\n";
    cout << "The product of 5 and 6 is: " << product(a, b) << "\n";
    cout << "The product of 5 and 6 is: " << product(a, b) << "\n";
    cout << "The product of 5 and 6 is: " << product(a, b) << "\n";
    cout << "The product of 5 and 6 is: " << product(a, b) << "\n";
    cout << "The product of 5 and 6 is: " << product(a, b) << "\n";
    cout << "The product of 5 and 6 is: " << product(a, b) << "\n";
    cout << "The product of 5 and 6 is: " << product(a, b) << "\n";
    cout << "The product of 5 and 6 is: " << product(a, b) << "\n";

    return 0;
}

// > https://www.geeksforgeeks.org/inline-functions-cpp/
// > https://www.quora.com/What-is-the-difference-between-normal-function-and-inline-function-in-c++-language