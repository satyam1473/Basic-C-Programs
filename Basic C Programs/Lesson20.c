//characters in C Language

#include<stdio.h>
int main()
{
    // char isGameOver = 'n';
    // printf("IS GAME OVER = %c",isGameOver);

                //  or


    // char letter = 'n' ;
    // char * isGameOver = NULL ;
    // isGameOver = &letter ;
    // printf("IS GAME OVER = %c", *isGameOver);

     
     //          or


    char letter ='n' ;
    char * isGameOver = &letter ;
    printf ("IS GAME OVER = %c   \n ", *isGameOver);
     printf ("IS GAME OVER = %c", letter);

    return 0;
}