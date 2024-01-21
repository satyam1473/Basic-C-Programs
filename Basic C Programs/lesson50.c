/*          forward for loop 

 in this counter variable is initialized with lower value and checked against 
 higher value and counter variable value is incremented after each transition 

 

//     program to display 1 to 10

#include<stdio.h>
int main()
{
    int a = 0 ;
    for ( a = 1 ; a < 11 ; a++)
    {
        printf("%d\n",a) ;

    }
    return 0 ;
}


// programe to display multiplication table 

#include<stdio.h>
int main()
{
    int i =0 , num =2;
    for ( i = 1; i<11 ; i++)
    {
        printf("%d X %d = %d \n", num , i , num*i);
    }
    return 0 ;

}


   //     reverse for loop  - vice versa of forward for loop

//       programe to display 10 to 1 

#include<stdio.h>
int main()
{
    int b =10;
    for (b=10; b>0 ; b--)
    {
        printf("%d \n", b);
    }
    return 0;
}

*/

// program to display multiplication table of any number in reverse order

#include<stdio.h>
int main()
{
    int c = 10 , num = 2 ;
    for(c=10;c>0;c--)
    {
        printf("%d X %d = %d \n", num , c , num*c);
    }
    return 0 ;
}




