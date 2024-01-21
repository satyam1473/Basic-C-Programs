#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr = NULL ;

    ptr = (int*) malloc(5 * sizeof(int)) ;

    *ptr = 10 ;             // #100 = 10
    *(ptr + 1) = 20 ;       // #104 = 20
    *(ptr + 2) = 30 ;       // #108 = 30 
    *(ptr + 3) = 40 ;       // #112 = 40
    *(ptr + 4) = 50 ;       // #116 = 50

    printf("%d\n", *(ptr + 0));
    printf("%d\n", *(ptr + 1));
    printf("%d\n", *(ptr + 2));
    printf("%d\n", *(ptr + 3));
    printf("%d\n", *(ptr + 4));
    printf("\n\n");

    free(ptr);
    ptr = NULL ;

    return 0 ;
}