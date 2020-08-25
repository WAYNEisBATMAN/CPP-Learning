
#include <iostream> // 1

using namespace std; // 2

int main() // 3
{
    int x = 5;
    cout << x << endl;
    int x = 5;
    cout << x << endl;
    cout << "Hello world!" << endl; // 4
    cout << "Hello world!";
    return 0; // 5
}

//---------------------------------------------------------------------------------------------------------------------------

/*
/ 1) #include <iostream> 

It is a Preprocessor Directive.
As the name suggests Preprocessors are programs that process our source programs before it is passed to  
compiler or before compilation process.

Preprocessor commands are known as directives. Each of these preprocessor directives start with #(hash) symbol.
                         
Examples of some preprocessor directives are: #include, #define, #ifndef etc. 
Remember that # symbol only provides a path that it will go to the preprocessor, and command such as include is  
processed by preprocessor program. 
There are 4 main types of preprocessor directives:
1) Macros
2) File Inclusion
3) Conditional Compilation
4) Other directives

! For the detail part go to https://www.geeksforgeeks.org/cc-preprocessors/

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

As we can see here that namespace
! https://www.geeksforgeeks.org/namespace-in-c/?ref=lbp
-----------------------------------------------------------------------------------------------------------------------------

/ 3)  int main();










*/
