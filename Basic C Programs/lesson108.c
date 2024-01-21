/*      Varaible scopi in C

Scope of a variable indicates the accessibility and availibility (i.e) lifetime of a variable .
A variable in C can can be in local scope or globla scope .

Local Scope 

- any variable declared inside a function is considered as it is in the local scope
- local scope variable cn be accessible only inside that function where it is declared 
- local scope variable will be available only during the function execution (it got deleted as soon as the control exits the function body)

Global Scope 

- any variable declared outside a function is considered as it is in the global scope
- global scope variable can be accessible anywhere inside the program 
- global scope variable wil be available throughout the program execution (it got deleted as soon as the program execution ends)



--- If we re-declare a global variable inside a local scope , then it creates another variable in the local scope


*/

#include<stdio.h>

void display() ;
void display1() ;

int c = 30 ; 

int main()
{
    int a = 10;
    printf("a = %d\n", a) ;
    printf("c = %d\n\n", c) ;

    display() ;
    display1() ;
    
    return 0 ;
}

void display()
{
    int b = 20 ;
    printf("b = %d\n", b) ; 
}

void display1()
{
    printf("c = %d\n", c) ; 
}

/*

                                        |                   |
                                        |                   |
                                        |                   |
                                        |                   |
                                        |                   |
                                        |___________________|
       display()                        |                   |
                                        |___________________|
                                        |                   |
               main()                   |___________________|
                                        

program uses stack for execution and returns value from top using LIFO principle        */                                        