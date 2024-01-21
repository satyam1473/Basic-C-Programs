// passing 2D array to functions using    ( pointer * notation )

//  Note -  writing no. of rows # is optional 

//  **** while passing a 2D array to a function it is recomended to pass # no of rows & # no of columns present in it


#include<stdio.h>

void displayIarray( int (*array)[2] , int rows , int cols) ;

int main()
{
            int a [] [2] = {{1,2},{3,4}} ;

            displayIarray ( a , 2 , 2) ;

            return 0 ;
}


void displayIarray( int (*array)[2] , int rows , int cols) 
{
    int i = 0 ;
    int j = 0 ;

    for (i=0 ; i<rows ; i++) 
    {
        for(j=0 ; j<cols ; j++)
        {
            printf("%d  ", *(*(array + i) + j )) ;
    
        }

        printf("\n\n") ;
    }
}