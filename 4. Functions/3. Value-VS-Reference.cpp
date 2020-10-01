/*
/ The arguments of a function are always evaluated completely before the function is applied.
/ We have 3 types of parameter passing method.

.1) Pass by value (Call by value)
In this pass by value method, values of actual parameters are copied to function’s formal parameters. 
The two types of parameters are stored in different memory locations. 
Therefore, changes made to the parameter of the main function do not affect the argument.


.2) Pass by reference/Address (Call by reference)
Pass by reference method copies the address of an argument into the formal parameter. 
In this method, the memory allocation is the same as the actual parameters. 
All the operation in the function are performed on the value stored at the address of the actual parameter, and the 
modified value will be stored at the same address.


.3) Pass by pointers.






/ Reference variable VS Pointer 

.1) Pointer can be assigned NULL directly, whereas reference cannot.
.2) A pointer can be re-assigned while reference cannot, and must be assigned at initialization only.
.3) Pointers can iterate over an array, we can use ++ to go to the next item that a pointer is pointing to.
.4) A pointer is a variable that holds a memory address. A reference has the same memory address as the item it references.
.5) A pointer to a class/struct uses ‘->'(arrow operator) to access it’s members whereas a reference uses a ‘.'(dot operator)
.6) A pointer needs to be dereferenced with * to access the memory location it points to, whereas a reference can be used 
.   directly.
*/


// > https://www.geeksforgeeks.org/difference-between-call-by-value-and-call-by-reference/
// > https://www.guru99.com/call-by-value-vs-call-by-reference.html
// > https://www.geeksforgeeks.org/passing-by-pointer-vs-passing-by-reference-in-c/