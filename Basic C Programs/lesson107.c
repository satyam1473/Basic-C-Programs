//      function without parameters and with return value

#include<stdio.h>

float PI() ;
float E() ;

int main()
{
    printf("%.3f\n", PI() ) ;

    printf("%.3f\n", E() ) ;

    return 0 ;
}

float PI()
{
    return 3.142 ;
}

float E() 
{
    return 2.718 ;
}