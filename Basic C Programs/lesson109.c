/*                              Parameter passing mechanism in C

a process transmitting of the value of a variable or address of a variable from one function to another function
is called as parameter passing mechanism .

There are two ways in which we can pass parameters from one function to another function 

1. PASS BY VALUE        or   CALL BY VALUE 
2. PASS BY REFERENCE    or   CALL BY REFERENCE 


Pass by value  or  call by value

- means while callling a function value of a variable 
- i.e. while calling a function vlaue of the actual parameter is copied into the formal parameter

Actual parameter - is a parameter which is passed while calling a function
Formal parameter - is a parameter which is writeen within a function definition



NOTE

 - while passing parameters by value ; actual parameter do not get affected 

    if we want to use the value of an actual parameter in some another function , then we take help of 
    pass by value 

    - if we want to modify the value of an actual parameter in some another function , then we take help
    of pass by reference

    */


//    #include<stdio.h>
   
//    void swap (int num1 , int num2) ;

//    int num1 = 1 , num2 = 2 ;

//    int main()
//    {
     

//      printf("Before swapping num 1 = %d and num2 = %d \n", num1, num2) ;
   
//      swap(num1,num2);

//     printf("After swapping num 1 = %d and num2 = %d \n", num1, num2) ;

//     return 0 ;
   
//    }
   

//    void swap (int num1, int num2)
//    {
//         int temp = num1 ;
//         num1 = num2  ;
//         num2 = temp ;

//         // formal parameters are getting swaped not actual parameters
//             // we use pass by reference method for swapping
//    }





   #include<stdio.h>
   
   void swap (int *num1 , int *num2) ;

   int num1 = 1 , num2 = 2 ;

   int main()
   {
     

     printf("Before swapping num 1 = %d and num2 = %d \n", num1, num2) ;
   
     swap(&num1,&num2);

    printf("After swapping num 1 = %d and num2 = %d \n", num1, num2) ;
   
   }
   

   void swap (int *num1, int *num2)
   {
        int temp = *num1 ;
        *num1 = *num2  ;
        *num2 = temp ;

   }        