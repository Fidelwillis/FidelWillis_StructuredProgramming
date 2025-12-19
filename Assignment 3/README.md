1. DIFFERENCE BETWEEN A NORMAL AND A VARIABLE POINTER

A normal variable stores actual value in memory; in that when we use variable name we are directly accessing that value.
A pointer on the other hand stores the memory adress of another variable. Values are read and modified by accessing memory address it points to.

2.VARIABLE DECLARATION VS POINTER DECLARATION AND DEFINATION.
Declaring a normal variable means specifying it's name and type; defining it simply means assigning a value to it.
        int x;
        x=10;
Declaring a pointer also specifies it's type, but the type refers to the data it will point to.
        int *p;
        p=&x;
  the & operator is used to get adress of variable
  the * is used to declare the pointer.

3.DEFERENCING A POINTER.
It simply means accessing the value stored at the memory address a pointer is pointing to. And is done using (*).
    int x = 5;
int *p = &x;

printf("%d", *p);
*p = 20; 

4.WHEN POINTERS ARE PREFFERED OVER NORMAL VARIABLES
Pointers are preffered when working with large data structures.
EG 1: Arrays are passed using pointers so that the function can access and modify the original array
eg 2: pointers are used when memory is allocated at runtime;(malloc)

5.LIMITATIONS AND RISKS OF USING POINTERS.
if not used properly they can point to invalid memory causing crashes. compared to normal variables pointers require more care to avoid memory leaks.

6.CALLING BY VALUE VS BY REFERENCE
In call by value, a copy of the variable is passed to the function.
eg: void change(int x) {
    x = 10;
}

in call by reference, the address of the variable is passed using a pointer.
eg: void change(int *x) {
    *x = 10;
}

7.PRACTICAL SCENARIOS.
Call by value is preffered when we don't want the function to modify the original data; when working with simple calculations.
call by reference is preffered when we need to modify the original value, or avoid copying large data structures.
