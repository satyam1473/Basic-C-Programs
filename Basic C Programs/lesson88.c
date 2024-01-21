//         C program to add two numbers using pointers

#include<stdio.h>
int main()
{
    int a = 0 , b = 0, c=0 ;

    int *ptrA = &a ;
    int *ptrB = &b ;
    int *ptrC = &c ;

    printf("Enter an integer value for a :\n") ;
    scanf("%d",&a) ;

    printf("Enter an integer value for b :\n") ; 
    scanf("%d",&b) ;

    *ptrC = *ptrA + *ptrB ;
    printf("value at ptrC is pointing = %d\n", *ptrC) ;
    printf("value of c = %d \n",c);

    return 0 ;

}
