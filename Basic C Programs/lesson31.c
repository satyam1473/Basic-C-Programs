//                             Bitwise Operators 

#include<stdio.h>
int main ()
{  /*
    // & : Bitwise AND operator

    printf("\n %d ", 1 & 1);
    printf("\n %d ", 1 & 0);
    printf("\n %d ", 0 & 1);
    printf("\n %d ", 0 & 0);

    printf("\n\n");

    printf("\n %d ", 3 & 4);
    printf("\n %d ", 5 & 6);
    printf("\n %d ", 0 & 8);
    printf("\n %d ", 6 & -4);

     printf("\n\n");

    // | : Bitwise OR operator

    printf("\n %d ", 1 | 1);
    printf("\n %d ", 1 | 0);
    printf("\n %d ", 0 | 1);
    printf("\n %d ", 0 | 0);

    printf("\n\n");

    printf("\n %d ", 3 | 4);
    printf("\n %d ", 5 | 6);
    printf("\n %d ", 0 | 8);
    printf("\n %d ", 6 | -4);

    // ^ : Bitwise EXCLUSIVE OR operator

    printf("\n\n");

    printf("\n %d ", 1 ^ 1);
    printf("\n %d ", 1 ^ 0);
    printf("\n %d ", 0 ^ 1);
    printf("\n %d ", 0 ^ 0);

    printf("\n\n");

    printf("\n %d ", 3 ^ 4);
    printf("\n %d ", 5 ^ 6);
    printf("\n %d ", 0 ^ 8);
    printf("\n %d ", 6 ^ -4);  

    printf("\n\n");

    //  ~ : Bitwise COMPLEMENT operator - add 1 and change the sign

    printf("\n %d", ~2);
    printf("\n %d", ~-8);
    printf("\n %d", ~1);
    printf("\n %d", ~0);
    printf("\n %d", ~-1);
    printf("\n %d", ~-0);

    printf("\n\n");

    printf("\n %d", ~ ~2);
    printf("\n %d", ~~-8);
    printf("\n %d", ~~1);
    printf("\n %d", ~~0);
    printf("\n %d", ~~-1);
    printf("\n %d", ~~-0);  */


    // << : Bitwise LEFT SHIFT operator  ;   (first No.)*2^(second No.)

    printf("\n %d ", 1 << 1);
    printf("\n %d ", 1  << 0);
    printf("\n %d ", 0  << 1);
    printf("\n %d ", 0  << 0);

    printf("\n\n");

    

    // >> : Bitwise RIGHT SHIFT operator ;   (first No.)/2^(second No.)


    printf("\n %d ", 32 >> 4);
    printf("\n %d ", 545454 >> 6);
    printf("\n %d ", 072727272 >> 8);
    printf("\n %d ", 64 >> -4);

printf("\n\n");

 printf("\n %d", ~2);
    printf("\n %d", ~-8);
    printf("\n %d", ~1);
    printf("\n %d", ~0);
    printf("\n %d", ~-1);
    printf("\n %d", ~-0);

    return 0;
}