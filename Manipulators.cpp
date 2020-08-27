
/*
/ MANIPULATORS

Manipulators are helping functions that can modify the input/output stream. 
It does not mean that we change the value of a variable, it only modifies the I/O stream using insertion (<<) 
and extraction (>>) operators.

.Example --> if we want to print the hexadecimal value of 100 then we can print it as:     cout<<setbase(16)<<100;

--------------------------------------------------------------------------------------------------------------------------

/ TYPES OF MANIPULATORS

.1)Manipulators without arguments: 
The most important manipulators defined by the IOStream library are provided below.
(a)endl         (b)ws              (c)flush              (d)ends.

.2)Manipulators with Arguments:
Some of the manipulators are used with the argument. These all are defined in the header file.
If we want to use these manipulators then we must include this header file in our program.
(a)setw         (b)setfill         (c)setbase            (d)setprecision             (e)setiosflags        (f)resetiosflags
 
.Example --> If We want to set minimum width and fill the empty space with any character we want: 
.            std::cout << std::setw (6) << std::setfill (’*’);

*/

// > https://www.geeksforgeeks.org/manipulators-in-c-with-examples/