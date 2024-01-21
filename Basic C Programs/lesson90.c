//   Operation on pointers :

//      Valid Operations that can be performed on a Pointer are 
        // 1.  Assignment Operations
        // 2.  Increment & Decrement Operations
        // 3.  Addition & Subtraction Operations
        // 4.  Comparision Operations 


/* 1.  Assignment Operations

    If two pointers are of same type , they can be assigned to one another  */


    #include<stdio.h>
    int main()
    {
        int a = 11 ;
        int *ptr1 = NULL ; 
        int *ptr2 = NULL ;

        ptr1 = &a ;

        ptr2 = ptr1 ;

        printf("%d\n",a);
        printf("%d\n\n",&a);

        printf("%d\n",ptr1);
        printf("%d\n",&ptr1);
        printf("%d\n\n",*ptr1);

        printf("%d\n",ptr2);
        printf("%d\n",&ptr2);
        printf("%d\n",*ptr2);


    }

