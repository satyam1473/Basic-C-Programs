// else if ladder 
// - helps us to check multiole conditional operators


// program to display equivalent day name for given day number using else if ladder statement

#include<stdio.h>
int main()
{
    int day = 0 ;

    printf("\nEnter the day = ");
    scanf("%d",&day) ;

    if (day==1)
    {
        printf("Sunday\n");
    
    }
        else if (day==2)
        {
        printf("Monday\n");

        }
            else if(day==3)
            {
                printf("Tuesday\n");
            }
                else if (day==4)
                {
                    printf("Wednesday\n");

                }
                    else if(day==5)
                    {
                        printf("Thursday\n");
                    }
                        else if(day==6)
                        {
                            printf("Friday\n");
                        }
                            else if (day==7)
                            {
                                printf("Saturday\n");
                            }

                            else
                            {
                                printf("Invalid Day");
                            }

                            return 0;
}