/*       Nested if    and     Nested if else statement 

using another if statement indide if or if else statement 
                        or
using another if else statement inside another if or if else statement   */

#include<stdio.h>
int main()
{
    // programe to find largest of given three numbers

    int a =0 , b=0, c=0 ;

    printf("\nenter value of a\n");
    scanf("\n%d",&a);
    printf("\nenter value of b\n");
    scanf("\n%d",&b);
    printf("\nenter value of c\n");
    scanf("\n%d",&c);

    if (a>b)
    {
        if(a>c)
        {
            printf("\na is largest\n");
        }
        else
        {
            printf("\nc is largest\n");
        }
    }
    else if(b>c)
    {
        printf("b is largest\n");
    }
    else
    {
        printf("c is largest\n");
    }
    return 0;
}