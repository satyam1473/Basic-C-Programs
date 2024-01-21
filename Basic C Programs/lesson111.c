//          Passing 1 D array to function using pointer notation 

#include<stdio.h>

void displayIarray ( int * array , int array_size ) ;

int main()
{
    int array1 [] = {5,4,3,2,1} ; 

    displayIarray (array1 , 5) ;

    return 0 ;
}

void displayIarray ( int * array , int array_size ) 
{
    int i = 0 ;

    for( i= 0 ; i<array_size ; i++ ) 
    {
        printf("%d\n", *(array + i) ) ;
    }
}