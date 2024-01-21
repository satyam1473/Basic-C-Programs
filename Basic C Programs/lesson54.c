//  do while loop  - exit control loop

//  computer executes body of the do whileloop at least once and then it 
//  repeatedly executes the body of the do while loop as long as given condition
//  expression as giben condition expression evaluates to true

/*  syntax

initialization ;
do 
{
    statement(s) ;
    increment / decrement ;
}

while (conditional expression) 

*/

// program to display hello world 5 times 

#include<stdio.h>
int main()
{
    int i=0 ;
    do
    {
            printf("Hello World \n");
            i++ ;
    }
    while(i<5) ;
    return 0 ;
}