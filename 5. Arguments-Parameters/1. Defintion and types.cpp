/*
/ DIFFERENCE B/W ARGUMENTS & PARAMETERS

The terms parameter And argument arguments can be used for the same thing i.e, information that are passed into a function....
But there is major difference among them

From a function's perspective:

.PARAMETER --> A parameter is the variable defined during a function declaration or definition.
                    
.ARGUMENT  --> An argument is the value of the parameter/variable that are sent/given to the function when it is called. 
--------------------------------------------------------------------------------------------------------------------------  

/ DIFFERENCE B/W ACTUAL & FORMAL PARAMETERS

. FORMAL PARAMETERS 
A formal parameter is a parameter which is in the function definition.
They are simply called parameters.

. ACTUAL PARAMETERS 
An actual parameter is a parameter which is in the function call.
They are simply called arguments.                         
 
NOTE: From all the above discussion we can say that  
Parameters = Formal Arguments
Arguments = Actual Arguments
--------------------------------------------------------------------------------------------------------------------------  

/ Default arguments
A default argument is a value provided in a function declaration that is automatically assigned by the compiler
if the user of the function doesn’t provide any value.

Note: But condition is that default arguments should be at the last position in the function defintion as in the below example.

> int sum(int a, int b, int c=5);   RIGHT 
> int sum(int a, int b=5, int c);   WRONG
> int sum(int a=5, int b, int c);   WRONG


-Default arguments can also be overwrite.

int sum(int a, int b, int c=5);   /// Function definition 
sum(3,4,6)                        /// Function call
--------------------------------------------------------------------------------------------------------------------------  

/ Constant Arguments
Those arguments whose values can't be changed once assigned are known as constant arguments 

"const" keyword is use to make any argument a constant argument.

> int sum(const int a=5, int b, int c);    
--------------------------------------------------------------------------------------------------------------------------  


/ Default VS Constant Arguments  
In nutshell constant arguments can’t be changed whereas default arguments can be overwritten if required.
--------------------------------------------------------------------------------------------------------------------------  
*/

// > https://www.geeksforgeeks.org/difference-between-argument-and-parameter-in-c-c-with-examples/