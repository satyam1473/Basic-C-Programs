/*            Switch Case Statement  
    
    -when there is more then one alternative choice present , we use switch case     */

#include<stdio.h>
int main()
{
    //  programe to display an equivalent day name for a given day 

    int day = 0 ;
    printf("Enter the day value = ");
    scanf("%d",&day);
    switch (day)
    {
        case 1 :
            printf("Sunday\n");
            break;
        case 2 :
            printf("Monday\n");
            break;
        case 3 :
            printf("Tuesday\n");
            break;
        case 4 :
            printf("Wednesday\n");
            break;
        case 5 :
            printf("Thursday\n");
            break;
        case 6 :
            printf("Friday\n");
            break;
        case 7 :
            printf("Saturday\n");
            break;
        default :
            printf("Invalid\n");
            break;


    }
    printf("Outside Switch");

    return 0;
}    