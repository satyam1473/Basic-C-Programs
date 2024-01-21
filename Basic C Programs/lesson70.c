/*      C program to traverse an Array 
        Print array in forward direction

    Traversing 1 D array 

    Traversing means looping through each element in an array 
    i.e. - accessing each element in an array using looping and iterative statements

*/

//      Traversing 1 D array in forward direction using forward for loop

#include<stdio.h>
int main()
{
    int numbers[5] = {1,2,3,4,5};
    int i =0 ;

    for(i=0;i<5;i++)
    {
        printf("%d \n",numbers[i]);
    }
    return 0 ;
}