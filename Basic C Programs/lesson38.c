/*                             special operators 

    - dot operators : is used to access members of structure directly through 
      a normal structure variable

    - is used to access members of a union directly through a normal union variable

    */

  /*    syntax for defining a structure  

            struct structure_name 
            {
                data_type variable_name_1 ;
                data-type variable_name_2 ;
                .
                ...

                data_type variable_name_N ;
            
            }   ;


        syntax for decalaring structure variable

            struct     structure_name     structure_variable_name   ;


        syntax for setting members of a structure using dot operator    


            structure_variable_name.member_name = value ;





  */


#include<stdio.h>
int main()
{
    //  defining a student structure

    struct Student
    {
        int roll_num ;
        char*name ;
        float marks ;

    }  ;

    //  once we define structure , we can create 'n' number of structure variables

    //  or  ,  We can set members to structure variable at time of declaration


    // struct Student sstudent_1 ;
    // struct Student sstudent_2 ;

    struct Student sstudent_1 = {7, "Sviva" , 79.09}  ;
    struct Student sstudent_2 = {17 , "robert" , 89.089}  ;


    // upto now we have defined a "structure" , declared "structure variable" 
    
    // setting members of a structure

    sstudent_1.roll_num = 5 ;
    sstudent_1.name = "Suresh" ;
    sstudent_1.marks = 77.5 ;

    printf("\n%d",sstudent_1.roll_num);
    printf("\n%s",sstudent_1.name);
    printf("\n%f",sstudent_1.marks);
    printf("\n%d",sstudent_2.roll_num);
    printf("\n%s",sstudent_2.name);
    printf("\n%f",sstudent_2.marks);

    
    // ALITER ,
    //            

    return 0; 


}













            