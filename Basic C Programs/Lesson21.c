// Strings in C

#include<stdio.h>
int main()
{
    // char topper_name[17]="Satyam Kumar";
    // printf("\n%s",topper_name);
    // printf("\n%c\n%c\n%c\n%c\n%c\n%c\n%c\n%c\n%c\n%c\n%c\n%c\n%c",topper_name[0],topper_name[1],topper_name[2],topper_name[3],topper_name[4],topper_name[5],topper_name[6],topper_name[7],topper_name[8],topper_name[9],topper_name[10],topper_name[11],topper_name[12],topper_name[13]);
    
    char * playerName = "Suresh Kumar";
    printf("\n%s",playerName);
    printf("\n%c\n%c",*(playerName+0),*(playerName+1));
    printf("\n%c",*(playerName+2));
    printf("\n%c",*(playerName+3));
    printf("\n%c",*(playerName+4));
    printf("\n%c",*(playerName+5));
    printf("\n%c",*(playerName+6));
    printf("\n%c",*(playerName+7));
    printf("\n%c",*(playerName+8));
    printf("\n%c",*(playerName+9));
    printf("\n%c",*(playerName+10));
    printf("\n%c",*(playerName+11));
    printf("\n%c",*(playerName+6));
    printf("\n%c",*(playerName+8));
    printf("\n%c",*(playerName+6));
    return 0;
}