//      Read store and Print 2 D array

#include<stdio.h>
int main()
{
    int numbers[2][2] ;
    int row = 0 , col = 0 ;

    printf("Enter integers for 2D array[2][2] \n") ;

    for(row=0; row<2 ;row++)
    {
        for(col=0; col<2 ; col++)
        {
            scanf("%d", &numbers[row][col]) ;
            
        }
    }

    printf(" integers of 2D array[2][2] \n") ;

    for(row=0; row<2 ;row++)
    {
        for(col=0; col<2 ; col++)
        {
            printf("%d ", numbers[row][col]) ;
           
        }
        printf("\n") ;
    }
return 0;

}