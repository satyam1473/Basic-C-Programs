//              Nesting of Structures 
//
//      a structure inside an another structure is called embeded structure

/*   Two types of Nesting

    1. Defining a structre and declaring its variables; completely inside another structure

    e.g 

    struct Student
    {
        int rollnum ;
        char *name ;

            struct Date
            {
                int day ;
                int month ;
                int year ;
            } date_of_birth ;
    } ;


    2. Defining a structure independently and declaring its variables inside another structure 

    e.g 

    struct Date 
    {
        int day ;
        int month ;
        int year ;
    } ;

    struct Student 
    {
        int rollnum ;
        char *namr ;

            struct Date date_of_birth ;
    };


                                            2 nd method is better way               */


#include<stdio.h>
int main()
{
    struct Date 
    {
        int day ;
        int month ;
        int year ;
    } ;

     struct Student 
    {
        int rollnum ;
        char *name ;

            struct Date date_of_birth ;
    };

    
    struct Student student1 = {10, "Suresh" , {1,1,2020}} ;

    printf("%d\n",student1.rollnum);
    printf("%s\n",student1.name);
    printf("%d-%d-%d\n",student1.date_of_birth.day, student1.date_of_birth.month, student1.date_of_birth.year);

    student1.date_of_birth.day = 31 ;
    student1.date_of_birth.month =12 ;
    student1.date_of_birth.year = 1997 ;

    printf("\n\n%d\n",student1.rollnum);
    printf("%s\n",student1.name);
    printf("%d-%d-%d\n",student1.date_of_birth.day, student1.date_of_birth.month, student1.date_of_birth.year);


    return 0;

}  


    