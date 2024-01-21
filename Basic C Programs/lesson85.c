/*
            Structure    V/s      Union

    - all things are same 
        
        declaration 
        initializing
        printing
        accessing

    - except memory allocation

        computer allocates seperate memory location for each member of a structure variable ; whereas
        in union it allocates memory location only for the latgest member of union variable and allocated
        memory allocation is being shared by all the members of the union variable

        To get desired results ; while working with unions; you must work with only one member at a time

        */

#include<stdio.h>
int main()
{
    union Date
    {
        int day ;
        int month ;
        int year;
    };

    union Date date1 ;

    date1.day = 01 ;
    printf("date 1 day = %d\n",date1.day) ;

    date1.month = 03 ;
    printf("date 1 month = %d\n",date1.month) ;

    date1.year = 2035 ;
    printf("date 1 year = %d\n",date1.year) ;


    union Date date2 ;

    
    date2.day = 05 ;
    printf("date 2 day = %d\n",date2.day) ;

    date2.month = 07 ;
    printf("date 2 month = %d\n",date2.month) ;

    date2.year = 3031 ;
    printf("date 2 year = %d\n",date2.year) ;


    return 0;   // union is used when there is lack of memory space
}

