// Dependent Quadratic Loops in C

// dependent quadratic loops is a nested loop where inner loop iteration depends upon
// the outer loop cxounterr variable value

#include<stdio.h>
int main()
{
    int i=0;
    int j=0;
 
    for(i=1; i<6 ; i++)             // used (i = 1) to avoid first blank line 
    {
        for(j=0; j<i ; j++)
        {
            printf("%d\t", i);      // printing     i

        }

            printf("\n") ;
    }

    printf("\n") ;

    for(i=1; i<6 ; i++)             // used (i = 1) to avoid first blank line 
    {
        for(j=0; j<i ; j++)
        {
            printf("%d\t", j);          // printing     j

        }

            printf("\n") ;
    }

    return 0;
}

//  if outer loop counter variable value is 0 then inner loop statement are executed 0 times
//                                          1                                        1
//                                          2                                        2
//                                          3                                        3
// . . . and so on 
//                                          n                                        n


//    NOTE - dependent quadratic loops can be used to generate various patterns of numbers and stars