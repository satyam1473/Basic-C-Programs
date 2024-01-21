/*          Addition & Subtraction operations on pointers

int * iptr ;

iptr = iptr + value ;
iptr = iptr + (value * size of int data type) ;

e.g 

iptr = iptr + 2 ;
iptr = iptr + (2 * 4) ;
iptr = iptr + 8 ;

iptr points to next int type memory location which is 8 bytes away from current memory location


iptr = iptr + n ;
iptr = iptr + (n * 4);
iptr = iptr + 4n ;

iptr points to next memory location which is 4n bytes away from current memory location

*/

#include<stdio.h>
int main()
{
    int num[5] = {1,2,3,4,5};

    int *ptr = &num[0] , *ptr1 ,*ptr2 ,*ptr3 ,*ptr4 ;

    ptr1 = ptr + 1 ;
    ptr2 = ptr1 + 1 ;
    ptr3 = ptr2 + 1 ;
    ptr4 = ptr3 + 1 ;

    printf("value at index 0 = %d\n",*ptr);
    printf("value at index 1 = %d\n",*ptr1);
    printf("value at index 2 = %d\n",*ptr2);
    printf("value at index 3 = %d\n",*ptr3);
    printf("value at index 4 = %d\n",*ptr4);

    return 0 ;
}