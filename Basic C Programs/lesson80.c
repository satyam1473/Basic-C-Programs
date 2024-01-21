//                  READ STORE & PRINT Structures in C language

#include<stdio.h>
#include<stdlib.h>
int main()
{
    struct Student
    {
        int rollnum ;
        char *name ;
        float marks ;
        
    };

    struct Student student1 = {0,"0",0};
    struct Student student2 = {0,"0",0};
   
    printf("%d\n",student1.rollnum);
    printf("%s\n",student1.name);
    printf("%f\n",student1.marks);

    printf("%d\n",student2.rollnum);
    printf("%s\n",student2.name);
    printf("%f\n",student2.marks);

    printf("\nEnter the STUDENT 1 :- ");

    printf("\nRoll No.\n");
    scanf("%d",&student1.rollnum);

    printf("\nName\n");
    free(student1.name);
    student1.name = (char *) malloc(20 * sizeof(char));
    scanf("%s", student1.name);
    
    printf("\nMarks\n");
    scanf("%f",&student1.marks);

    printf("\n\n\n");

    printf("\nEnter the STUDENT 2 :- ");

    printf("\nRoll No.\n");
    scanf("%d",&student2.rollnum);

    printf("\nName\n");
    free(student2.name);
    student2.name = (char *) malloc(20 * sizeof(char)) ;
    scanf("%s", student2.name);
    
    printf("\nMarks\n");
    scanf("%f",&student2.marks);

    printf("\n\n\n");
    
    printf("Student 1 \n") ;
    
    printf("%d\n",student1.rollnum);
    printf("%s\n",student1.name);
    printf("%f\n",student1.marks);

    printf("Student 2 \n") ;

    printf("%d\n",student2.rollnum);
    printf("%s\n",student2.name);
    printf("%f\n",student2.marks);




    

    
}