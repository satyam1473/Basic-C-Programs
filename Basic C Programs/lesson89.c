//          Pointer to a pointer 

#include<stdio.h>
int main()
{
    int a = 101;
    int *ptr1 = &a;
    int * * ptr2 = &ptr1 ; // we can use without space even

    printf("value of a = %d\n", a);
    printf("address of a = %d \n\n ", &a);

    printf("value of ptr1 = %d\n",ptr1) ;
    printf("address of ptr1 = %d\n\n", &ptr1);

    printf("value of ptr2 = %d\n",ptr2);
    printf("address of ptr2 = %d\n\n", &ptr2);

    printf("value of a = %d\n",a);
    printf("value of a using ptr1 = %d\n",*ptr1);
    printf("value of a using ptr2 = %d\n", * * ptr2);
}