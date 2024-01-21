//                  continue statement 

//          continue statemtnt in for loop

#include<stdio.h>
int main()
{
    int i = 0;
    
    for ( i=1 ; i<6 ; i++)
    {
        if (i==3)
        {
            continue ;              // in for loop continue transfers the control to
                                    // increment / decrement operator
        }
        printf("%d\n",i);
    }
return 0 ;
}


 



