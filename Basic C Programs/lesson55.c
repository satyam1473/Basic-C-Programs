//            do while loop

//    guess the number game 


#include<stdio.h>
#include<stdlib.h>              // rand() , srand()
#include<time.h>          //  time()
int main()
{
    int random_number = 0;
    int num = 0 ;
    char ch = 'y' ;

    printf("Welcome to guess the number game !!! \n ") ;

    do
    {
         srand(time(NULL)) ;

    random_number = (rand() % 10) + 1 ;

                // rand() % 10 generates  random number from 0 to 9 
                //  (rand() % 10) +1 generates random number from 0 to 10

    printf("%d \n", random_number) ;

    printf(" Guess the number between 0 and 10 : ") ;
    scanf("%d",&num);

    if(random_number == num )
    {
        printf("You Won ! \n") ;
    }
    else
    {
        printf(" You Lost ! \n The number is %d \n", random_number) ;
    }

    printf("\n Do you want to replay ? (y/n) : ") ;
    scanf("%s", &ch) ;
    
    }

    while (ch == 'y') ;


    printf(" You played awesome ") ;
    // getch() ;                            waits for keyboard input after execution

   

    return 0 ;
}