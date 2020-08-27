
#include <iostream>  // 1
using namespace std; // 2

int main() // 3
{

    cout << "Hello world!" << endl; // 4

    return 0; // 5
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
Examples of some preprocessor directives are: #include, #define, #ifndef etc. 
Remember that # symbol only provides a path that it will go to the preprocessor, and command such as include is  
processed by preprocessor program. 
There are 4 main types of preprocessor directives:
1) Macros
2) File Inclusion
3) Conditional Compilation
4) Other directives

> For the detail part go to https://www.geeksforgeeks.org/cc-preprocessors/

NOTE: To include the file sometimes we use greater and smaller than sign, and sometimes we use double inverted commas.
NOTE: The ‘<‘ and ‘>’ brackets tells the compiler to look for the file in standard directory(for default files/libraries).
NOTE: The " and " commas tells the compiler to look for the file in user defined directory(for user defined files/libraries).
-----------------------------------------------------------------------------------------------------------------------------

/ 2) using namespace std;      

In c/c++ a name/variable can only represent one entity in a single scope. So, there cannot be two variables with the same name in the 
same scope. 
Using namespaces, we can create two variables or member functions having the same name.

Also it is used to specify the file/library which we are using from the included preprocessor file.
like std from iostream.
This helps to avoid write again and again the name of the file in the program.

As we can see here that namespace needs semi-colon at the end of the code.

For example: without using namespace we have to to use std with every cout command like this cout

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

1) cout, 
   It identifies the standard character output device (usually, this is the computer screen). 

2) << --> It is the insertion operator (<<), which indicates that what follows is inserted into cout. 

3) A sentence within quotes ("Hello world!"), is the content inserted into the standard output.

4) endl -->
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





to check 
*/
