//  Displaying Stars snd numbers in rectangle shape

#include<stdio.h>
int main()
{
    int i = 0 ;
    int j = 0 ;   
    for(i=1; i<=8 ; i++)
    
    {

        for(j=1; j<=5 ; j++)
        {
            printf("%d\t",i);

        }
         
         printf("\n") ;
            
    }

    printf("\n") ;

    for(i=1; i<=8 ; i++)
    
    {

        for(j=1; j<=5 ; j++)
        {
            printf("%d\t",j);

        }
         
         printf("\n") ;
            
    }
   

    return 0 ;

}