/*      realloc()       function 

it is used to reallocate or resize a memory block or a memory location; which is previously allocated using
malloc()  or  calloc() 

syntax
                        (void*)realloc(void* pointer , size_t  newSizeInBytes)  ;

where 
        void*           : indicates a generic pointer 
        void* pointer   : indicates any type of pointer
        newSizeInBytes  : indicates new size of the reallocated space in bytes
        size_t          : indicates unsigned i.e. positive integer value

NOTE 

        if there is sufficient amount of space under the memory block or memory location pointed by given pointer
        then it resizes it to the given newSizeInBytes and returns the begining address

        if there is no sufficint amount of space under the memory block or memory location pointed by the given pointer then it 
        allocates a new space of the given newSizeInBytes and copies the content to it , and then returns the begining address

        if allocation or resizing fails it returns NULL value

        */

#include<stdio.h>
#include<stdlib.h>
int main()

{
    int *ptr = NULL ;
    ptr = (int*)malloc(1* sizeof(int)) ;

    *ptr =  10 ;                                         // #100 = 10 

    printf("value of #100 = %d\n ", *ptr) ;

    ptr = (int*)realloc( ptr , 2*sizeof(int)) ;

    *(ptr + 1) = 11    ;                              // #104 = 11  
    printf("value of #104 = %d\n ", *(ptr + 1) );

    free(ptr) ;
    ptr = NULL ;
    return 0;

}       