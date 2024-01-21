/*                if else    v/s      conditional operator

program for finding given number is even or odd     */

#include<stdio.h>
int main()
{
    int a = 0 ;
    printf("enter the number");
    scanf("%d",&a);
    if (a%2 == 0)
    {
        printf("a is even\n");
    }
    else{
        printf("a is odd");
    }
return 0;
}

// writing given programe  using conditional operator

// #include<stdio.h>
// int main()
// {
//     int a = 11;
//     printf("%d is %s\n ",a,  (a%2==0)?"even":"odd");

//     return 0;
// }