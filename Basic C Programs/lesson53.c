// program to find sum of digits in a given number

// program without using while loop

/* 

#include<stdio.h>
int main()
{
    int num = 123 ;
    int lastdigit =0;
    int sumofdigit = 0 ;

    lastdigit = num%10 ; //3
    sumofdigit = sumofdigit + lastdigit ;  //3
    num = num/10 ;  // num=12

    lastdigit = num%10;  //2
    sumofdigit = sumofdigit + lastdigit ; // 3+2=5
    num = num/10 ; //1

    lastdigit = num%10   ;// 1
    sumofdigit = sumofdigit + lastdigit  ;//  5+1 = 6
    num = num/10   ;// 0

    printf("\n  Sum of digits =  %d  \n ", sumofdigit);

    return 0;

}

*/


//  suppose we don't know the no of digits in the number in that case we 
//  use while loop

#include<stdio.h>
int main()
{
    int num = 0 ;
    int lastdigit =0;
    int sumofdigit =0;

    printf(" \n Enter the number : ") ;
    scanf("%d", &num);                            // terminal can ask for extra input be careful

    while(num!=0)
    {
        lastdigit = num%10 ;   
        sumofdigit = sumofdigit + lastdigit ;
        num = num/10 ;
    }

    printf(" Sum of digits = %d ", sumofdigit) ;

    return 0 ;
}

