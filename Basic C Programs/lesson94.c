/*        Subtraction  Operations 

    If two pointers are of same type  and they are pointing to the elements of the same
    array then they can be subtracted from one another 


    ptr2 - ptr1 
    returns total memory locations the two pointer variables are offset or away from one 
    another

    ptr2 - ptr1 // is implicitly expanded to (ptr2 - ptr1) / size of pointer variable type


    ( ptr2 - ptr1 ) - 1
    returns total memory locations available in between two pointer variables 


    ( ptr2 - ptr1 ) + 1 
    returns total elements available in an array ; if ptr1 is pointing to the first memory
    location of the array and ptr2 is pointing to the last memory location of the array

*/

#include<stdio.h>
int main()
{
    int numbers[5] = {1,2,3,4,5} ;

    int *ptr1 = &numbers[0] ;
    int *ptr2 = &numbers[4] ;

    printf("%d\n", ptr2 - ptr1);
    printf("%d\n", (ptr2 - ptr1)-1);
    printf("%d\n", (ptr2 - ptr1)+1);
    
    return 0 ;
    

}

// Addition , Multiplication and division of pointer variables are not supported