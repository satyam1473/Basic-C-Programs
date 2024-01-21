//        2 D arrays - used to represent table of values , i.e. arranged in row & col

#include<stdio.h>
int main()
{
    int numbers [2] [2] = {{1,2},{3,4}} ;

    printf("%d\n", numbers[0][0]);
    printf("%d\n", numbers[0][1]);
    printf("%d\n", numbers[1][0]);
    printf("%d\n", numbers[1][1]);

    numbers[0][0] = 99 ;
    printf("%d\n", numbers[0][0]);

    printf("%d\n", numbers[0]);
     printf("%d\n", numbers[1]);
      printf("%d\n", &numbers[0][1]);

     
    
    return 0 ;
}



