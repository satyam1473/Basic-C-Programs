/*          IMPLICIT POINTERS assosciated with two dimensional arrays


    1. array_name is implicitly a pointer to the first row of the array
        i.e. array_name returns address of the first row of the array

    e.g numbers is implicitly a pointer to the first row of the numbers array
        i.e. number returns address of the first row of the numbers array



    2. & array_name is implicitly a pointer to the whole array
            i.e. & array_name returns begining address of the whole array

    e.g  & numbers is implicitly a pointer to the whole array
            i.e. & numbers returns begining address of the whole array   



    3. & array_name [ r index ] is implicitily a pointer to a given row of the array
            i.e . & array_name [ r index ]  returns address of thegiven row of the array       

    e.g   & numbers [ 0 ] is implicitily a pointer to a given row of the array
            i.e . & numbers [ 0 ]  returns address of thegiven row of the array
                  & numbers [ 1 ]  returns first row address


    4.    array_name [ r index ] is implicitily a pointer to a given row of the array
            i.e . array_name [ r index ]  returns address of thegiven row of the array       

    e.g    numbers [ 0 ] is implicitily a pointer to a given row of the array
            i.e .  numbers [ 0 ]  returns address of thegiven row of the array
                   numbers [ 1 ]  returns first row address     


*/

#include<stdio.h>
int main()
{
    int numbers[2][2]={{1,2},{3,4}} ;

    printf("%d\n", numbers) ;
    printf("%d\n", &numbers) ;
    printf("%d\n", &numbers[0]) ;
    printf("%d\n", &numbers[1]) ;
    printf("%d\n", numbers[0]) ;
    printf("%d\n", numbers[1]) ;

    printf("\n") ;

    printf("%d\n", &numbers[0][0]) ;
    printf("%d\n", &numbers[0][1]) ;
    printf("%d\n", &numbers[1][0]) ;
    printf("%d\n", &numbers[1][1]) ;

    printf("\n") ;


    printf("%d\n", numbers[0][0]) ;
    printf("%d\n", numbers[0][1]) ;
    printf("%d\n", numbers[1][0]) ;
    printf("%d\n", numbers[1][1]) ;

    return 0 ;

}

