/*                       Statements in C 

1. Sequential statements

2.  control statements

         - conditional statements

            if , if else , nested if else , else if ladder , switch case

         - looping statements 

            for , while , do while 

         - jumping statements

            break , continue , goto , function call , return 



                   ->      if & if else statement

                   syntax -      if (conditional statement)
                                 {
                                     statements ;    // true part 
                                 }
*/
// #include<stdio.h>
// int main()
// {
//     int a = 6 ;

//     if(a==6)
//         {
//          printf("a is equal to 6");
//         }
    
//     printf("\na is ...");
//     printf("\na is equal to 7");  
//     return 0;

//     // in this case true and all outside part is executed 

// }

//                  if else statement 

#include<stdio.h>
int main()
{
    int a = 11 ;
    if(a==11)
    {
        printf("a is equal to 11\n") ;
        
    }
    else
    {
        printf("a is not equal to 13\n") ;
    }
     

    return 0;
}

