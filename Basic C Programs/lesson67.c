//                          ARRAYS


#include<stdio.h>
int main ()
{
    int array_number [10] = {1,2,3,4,5,6,7,8,9,10} ;
    int i = 0 ;

    for( i = 0 ; i<10 ; i++)
    {
        printf("%d \n", array_number [i]) ;
    }
    return 0 ;
}

/* 

     types of arrays 

  - one dimensional arrays

  while accessing each element in an array it requires only one index or subscript 
  eg- arrayName[index]


  - multi dimensional arrays  
        - 2 dimensional arrays
        - 3 dimensional arrays . . . and so on

    while accessing each element in an array it requires only two indexes or subscript 
    eg- arrayName[index 1] [index 2]

    3 dimensiolnal array 
    e.g - arrayName [index 1] [index 2] [index 3]

    .
    .
    .

    n - dimensional array 

    while accessing each element it requires n indixes or subscripts such array is 
    called n dimendsional array

    e.g - arrayName [index 1] [index 2] [index 3]. . . . . . [index n]

    */
