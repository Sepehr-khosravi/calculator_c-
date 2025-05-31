Simple C++ Calculator

This is a simple command-line calculator written in C++. It supports basic arithmetic operations such as:

Addition (+)

Subtraction (-) (not implemented in main function yet)

Multiplication (*)

Division (/)

Power (**)

Square root (//) (only uses the first number)

Features

Takes user input for an operation and two numbers

Executes the chosen operation using custom functions

Displays the result of the operation

Uses standard C++ libraries like <iostream> and <cmath>

Works entirely in the terminal (console)

How to Compile

To compile the calculator using g++, run the following command in your terminal:

bash

Copy

Edit

g++ -o calculator calculator.cpp

calculator.cpp is the name of your source file.

-o calculator means the output (compiled file) will be named calculator.

How to Run

After compiling, you can run the program like this:

bash

Copy

Edit

./calculator

Example

sql

Copy

Edit

Enter the opration you want :

+

now you can enter your the first number :

4

right now you can enter the second number :

6

your result opration : 10

Notes

The square root (//) operation only uses the first number.

If an unsupported operation is entered, the program will return an error.

Input handling is minimal, so the user must enter valid integers and valid operations.