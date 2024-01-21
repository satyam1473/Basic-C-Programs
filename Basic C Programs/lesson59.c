//          continue statement in while loop

/*

#include<stdio.h>
int main()
{
    int i = 1 ;

    while (i<6)
    {
        if(i==3)
        {
            continue;
        }
        
        printf("%d\n",i) ;
        i ++ ;
    }

return 0 ;
}

*/

// the given upper code is in infinite loop formation 



// 2nd code without infinte loop

/*

#include<stdio.h>
int main()
{
    int i = 0 ;
    while(i<5)
    {
        i++ ;

        if(i==3)
        {
            continue;
        }
        printf("%d\n", i);
    }
    return 0 ;
}


*/

// 3rd code is displying using do while loop


#include<stdio.h>
int main()
{
    int i = 0 ;
    do
    {
        i++ ;

        if(i==3)
        {
            continue;
        }
        printf("%d\n", i);
    }
    while(i<5) ;

    return 0 ;
}
