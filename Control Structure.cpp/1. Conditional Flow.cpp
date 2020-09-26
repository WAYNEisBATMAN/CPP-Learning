/*

/ (1) if else 
 SYNTAX:

if (condition)
{
    code 
}

else
{
     code 
}
----------------------------------------------------------------------------------------------------------------------------

/ (2)if else ladder                    
if (condition 1)
{
    code 
}

else if (condition 2)
{
    code 
}

else if (condition 3)
{
    code 
}

else
{
     code 
}
----------------------------------------------------------------------------------------------------------------------------

/ (3)switch case


switch (expression)
{
    case 1: // code to be executed ;
        break;  //optional
    case 2: // code to be executed ;
        break;  //optional
    case 2: // code to be executed ;
        break;  //optional    
    default: // (optional)code to be executed if n doesn't match any cases
}

>This is how it works:
.1) The switch expression is evaluated once
.2) The value of the expression is compared with the values of each case
.3) If there is a match, the associated block of code is executed


> Important Points about Switch Case Statements:
1) The expression provided in the switch should result in a constant value otherwise it would not be valid.

2) Duplicate case values are not allowed.

3) The default statement is optional.
   Even if the switch case statement do not have a default statement,
   it would run without any problem.

4) The break statement is used inside the switch to terminate a statement sequence.
   The break statement is optional. If omitted, execution will continue on into the next case. 
   The flow of control will fall through to subsequent cases until a break is reached.

5) Nesting of switch statements are allowed, which means you can have switch statements inside another switch. 
   However nested switch statements should be avoided as it makes program more complex and less readable.


*/

// > https://www.geeksforgeeks.org/switch-statement-cc/
// > https://www.w3schools.com/cpp/cpp_switch.asp