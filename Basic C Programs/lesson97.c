//          Pointer to a Structure in C 

#include<stdio.h>
int main()
{
    struct Student
    {
        int rollnum ;
        char * name ;
        float marks ;

    } ;

    struct Student sstudent_1 = {  5 ,  "  Rajesh  "  ,  777.79 } ;
    struct Student sstudent_2 = {  11  , "Opendra" , 76.67}      ;

    //  decalaring and initializing a pointer to structure

    struct Student * ptr_to_sstudent_1 = & sstudent_1 ;
    struct Student * ptr_to_sstudent_2 = & sstudent_2  ;

    // getting member of a structure 

    printf("\n %d",ptr_to_sstudent_1 -> rollnum);
    printf("\n%s", ptr_to_sstudent_1->name);
    printf("\n%f",ptr_to_sstudent_1  ->  marks);

     printf("\n %d",ptr_to_sstudent_2 -> rollnum);
    printf("\n%s", ptr_to_sstudent_2->name);
    printf("\n%f",ptr_to_sstudent_2  ->  marks);

    // setting members of structure using arrow operator

    ptr_to_sstudent_1 -> rollnum = 22676354 ;
    ptr_to_sstudent_1 ->  name = "oberoi" ;
    ptr_to_sstudent_1 ->  marks = 99.9 ;

     ptr_to_sstudent_2 -> rollnum = 7223751 ;
    ptr_to_sstudent_2->  name = "arnav singh raijaada " ;
    ptr_to_sstudent_2 ->  marks = 99 ;

     printf("\n %d",ptr_to_sstudent_1 -> rollnum);
    printf("\n%s", ptr_to_sstudent_1->name);
    printf("\n%f",ptr_to_sstudent_1  ->  marks);

     printf("\n %d",ptr_to_sstudent_2 -> rollnum);
    printf("\n%s", ptr_to_sstudent_2->name);
    printf("\n%f",ptr_to_sstudent_2  ->  marks);
    

    return 0;



}    