
#include <iostream>  // 1
using namespace std; // 2

int main() // 3
{
    int h;
    cout << "Hello world"; // 4
    cin >> h;              // 4
    return 0;              // 5
}
//---------------------------------------------------------------------------------------------------------------------------

/* 
/ 1) #include <iostream> 

It is a Preprocessor Directive.
As the name suggests Preprocessors are programs that process our source programs before it is passed to  
compiler or before compilation process.

Preprocessor commands are known as directives. Each of these preprocessor directives start with #(hash) symbol.
This preprocessor directive includes the file given within the angle brackets(<>) or inverted commas(" ").          
Here iostream file is included by the preprocessor. iostream file allows to perform standard input and output operations.
,Example of some preprocessor directives are: #include, #define, #ifndef etc. 
Remember that # symbol only provides a path that it will go to the preprocessor, and command such as include is  
processed by preprocessor program. 

.There are 4 main types of preprocessor directives:

.1) Macros
.2) File Inclusion
.3) Conditional Compilation
.4) Other directives

/ STREAM
stream refers to the stream of characters that are transferred between the program thread and i/o. 
Stream classes in C++ are used to input and output operations on files and io devices.

NOTE: To include the file sometimes we use greater and smaller than sign, and sometimes we use double inverted commas.
NOTE: The ‘<‘ and ‘>’ brackets tells the compiler to look for the file in standard directory(for default files/libraries).
NOTE: The " and " commas tells the compiler to look for the file in user defined directory(for user defined files/libraries).

> For the detail part go to https://www.geeksforgeeks.org/cc-preprocessors/
-----------------------------------------------------------------------------------------------------------------------------

/ 2) using namespace std;      

In c/c++ a name/variable can only represent one entity in a single scope. So, there cannot be two variables with the same name in the 
same scope. 
Using namespaces, we can create two variables or member functions having the same name.

Also it is used to specify the file/library which we are using from the included preprocessor file.
like std from iostream.
This helps to avoid write again and again the name of the file in the program.

namespace statement needs semi-colon at the end of the code.

For example: without using namespace we have to to use std with every cout command like this cout

Namespace is a feature added in C++ and not present in C.
Multiple namespace blocks with the same name are allowed. All declarations within those blocks are declared in the named scope.


> https://www.geeksforgeeks.org/namespace-in-c/?ref=lbp
-----------------------------------------------------------------------------------------------------------------------------

/ 3)  int main()

This line initiates the declaration of a function. 
A function is a group of code statements which are given a name: 
in this case, this gives the name "main" to the group of code statements that follow.
Their definition is introduced with a succession of a type (int), a name (main) and a pair of parentheses (()), 
optionally including parameters.
This particular function "int main()" will return an integer value.
Only those statements are going to execute which are in this main function. 
---------------------------------------------------------------------------------------------------------------------------

/ 4) cout << "Hello world!" << endl; 

This line is a c++ statement. Statements are executed in the same order that they appear within a function's body.

This statement has four parts: 

.1) cout 
   It identifies the standard character output device (usually, this is the computer screen). 

.2) << --> It is the insertion operator (<<), which indicates that what follows is inserted into cout.

The insertion operator << is the one we usually use for output, 
It gets its name from the idea of inserting data into the output stream.
.Example --> cout << "This is output" 

The extraction operator >> is the one we usually use for input, 
It gets its name from the idea of extracting data from the input stream. 
.Example --> cin >> X;

.3) A sentence within quotes ("Hello world!"), is the content inserted into the standard output.

.4) endl 
endl is a manipulator(Helping Fucntion), which is used to Terminate a line and flushes the buffer.
So endl is equal to \n and flush() functions. But while using endl we are compromising with the efficiency of the program.
As Flushing of buffers is an Operating System task. Each time the buffer is flushed, a request has to be made to the OS 
and these requests are comparatively expensive.


> https://www.geeksforgeeks.org/avoid-using-stdendl/
--------------------------------------------------------------------------------------------------------------------------

/ 5) return 0;

As mentioned earlier, the function main returns an integer value (int main()), therefore here we are returning 0.
return is a keyword which is used to return some value from a function. 
It indicates that our program has been run successfully and we terminate our main function with this return statement.
--------------------------------------------------------------------------------------------------------------------------

/ Some Key Points To Remember 

 Every C/C++ statement needs to end with a semicolon ; 
 It is used to tell the compiler that this particular line of code is ended here 
 But function defintion, preprocessor directives and some more things like this do not need semicolon.


*/
