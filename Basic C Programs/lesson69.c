//                      1-D Array
/*
        syntax -  data_type array_name [size]  ;

                    int numbers[5]

        IMPLICIT POINTERS
        
        rray_name returns adress of the first element in the array i.e.  &nubbers[0] == numbers

        & array_name returns beginning address of the whole array 
*/

#include<stdio.h>
int main()
{
    int numbers [5] = {1,2,3,4,5} ;

    printf("%d \n", numbers) ;
    printf("%d \n", &numbers[0]) ;
    printf("%d \n", &numbers) ;

    numbers[4] = 30 ;
    printf("%d \n", numbers[4] );

    return 0 ;
}
