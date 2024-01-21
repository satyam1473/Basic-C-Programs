/*          Comparision Operations 

If two pointer variables are of same type , they can be compared with one another

Two compare pointer variables ; we take help of Comparision or Relational Operators in C


*/

#include<stdio.h>
int main()
{
    int num1 = 10 ;
    int num2 = 20;

    int *ptr1 = &num1 ;
    int *ptr2 = &num2 ;

    printf("%d\n",ptr1 != ptr2);
    printf("%d\n",ptr1 == ptr2);
    printf("%d\n",ptr1 > ptr2);
    printf("%d\n",ptr1 < ptr2);
    printf("%d\n",ptr1 <= ptr2);
    printf("%d\n",ptr1 >= ptr2);

return 0 ;
}