/*
/ RECURSION
The process in which a function calls itself directly or indirectly is called recursion and the corresponding function 
is called as recursive function. 

/ BASE CONDITION
There must be at least one base condition, such that, when this condition is met the function stops calling itself recursively.

/ Direct and Indirect Recursion
.1) A function is called direct recursive if it calls itself directly. 
.2) A function is called indirect recursive if it calls another function and that function calls the original function
directly or indirectly.

/ Tailed and Non-Tailed Recursion
.1) Tail recursive method has the recursive call as the last statement in the method.
.2) Recursive methods that are not tail recursive are called non-tail recursive


/ RECURSION vs ITERATION(Loops)

The main difference between recursion and iteration is memory usage.

For every recursive call needs space on the stack frame resulting in memory overhead.

Imagine in one case we forgot to write the base case for your recursive function resulting in endless recursive calls 
and in other case we wrote an infinite loop.

Since every recursive function assigns new memory space, in first case your code will give a stack overflow exception but 
in second case it will keep running forever.

So it is better to make our iterative code more understandable than using Recursion
--------------------------------------------------------------------------------------------------------------------------
*/

//- Program for Factorial by recursion

#include <iostream>
using namespace std;

int factorial(int n)
{
    if (n <= 1)
    {
        return 1;
    }

    return n * factorial(n - 1);
}

int main()
{
    int a;
    cout << "Enter the number for its factorial: "
         << "\n";
    cin >> a;

    cout << "The factorial of " << a << " is: " << factorial(a);
    return 0;
}

// > https://www.geeksforgeeks.org/recursion/
// > https://www.programiz.com/cpp-programming/recursion