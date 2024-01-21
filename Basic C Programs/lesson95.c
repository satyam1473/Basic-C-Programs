//          Pointer to 1D array



#include<stdio.h>
int main()
{
    int numbers[5]= {1,2,3,4,5} ;

    int *ptr = &numbers[0] ;


    // Accessing array elements using ArrayName and its index
    
    //  1. Subscript Notation : array name [index]          e.g  numbers[0]
    //  2. Pointer Notation   : *(array name + index )      e.g  *(numbers + 0)

    printf("%d\n", numbers[0] );
    printf("%d\n", numbers[1]);
    printf("%d\n", numbers[2]);
    printf("%d\n", numbers[3]);
    printf("%d\n", numbers[4]);
    printf("\n\n");

    printf("%d\n", *(numbers));
    printf("%d\n", *(numbers + 1));
    printf("%d\n", *(numbers + 2));
    printf("%d\n", *(numbers + 3));
    printf("%d\n", *(numbers + 4));
    printf("\n\n");

    //  Accessing array elements using Pointer name and element index
    //  1. Subscript Notation  : pointerName [index]            e.g  ptr[0]
    //  2. Pointer notation    : *(pointerName + index)         e.g  *(ptr + 0) 

    printf("%d\n", ptr[0] );
    printf("%d\n", ptr[1]);
    printf("%d\n", ptr[2]);
    printf("%d\n", ptr[3]);
    printf("%d\n", ptr[4]);
    printf("\n\n");

    printf("%d\n", *(ptr + 0));
    printf("%d\n", *(ptr + 1));
    printf("%d\n", *(ptr + 2));
    printf("%d\n", *(ptr + 3));
    printf("%d\n", *(ptr + 4));
    printf("\n\n");

    return 0 ;
}