//  break statement(s)

//  break statement is used to write efficient codes

#include<stdio.h>
int main()
{
    int i=0;
    
    for(i=1; i<6; i++)
    {
        if(i==3)
        {
            break;
        }
        printf("%d\n",i);
    }
    return 0;
}