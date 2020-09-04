/*
/ TOKENS
A token is the smallest element of a program that is meaningful to the compiler.

. Tokens can be classified as follows:

.1) Identifiers
.(a) Keywords 
.(b) Variables
.(c) Constants

.2) Strings
.3) Special Symbols
.4) Operators
                  
*/
//------------------------------------------------------------------------------------------------------------------------

/*
/ 2) Strings
Anything enclosed in double quotes is called as strings.
Strings are nothing but an array of characters ended with a null character (‘\0’).
This null character indicates the end of the string. 
NOTE: In C and C++ the single quote is used to identify the single character, and double quotes are used for string literals. 
NOTE: A string literal “x” is a string, it is containing character ‘x’ and a null terminator ‘\0’. So “x” is two-character array 
NOTE: in this case.

*/
//------------------------------------------------------------------------------------------------------------------------

/*
/ 3) Special Symbols 
The following special symbols are used in C having some special meaning and thus, cannot be used for some other purpose.
> [] () {}, ; * = #

.(a) Brackets[]: Opening and closing brackets are used as array element reference. 
.                These indicate single and multidimensional subscripts.

.(b) Parentheses(): These special symbols are used to indicate function calls and function parameters.

.(c) Braces{}: These opening and ending curly braces marks the start and end of a block of code containing more than one 
.          executable statement.

.(d) comma (,): It is used to separate more than one statements like for separating parameters in function calls.

.(e) semi colon : It is an operator that essentially invokes something called an initialization list.

.(f) asterisk (*): It is used to create pointer variable.

.(g) assignment operator(=, +=, -=, *=, /=): It is used to assign values.

.(h) pre processor(#): The preprocessor is a macro processor that is used automatically by the compiler to transform your 
.                      program before actual compilation.

*/
//------------------------------------------------------------------------------------------------------------------------

// > https://www.tutorialspoint.com/c-cplusplus-tokens

// > https://www.geeksforgeeks.org/cc-tokens/