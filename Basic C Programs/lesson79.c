//                          STRUCTURES IN C 

#include<stdio.h>
int main()
{
    struct Student
    {
        int rollnum;
        char *name ;
        float marks ;
    };
    
    struct Student student1 = {1, "Suresh" , 89.456} ;
    struct Student student2 = {2, "Mahesh" , 79.568} ;
    
    printf("student1 roll = %d\n", student1.rollnum);
    printf("student1 name = %s\n", student1.name);
    printf("student1 marks = %.2f\n", student1.marks);

    printf("student2 roll = %d\n", student2.rollnum);
    printf("student2 name = %s\n", student2.name);
    printf("student2 marks = %.2f\n", student2.marks);

    // setting members of structure variable name using dot operator

    student1.marks = 101.765 ;
    student2.marks = 111.897 ;

    printf("student1 marks = %.2f\n", student1.marks);
    printf("student2 marks = %.2f\n", student2.marks);




}
