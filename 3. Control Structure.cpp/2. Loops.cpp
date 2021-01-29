/*
/ LOOPS
When a piece of code is to be execute repeatedly then we use loops to avoid writing the same code again and again. 

/ There are mainly two types of loops:

.A)Entry Controlled loops: 
In this type of loops the test condition is tested before entering the loop body. 
For Loop and While Loop are entry controlled loops.

.1) for loop
First initialize this loop variable to some value, then check whether this variable is less than or greater than counter value.
If statement is true, then loop body is executed and loop variable gets updated . 
Steps are repeated till exit condition comes.

Syntax:
for (initialization ; test/condition ; update )
{    
     // body of the loop
     // statements we want to execute
}

NOTE: for loops are used in situations where we already know the exact number of iterations of loop beforehand.

.2) while loop
The while loop loops through a block of code as long as a specified condition is true:

Syntax:
initialization_expression;
while (test_expression)
{
   // statements
 
  update_expression;
}

:Another interesting way to write a while loop
while(n--)
{
   //statments
}
This will go until becomes 0 and 0 means false so loop will stop at 0.
first iteration value of n will be n after that it will decrement by 1 in each step as it is an post increment.

NOTE: while loops are used in situations where we do not know the exact number of iterations of loop beforehand.

.B)Exit Controlled Loops: 
In this type of loops the test condition is tested or evaluated at the end of loop body. 
Therefore, the loop body will execute atleast once, irrespective of whether the test condition is true or false. 
do – while loop is exit controlled loop.

.1) do while
In do while loops also the loop execution is terminated on the basis of test condition. 
The main difference between do while loop and while loop is in do while loop the condition is tested at the end of loop body.

Syntax:
initialization_expression;
do
{
   // statements

   update_expression;
} while (test_expression);
---------------------------------------------------------------------------------------------------------------------------

/ Jump Statements in C/C++
These statements are used in C or C++ for unconditional flow of control through out the funtions in a program. 
They support four type of jump statements:

.1) break statement
Terminates the loop or switch statement and transfers execution to the statement immediately following the loop or switch.
Syntax:  
break;

#include<stdio.h>

void main()
{
   int a=0;
   while(a<6)
{
   a++;
   if(a==5)
   break;
   printf("\nStatement %d.",a);
}
   printf("\nEnd of Program.");
}

Output :

Statement 1.
Statement 2.
Statemnet 3.
Statement 4.
End of Program.

.2) continue statement
Causes the loop to skip the current iteration and execute the rest of the iterations.
Syntax:  
continue;


#include<stdio.h>

void main()
{
   int a=0;
   while(a<6)
{
   a++;
   if(a==5)
   continue;
   printf("\nStatement %d.",a);
}
   printf("\nEnd of Program.");
}

Output :

Statement 1.
Statement 2.
Statemnet 3.
Statement 4.
Statement 6.
End of Program.

.3) goto statement
Transfers control to the labeled statement. Though it is not advised to use goto statement in your program.
Syntax:  
goto label;
..
.
label: statement;

Where label is an identifier that identifies a labeled statement. 
A labeled statement is any statement that is preceded by an identifier followed by a colon (:).



NOTE: One good use of goto is to exit from a deeply nested routine. 
NOTE: A simple break statement would not work here, because it would only cause the program to exit from the innermost loop.
--------------------------------------------------------------------------------------------------------------------------
*/