//                          speciaal operators
// - sizeof operator 
// - comma operator 
// - address of operataor
// - de referencing operator
// - double de referencing operator
// - dot operator
// - arrow operator

//                     de referencing operator OR pointer

//  syntax -  data_type*variableName;

#include<stdio.h>
int main()
{
    int a=0;
    int*ptr = NULL;

    printf("value of a = %d",a);
    printf("\naddress of a = %d", &a);

    ptr = &a ;

    printf("\nvalue ot ptr = %d",ptr);
    printf("\nvalue of ptr is pointing = %d", *ptr);

    *ptr = 10 ;   // this modified the value of 'a' 

     printf("\nvalue of ptr is pointing = %d",*ptr);
     printf("\nvalue of a = %d",a);

     a=20;

     printf("\nvalue of ptr is pointing = %d ", *ptr);



    

    return 0;
}