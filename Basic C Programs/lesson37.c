//            Double de referencing operator /  double pointer operator
// 
//  - creates pointer to pointer variable  
//   - used to set the value at another pointer is pointing

// syntax -  data_type**variableName


#include<stdio.h>
int main()
{
    int a =10;
    int*ptr1 = &a ;
    int**ptr2 = &ptr1 ;

    printf("value of a = %d \n ",a);
    printf("address of a = %d \n",&a);
    printf("address of ptr1 = %d \n", &ptr1);
    printf("address of ptr2 = %d \n", &ptr2);
    printf("value of ptr1 = %d \n", *ptr1);
    printf("value of ptr2 = %d \n", **ptr2);\

    *ptr1 = 25 ;

    printf("\n %d \n %d \n %d ", *ptr1,**ptr2,a);

    **ptr2 = 29 ;

    printf("\n %d \n %d \n %d ", *ptr1,**ptr2,a);

    a = 91;

    printf("\n %d \n %d \n %d ", *ptr1,**ptr2,a);

    return 0;
}