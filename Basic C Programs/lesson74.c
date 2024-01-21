//      Traversing 2 D array

#include<stdio.h>
int main()
{
    int numbers[2][2] = {{1,2},{3,4}} ;

    int row = 0 , col = 0 ;

    for(row=0; row<2 ; row++)
    {
        for(col=0; col<2; col++)
        {
            printf(" %d ",numbers[row][col]) ;
        }
        printf("\n");
    }
    return 0 ;
}