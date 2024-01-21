//                  type casting operators

//    implicit type casting (coercion)    :  done by compiler
//
//        - smaller data tyoe values are automatically converted to larger data type values
//       -  non precision data type values are automatically converted to precision data tyoe values
//
//    explicit type casting (conversion)  :  done by programer
//
//         - while evaluating an expression , if required we can convert one type of data value to another type
//            explicitly , which is called explicit type casting .

#include<stdio.h>
int main()
{
    // implicit

    printf("\n %d",'A'+1);
     printf("\n %d",'a'+1);

     // explicit 

     printf("\n%d",5/2);
     printf("\n%f",5/2);
     printf("\n%f",5/(float)2);
     printf("\n%f",(float)5/2);
     printf("\n%f",(float)(5/2));
      


    return 0;
}

