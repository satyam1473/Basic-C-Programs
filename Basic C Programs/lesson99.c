/*                                     malloc()  &  free()  function 


    malloc()    function

    it allocates a memory block of a given size in bytes
    the allocated memory block contains collection of memory location each of size one byte
    on sucess of memory allocation it returns beginning address of the allocatd memory block
    if the allocation fails it returns NULL value

    syntax :            (void*) malloc(size_t   sizeInBytes)
     
     void*          - a generic pointer tyo]pe whicah can be converted to any data pointer type
     size_t         - indicates unsigned integer value i.e +ve integer value
     sizeInBytes    - indicates size of the memory block to be allocated in bytes

e.g 
        malloc(sizeof(int)) ;       OR          malloc(1 * sizeof(int)) ;

        it allocates a single memory of 4 bytes , initializes with garbage value and 
        returns beginning address of the allocated memory block as generic pointer type

        malloc(5 * sizeof(int)) ;

        it allocates a single memory of 20 bytes , initializes with garbage value and 
        returns beginning address of the allocated memory block as generic pointer type


--------------------------------------------------------------------------------------------------
    free()      function 

    is used to de allocate dynamically alocated locations before the program execution ends

    syntax:         void free(void* pointer) ;

    it frees the memory block pointed by the given pointer

where
        void  - indicates free() function does not return anything back 
        void* pointer - indicates any type of pointer


e.g         free(iptr );
            iptr = NULL





Three important parts of Memory


    Static Memory

-used to allocate memory locations for global and static variables
-variables which are declared outside a function are considered as global variables
-variables which are declared using static keyword are considered as static variables
-global and static variables are persisted through out the execution of the program


    Stack Memory

-used to allocate memory locations for local variables
-Variables which are declared inside a function are considered as global variables
-local variables of a function are persisted as long as the function is executing


    Heap Memory

-heap memory is used to allocate memory locations ; which are being allocated during run time
-memory locations which are allocated during run time using malloc and calloc functions are persisted even 
 after the program execution ends . So it is programmer's responsibility to free them before the program 
 execution ends
-If you don't free the dynamically allocated memory locations before the program execution ends they will
 not be available to use for any other applications which is called memory leak 




*/


#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr = NULL ;

    ptr = (int*) malloc(sizeof(int)) ;

    *ptr = 10 ;    // #100 = 10

    printf("Value of #100 = %d\n" , *ptr) ; //10

    free(ptr);
    ptr = NULL ;

    return 0 ;
}

