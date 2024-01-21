/*      calloc()    function

-calloc function stands for contiguous memory allocation  
-it allocates  n  memory blocks of a given size in bytes contiguously i.e. an array of memory blocks
-each allocated memory block contains collection of memory locations each of size one byte
-eacha memory location inside  the allocated memory block is initialized with zero
-on success of memory allocation ; it returns begining address of the array of memory blocks
-if the allocation fails it returns NULL value

syntax 

                    (void*) calloc(size_t  n , size_t sizeInBytes)  ;

where

void*       : indixates a generic pointer type which can be converted to any specific pointer type 
size_t      : indicates unsigned integer value i.e. +ve integer value
n           : indicates number of blocks to be allocated contiguously 
sizeInBytes : indicates size of each memory block to be allocated in bytes

e.g
            calloc(1 , sizeof(int)) ;
                it allocates 1 memory block of size 4 bytes and returns begining address of the allocated memory 
                block as a generic pointer type value 

            calloc(5 , sizeof(int)) ;
                it allocates 5 memory block of size 4 bytes and returns begining address of the allocated memory 
                block as a generic pointer type value 

                */

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int * ptr = NULL ;
    ptr = (int*)calloc(5, sizeof(int)) ;

    *ptr = 10 ;
    *(ptr + 1)  = 11 ;
    *(ptr + 2)  = 21 ;
    *(ptr + 3)  = 31 ;
    *(ptr + 4)  = 41 ;


     printf("%d\n", *(ptr + 0));
    printf("%d\n", *(ptr + 1));
    printf("%d\n", *(ptr + 2));
    printf("%d\n", *(ptr + 3));
    printf("%d\n", *(ptr + 4));
    printf("\n\n");

    free(ptr);
    ptr = NULL ;

    return 0 ;

}                 