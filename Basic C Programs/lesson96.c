//                  Pointer  to  2D array 

#include<stdio.h>
int main()
{
    int numbers[2][2] = {{1,2},{3,4}} ;

    // Declaring & initilizing pointers  to a 2D array
    //  data_type(*pointerName)[cols] = arrayName ;
     
        int (*ptr)[2] = numbers ;

    //  Accessing array elements using ArrayName and its rindex & cindex
    //  1. Subscript Notation  : arrayName [rindex] [cindex]            e.g  numbers[0][0]
    //  2. Pointer Notation    : *((arrayName + rindex) + cindex)       e.g  *(*(numbers + 0) + 0)

    printf("%d\n", numbers[0][0]) ;
    printf("%d\n", numbers[0][1]) ;
    printf("%d\n", numbers[1][0]) ;
    printf("%d\n", numbers[1][1]) ;

    printf("\n\n") ;

    printf("%d\n", *(*(numbers + 0) + 0)) ;
    printf("%d\n", *(*(numbers + 0) + 1)) ;
    printf("%d\n", *(*(numbers + 1) + 0)) ;
    printf("%d\n", *(*(numbers + 1) + 1)) ;

    printf("\n\n") ;

    //  Accessing array elements using Pointer Name and its rindex & cindex
    //  1. Subscript Notation  : pointerName [rindex] [cindex]            e.g  ptr[0][0]
    //  2. Pointer Notation    : *((pointerName + rindex) + cindex)       e.g  *(*(ptr + 0) + 0)

    printf("%d\n", ptr[0][0]) ;
    printf("%d\n", ptr[0][1]) ;
    printf("%d\n", ptr[1][0]) ;
    printf("%d\n", ptr[1][1]) ;

    printf("\n\n") ;

    printf("%d\n", *(*(ptr + 0) + 0)) ;
    printf("%d\n", *(*(ptr + 0) + 1)) ;
    printf("%d\n", *(*(ptr + 1) + 0)) ;
    printf("%d\n", *(*(ptr + 1) + 1)) ;
    return 0 ;
}