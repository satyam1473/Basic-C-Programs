//                  STRUCTURE ASSIGNMENT


#include<stdio.h>
int main()
{
    struct Date
    {
        int day ;
        int month ; 
        int year ;

    };

    struct Date date1 = {1,1,2020} ;
    struct Date date2 = {2,1,2020} ;
    
    printf("date1 = %d-%d-%d\n", date1.day , date1.month ,date1.year);
    printf("date2 = %d-%d-%d\n", date2.day , date2.month ,date2.year);

    date2 = date1 ;

    // individually it copies data from one structure variable to other

    printf("date1 = %d-%d-%d\n", date1.day , date1.month ,date1.year);
    printf("date2 = %d-%d-%d\n", date2.day , date2.month ,date2.year);

    // NOTE

    // if arrays and pointers are members of a structure ; then it is recomended
    // to handle assignment of structure members individually .You can create a seperate
    // function to handle assignment of particular structure members .

    return 0 ;
    
}