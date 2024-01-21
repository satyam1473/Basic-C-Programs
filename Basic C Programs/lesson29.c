//   Conditional Operators  - is the only ternary operator in C , It accepts 3 operands
 
//       (operand 1) ? operand 2 : operand 3 ;

#include<stdio.h>
int main()
{
    int num = 11 ;
    printf("\n %d is %s number",num,(num%2==0)?"even":"odd");

    num = 112 ;
    printf("\n %d is %s number",num,(num%2==0)?"even":"odd");

    num = 123 ;
    printf("\n %d is %s number",num,(num%2==0)?"even":"odd");

    num = 182 ;
    printf("\n %d is %s number",num,(num%2==0)?"even":"odd");

    printf("\n %d",num%7);
     printf("\n %d",num%6);
      printf("\n %d",num%5);
       printf("\n %d",num%4);
        printf("\n %d",num%3);
         printf("\n %d",num%2);
          printf("\n %d",num%1);
           printf("\n %d",num%182);

    return 0;
}