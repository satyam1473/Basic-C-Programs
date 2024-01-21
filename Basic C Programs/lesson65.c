//  Displaying stars and numbers in triangle shape


#include<stdio.h>
int main()
{
    int row = 0 ;
    int col = 0;
    int total_Row = 15 ;

    for(row = 1 ; row < total_Row ; row++)
    {
        for(col = 1 ; col <= row ; col++)
        {
            printf("*\t");
        }

        printf("\n");
    }
}

// all this came in dependent quadratic loops