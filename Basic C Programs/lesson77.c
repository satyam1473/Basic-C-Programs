//      Read store and Print 1 D array

#include<stdio.h>
int main ()
{
    int numbers[5];
    int i = 0 ;

    printf("Enter 5 integer of the numbers[5] array \n") ;
    
    for(i=0; i<5 ; i++ )
        {
        scanf("%d" ,&numbers[i]);
        }

    printf(" numbers[5] of the array are\n") ;    

    for(i=0; i<5 ; i++ )    
        printf("%d \n",numbers[i]);
        return 0;
}
 