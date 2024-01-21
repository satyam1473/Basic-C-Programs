//          sum of 1 D array

#include<stdio.h>
int main()
{
    int a[5]={1,2,3,4,5} ;
    int b[5]={5,4,3,2,1} ;
    int c[5] ;

    int i=0;

    for(i=0; i<5 ; i++)
    {
        c[i]=a[i]+b[i] ;

        printf("%d \n",c[i]) ;
    }
    return 0 ;
}