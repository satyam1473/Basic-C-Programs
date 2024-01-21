//              Displaying stars and numbers in pyramid shape

#include<stdio.h>
int main()
{
    int row = 0;
    int col = 0 ;
    int total_Rows = 30;
    int space  = 0 ;
    
    for(row = 1 ; row <= total_Rows ; row++)
    {
        for(space = 1 ;  space <= (total_Rows - row) ; space++)
        {
            printf(" ") ;
        }
        
        for(col = 1 ; col <= row ; col++ )
        {
            printf("* ") ;
        }

        printf("\n") ;
    }
    return 0 ;
}