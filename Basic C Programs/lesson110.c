/*        Passing 1D array to function in C language
 
    1. Array Notation

            return_type functionName  ( data type  parameterName [] ) ;

    e.g     void display ( int arr []  ,  int array size ) ;


    2. Pointer Notation

            return_type functionName ( dataType * parameterName )      ;

    e.g     void display ( int * arr ,  int array size ) ;

    NOTE 

    while passing an array to a function ; it also recomend to pass its size            */                


    #include<stdio.h>

    void displayIarray ( int array[]  , int arraySize ) ;

    int main()
    {
        int array1 [] = {1,2,3,4,5} ;

        displayIarray ( array1 , 5) ;

        return 0 ; 
    }

    void displayIarray ( int array [] , int arraySize )
    {
        int i = 0 ;
        for (i=0 ; i<arraySize ; i++)
        {
                printf("%d\n", array[i] ) ;
        }
    }