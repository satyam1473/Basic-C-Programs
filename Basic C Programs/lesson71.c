//  Traversing 1 D array in reverse order

// using reverse for loop

#include<stdio.h>
int main()
{
    int numbers[5] = {1,2,3,4,5};
    int i =0 ;

    for(i=4;i>=0;i--)
    {
        printf("%d \n",numbers[i]);
    }
    return 0 ;
}