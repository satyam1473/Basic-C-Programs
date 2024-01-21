//              Nested Loops in C 

//      Nested For Loop - if we place one for loop inside another for loop

//   CASE 1 - nested for loops with same max values are called quadratic loops

#include<stdio.h>
int main()
{
    int i = 0 ;
    int j = 0 ;

    for(i=0 ; i<2 ; i++)
    {
        for(j=0 ; j<2 ; j++)                 //when i =0 inner loop executed two times 
                                            // and when i =1 inner loop executed two times
        {
        printf("Hello World\n") ;
        }                                 //  n * n
    }
        return 0 ;
}