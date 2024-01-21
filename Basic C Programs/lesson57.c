// Linear Search - searching for given item in the list  


//  with or without break statement

#include<stdio.h>
int main()
{
    int numbers[5] = {1,2,3,4,5} ;
    int i = 0 ;
    int item = 3 ;
    char found ='n' ;

    for(i=0; i<5; i++)
    {
        if (numbers[i] == item )
        {
            found = 'y' ;
            break ;
        }
        
    }

        // here we use break statement for efficient code as if millions of item will be there 
        // program will be looking for item even after finding the item

    printf("%s\n", (found == 'y') ? "Item found" : "Item not found") ;
   
   

    return 0 ;
}