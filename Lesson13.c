#include<stdio.h>
int main()
{
    printf("\nHello World");
    printf("\n\nHii Everybody\n");
    printf("\n");

    //We are using consecutine forward slash for commenting a line in C Programes

    // DISPLAYING SIZE OF ANY TYPE OF DATA

    printf("\nsize of int is %d",sizeof(int));
    printf("\nsize of float is %d",sizeof(float));
    printf("\nsize of double is %d",sizeof(double));
    printf("\nsize of char is %d",sizeof(char));

    printf("\n");

    printf("\nsize of 128 is %d",sizeof(128));
    printf("\nsize of 45.654321 is %d",sizeof(45.654321));
    printf("\nsize of 34.0987654321 is %d",sizeof(34.0987654321));
    printf("\nsize of 'A' is %d",sizeof('A'));
    printf("\n\n");

    printf("size of char A is %d",sizeof((char)'A'));

    // similarily we can print size of modified data types using 
    // sizeof(short int)  sizeof(long int)   sizeof(signed int)  sizeof(unsigned int)
    // sizeof(signed short int)   sizeof(signed long int)
    // sizeof(unsigned short int)  sizeof(unsigned long int)   

    printf("\n");

    


    return 0 ;
}