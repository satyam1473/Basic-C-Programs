/*         Increment & Decrement Operations on Pointers 

 While working with pointer variables ; the amount of value incremented or decremented
 depends upon the size of pointer variable type

 e.g 1 -

 int * ptr ;

 ptr++ ; increments ptr value by 4 because size of int type is 4 bytes
         ptr points to next int type memory location which is 4 bytes away from current location
*/

//------------------------------------------------------------------------------------------------------

// #include<stdio.h>
// int main()
// {
//     int num[5] = {1,2,3,4,5};

//     int *ptr = &num[0] ;

//      printf("value at index 0 = %d\n",*ptr);

//      ptr++ ;
//      printf("value at index 1 = %d\n",*ptr);

//      ptr++ ;
//      printf("value at index 2 = %d\n",*ptr);

//      ptr++ ;
//      printf("value at index 3 = %d\n",*ptr);

//      ptr++ ;
//      printf("value at index 4 = %d\n",*ptr);

//    return 0 ;
// }


//-----------------------------------------------------------------------------------------------------



#include<stdio.h>
int main()
{
    int num[5] = {1,2,3,4,5};

    int *ptr = &num[4] ;

     printf("value at index 4 = %d\n",*ptr);

     ptr-- ;
     printf("value at index 3 = %d\n",*ptr);

     ptr-- ;
     printf("value at index 2 = %d\n",*ptr);

     ptr-- ;
     printf("value at index 1 = %d\n",*ptr);

     ptr-- ;
     printf("value at index 0 = %d\n",*ptr);

   return 0 ;
}