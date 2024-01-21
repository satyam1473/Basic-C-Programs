/*              typedf  statement 

    - typedf statement allows us to define an alternative name to any data type 
    - typedf statement is mainly used to minimize typing data type names

    Syntax :

    typedf   current_data_type_name    alternative_name ;

    e.g 

    typedf      unsigned int     uint ;

    NOTE - Once we define an alternative name to any data type ; variabled , constants,
            arrays etc can be declared with the new alternative name 

*/

/* //-----------------------------------------------------------------------------------------------

#include<stdio.h>
int main()
{
    typedef unsigned int uint ;

    uint num1 = 10, num2 = 20, sum = num1 + num2 ;
    

    printf("%u \n",sum);        // 30
}

*/

// -----------------------------------------------------------------------------------------------

// #include<stdio.h>
// int main()
// {
//     struct Date
//     {
//         int day ;
//         int month;
//         int year;
//     } ;

//     struct Date date1 ={1,1,2001};
//     struct Date date2 ={2,2,2001};
//     struct Date date3 ={3,3,2001};

//     printf("%d-%d-%d\n",date1.day,date1.month,date1.year);
//     printf("%d-%d-%d\n",date2.day,date2.month,date2.year);
//     printf("%d-%d-%d\n",date3.day,date3.month,date3.year);

//     return 0;
    
// }



//-------------------------------------------------------------------------------------------------



#include<stdio.h>
int main()
{
    typedef struct Date 
    {
        int day ;
        int month;
        int year;
    } DATE ;

    //  typedef struct Date DATE ;             // another method 

    DATE date1 ={1,1,2001};
    DATE date2 ={2,2,2001};
    DATE date3 ={3,3,2001};

    printf("%d-%d-%d\n",date1.day,date1.month,date1.year);
    printf("%d-%d-%d\n",date2.day,date2.month,date2.year);
    printf("%d-%d-%d\n",date3.day,date3.month,date3.year);

    return 0;
    
}




