/*                             ASSIGNMENT OPERATORS
      
      Assignment operators are used to assign values to variable and constant
      
      Short Hand Assignment (SHA)
       
         - AA (Arithematic assignment)
               
            += , -=  ,  *=  ,  /=  ,  %= 

         - BA (Bitwise assignment)

            &= , |= , ^= , <<= , >>=   */

#include<stdio.h>
int main()
{
    const float PI = 3.14;
    printf("\n%f",PI);
    
    int a = 10;
    printf("\n%d",a);

    a += 10 ; // a = a+10
    printf("\n%d",a);

    a -= 10 ; // a = a-1o
    printf("\n%d",a);

    a *= 2 ; // a = a*2 
    printf("\n%d",a);

    a /= 5 ; // a = a/15
    printf("\n%d",a);

    a %= 3 ; // a = a%3
    printf("\n%d",a);



 
 
    return 0;
}                           
