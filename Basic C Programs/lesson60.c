// goto statement

//  foto statement transfers the control to the specified label

// label - a text followed by clolon indicates label
// begining:  ,  end:  , 

// syntax -  goto label_Text ;


// program to display first mane ,last name , full name and control which one to display using goto statement

/*
#include<stdio.h>
int  main()
{
    goto full_name ;
    
    first_name:
    printf("Satyam \n");
    goto end ;
    
    
    last_name:
    printf("Kumar\n") ;
    goto end ;
    
    
    full_name:
    printf("Satyam Kumar") ;

    end:

    return 0 ;

}

*/

// program to display 1 2 3 4 5 using while loop

// #include<stdio.h>
// int main()
// {
//     int i = 1 ;
//     while(i<6)
//     {
//         printf("%d\n",i);
//         i++;
//     }
//     return 0 ;
// }

// program to display 1 2 3 4 5 using goto statement

#include<stdio.h>
int main()
{
    int i = 1;

    begining :

    if(i<6)
    {
        printf("%d\n",i) ; 
        i++ ;

        goto begining ;
    }
    return 0 ;
}