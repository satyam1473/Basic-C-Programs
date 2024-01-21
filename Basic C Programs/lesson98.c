/*      Dynamic Memory Allocation

C programing language allows us to allocate , re-allocate , and de-allocate memory 
locations at run time i.e. during execution of a program or an application

Alllocating , re-allocating and de-allocationg memory locations at run time is called 
dynamic memory allocation

To allocate, re-allocate and de-allocate memory locations ar run time ; we take help of 
4 in built functions ; which are availabe inside stdlib.h header file . they are -

malloc()
calloc()
realloc()
free()

malloc()  and  calloc() functions are used to allocate memory locations at run time

realloc()  function is used to reallocate or resize an already allocated memory location
at run time

free() function is used to de allocate an already allocated memory location at run time

*/


//----------------------void  pointer---------------------------------------------------

#include<stdio.h>
int main()
{
    int n = 9 ;
    void *ptr = &n ;

    printf("%d\n",*(int*)ptr); // Typecasting of Pointer
    return 0 ;
}





//      malloc  &  calloc functions returns a void pointer . Due to this reason , they can  allocate 
//      a memory for any type of data

//  without knowing data type they can allocate memory

/*          malloc syntax

        void* malloc(size_t  size)

*/        






/*---------------------------NULL POINTER--------------------------------------------

a NULL is pointer that does not point to any memory location, It represent an invalid 
memory location
                    - it is good practise
                - useful for handling errors when using malloc function
     sometimes malloc returns NULL when memory is not available , in that we can use NULL pointer
 
 - - - before de-referencing any pointer we should perform null check

 */  


                                // #include<stdio.h>
                                // int main() 
                                // {
                                //     int name = 7 ;
                                //     int *ptr = NULL ;
                                //     ptr = &name ;

                                //     printf("%d\n",sizeof(name));
                                // }





/*--------------------------Dangling Pointer-----------------------------------------

A dangling Pointer is a pointer which points to some non existing memory location

- malloc function returns address of first byte of the memory to the pointer 
    & that address is represented by pointer

    - free(ptr) is used to deallocate the memory to which ptr is pointing
    but using this even doesn't stops the pointer to pointing the memory which doesn't exist
    still pointer is pointing to the deallocated memory 

        this is called DANGLING pointer 

    thats why we need to re initialize the pointer to NULL                  







    ------------------------------ WILD Pointer ------------------------------------------------

    wild pointers are known as un-initialized pointers 
    these pointers usually point to some arbitary memory location and may cause a program to crash or misbehave

            How to avoid WILD pointers ?

            initialize them with the address of known variables

            explicitly allocate the memory and put the values in the allocated memory 

                int main()
                {
                    int *p = (int *) malloc(sizeof(int)) ;
                    *p = 10 ;
                    free(p) ;
                    return 0 ;
                }

*/





                // #include<stdio.h>
                // #include<stdlib.h>

                // int X ;     // global variable

                // int main()
                // {
                //     static int Y ;       // Static Variable  (declared inside main() function)

                //     char *myName = "Ramu Kant Babu Mosai" ;     // wild pointer  //  local variable
                //     printf("%s\n",myName);

                    
                // }