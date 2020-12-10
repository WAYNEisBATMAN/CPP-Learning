/*
/ 1) Identifiers
Identifiers are just names given to different entities such as variables, structures, arrays, and functions.
These are user defined names consisting of arbitrarily long sequence of letters and digits with either a letter or the 
underscore(_) as a first character.

. Rules That Should Be Followed While Naming C Identifiers:
1. They must begin with a letter or underscore(_).
2. They must consist of only letters, digits, or underscore. No other special character is allowed.
3. It should not be a keyword.
4. It must not contain white space.
5. It should be up to 31 characters long as only first 31 characters are significant.

/ Types Of Identifiers

.(a) Keywords 
.(b) Variables
.(c) Constants 

*/
//------------------------------------------------------------------------------------------------------------------------

/*
/ 1(a) Keywords
Keywords are pre-defined or reserved identifiers in a programming language. 
Each keyword is meant to perform a specific function in a program. 
Since keywords are referred names for a compiler, they can’t be used as variable names because by doing so, we are trying 
to assign a new meaning to the keyword which is not allowed. We cannot redefine keywords. 
However, we can specify text to be substituted for keywords before compilation by using C/C++ preprocessor directives

NOTE:  C language supports 32 keywords, While in C++ there are 31 additional keywords other than C Keywords.
*/
//------------------------------------------------------------------------------------------------------------------------

/*
/ 1(b) Variables 
Referred to Variables.cpp file

*/
//------------------------------------------------------------------------------------------------------------------------

/*
/ 1(c) Constants
Constants are like a variable, except that their value never changes during execution once defined.
Also called as literals in many cases.

- 2 ways to define constants in C++. 

.1) By using "const" keyword

SYNTAX: const [data_type] [constant_name]=[value];

const int length 10;

.2) By using "#define" preprocessor

SYNTAX:  #define identifier value;

#define length 10;

/ LITERALS 

The values assigned to each constant variables are referred as the literals.
Generally both the terms literals and the constant can be used interchangebaly
At first in c there are no things as "constant".  "literals" are known as the constant 
but c++ is a different language in this we have both the constant and the literals 
the values we assigned to the constant varibales are the literals 


*/
// > https://www.tutorialspoint.com/c-cplusplus-tokens

// > https://www.geeksforgeeks.org/cc-tokens/

#include <iostream>
using namespace std;

