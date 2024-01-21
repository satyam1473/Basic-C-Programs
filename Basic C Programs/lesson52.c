// while loop 
// - computer executes body of while loop as long as the given conditional expression
//   evaluates to true , if the conditional expression evaluates to false it terminates
//   loop

// - when we don't know exactly how many times the body of loop is to be executed
//   we use while loop

//  syntax
//  
//                initialization ;
//                while (conditional expression)
//                {
//                      statement(s) ;
//                      increment / decrememt 
//                }

//  program to display hello world 5 times

#include<stdio.h>
int main()
{
    int counter = 0;

    while(counter<5)
    {
        printf("\n Hello world");
        counter++;
    }
return 0;
}