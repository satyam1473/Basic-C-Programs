// Logical operators 
// && logical and operator 
// || logical  or operator
// !  logical not operator

#include<stdio.h>
int main()
{
    printf("\n%d",3>2 && 5>4);
    printf("\n%d",7>6 && 4>5);
    printf("\n%d",8<6 && 3>2);
    printf("\n%d",5>5 && 7>7);

    printf("\n\n");
    printf("\n%d",3>2 || 5>4);
    printf("\n%d",7>6 || 4>5);
    printf("\n%d",8<5 || 3>3);
    printf("\n%d",5>5 || 9>7);

    printf("\n\n");
    printf("\n%d",3<6);
    printf("\n%d",!(6>3));
    printf("\n%d",6);
    printf("\n%d",0);
    printf("\n%d",!5);
    printf("\n%d",!0);
    printf("\n%d",1);
    printf("\n%d",!1);
    return 0;
}