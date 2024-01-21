/*

        Array of Structures in C 

        Array of Structure is a collection of similar type of sturctrue variables

        
        SYNTAX for decalaring & initializing array of structure is -

        struct Structure_name arry_name [size] = {blocks of values seperated by comma} ;

        struct Student sutdents[3] = {

            {1, "Suresh" , 23} ,
            {2, "Mahesh" , 27} ,
            {3, "Ganesh" , 29}
        } ; 

        
        
        SYNTAX for accessing a member in the array of Structures is -

        array_name[index].member_name ;

        students[0].rollnum ;

*/

#include<stdio.h>   
int main()
{
    struct Student
    {
        int rollnum ;
        char *name ;
        int age ;
    };
    
    struct Student students[3] = {

            {1, "Suresh" , 23} ,
            {2, "Mahesh" , 27} ,
            {3, "Ganesh" , 29}
    } ;

    int i = 0;

   for(i=0; i<3 ; i++) 

   {
    printf("students[%d] roll = %d \n", i, students[i].rollnum);
    printf("students[%d] name = %s \n", i, students[i].name);
    printf("students[%d] age = %d \n\n\n", i,students[i].age);

   }

    // printf("students[1] roll = %d \n", students[1].rollnum);
    // printf("students[1] name = %s \n", students[1].name);
    // printf("students[1] age = %d \n\n\n", students[1].age);

    // printf("students[2] roll = %d \n", students[2].rollnum);
    // printf("students[2] name = %s \n", students[2].name);
    // printf("students[2] age = %d \n\n\n", students[2].age);

    return 0;

}








