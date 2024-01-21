//                            address of operator 

//     syntax :  &variablename

#include<stdio.h>
int main()
{
    int num=5,num1=9,num3=7;
    printf("\n %d",&num);
    printf("\n %d",&num1);
    printf("\n %d",&num3);

    printf("\n %p",&num);    // %p is used to represent address in hexadecimal form
    printf("\n %p",&num1);
    printf("\n %p",&num3);


    return 0;
}