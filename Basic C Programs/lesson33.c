/*//  Special Operators

//     - sizeof operator ; gives size of given operand in bytes

#include<stdio.h>
#define PI 3.14
int main()

{
    printf("\n%d",sizeof(char));
    printf("\n%d",sizeof(int));
    printf("\n%d",sizeof(float));
    printf("\n%d",sizeof(double));
    printf("\n%d",sizeof('A'));
    printf("\n%d",sizeof(5.656565));
    printf("\n%d",sizeof((float) 5.656565));
    printf("\n%d",sizeof(void));
    printf("\n%d",sizeof(PI));

    return 0;
}

*/

//              comma operator ; is used to group related expressions together and 
//                        it returns the result of right most expression

//     syntax - (expression 1 , expression 2 , expression 3)

//     program to add two numbers 

#include<stdio.h>
int main()
{
    int a=10,b=80,c=50;
    
    c = (a=5,b=3,a+b);              

    printf("\n%d",c);
    printf("\n%d",a+b+c);
    

    return 0;
}















