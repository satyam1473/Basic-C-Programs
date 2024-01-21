// passing 2D array to functions using    ( array notation  [] )

//  Note -  writing no. of rows # is optional 


#include<stdio.h>

// Method decleration:
void displayIarray(int array[][2], int rows, int cols);

// Method defination: 
void displayIarray( int array[][2] , int rows , int cols) 
{
    int i = 0 ;
    int j = 0 ;

    for (i=0 ; i<rows ; i++)
    {
        for(j=0 ; j<cols ; j++)
        {
            printf("%d  ", array[i][j] ) ;
    
        }

        printf("\n\n") ;
    }
}


// The executable function:
int main()
{
            int a [] [2] = {{1,2},{3,4}} ;

            displayIarray ( a , 2 , 2) ;

            return 0 ;
}


