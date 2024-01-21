//          Functions with parameters and returns value

#include<stdio.h>

int square(int num);
int sum(int num1 , int num2) ;

int main()
{
    int rValue = square(3) ;

    printf("%d\n",rValue) ;
    
    
    rValue = sum(2,3) ;
    printf("%d\n",rValue) ;

    printf("%d\n",sum(100,1)) ;

    printf("%d\n", square(11)) ;
    
    
    
    return 0 ;   
}

int square(int num)
{
    return num * num ;
}

int sum(int num1 , int num2)
{
    return num1 + num2 ;
}