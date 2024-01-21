//      function with parameters and without return value

//      function to square a number

#include<stdio.h>

void square(int num) ;
void sum(int num1 , int num2 ) ;

int main()
{
    square(2) ;
    square(3) ;
    sum(4,3)  ;
    sum(11,10) ;
}

void square(int num)
{
    printf("%d\n", num*num) ;
}

void sum(int num1, int num2)
{
    printf("%d\n", num1 + num2 ); 
}  