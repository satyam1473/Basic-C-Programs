/*          Functions in C

A function is a reusable block of code with name , meant to perform a specific task
whenever we want to perform a specific task , we create a function in C

e.g     add , subtract ,  sort , search , etc

Note :  To perform a specific task , first we must declare and define a function for it

-----------------------------------------------------------------------------------------------

Syntax for decalring a function is 

    return_type functionName ([datatype param1, datatype param2, ... , datatype paramN]) ;

    e.g     void wishHi() ; // prototype of wishHi function 

    NOTE :

    -Declaration of function is also called a prototype function 
    -prototype of a function tells to the compiler what is the name of the function 
    what is the return type of function , how many parameters a function accept , and data
    type of each parameter

-----------------------------------------------------------------------------------------------

Syntax for defining a function is     

    - defining a function means implementing a function , i.e. adding body to the function

    return_type functionName ([datatype param1, datatype param2, . . . , datatype paramN]) 
    {
        statement(s) to be executed ;

        [return returning value ;]
    }


e.g             // definition wishHi function

        void wishHi()
        {
            printf("Hi\n") ;
        }

NOTE-       a function gets executed only when it is called 

-------------------------------------------------------------------------------------------------------

Syntax for calling a function is 

    functionName([param1, param2, ... , paranN ]) ;

    e.g 
            wishHi() ;  // calling wishHi function

NOTE - if it is required ; we can call and execute a function  'n'  number of times 

*/

#include<stdio.h>

void wishHI() ;

int main()
{
    wishHI();
    wishHI();
    wishHI();

    return 0;
}

void wishHI()
{
    printf("HI\n");
}

/*  why functions

    - manageability (i.e. to divide larger problems into smaller tasks or modules)
    - reusability (i.e. once a function is defined , it can be used multiple times)
    - abstraction (i.e. hiding the way how tasks are done ) ( creating libraries )

    etc. */