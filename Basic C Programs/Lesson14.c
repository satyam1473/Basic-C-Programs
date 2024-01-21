//  PRECISION OF FLOAT DATA TYPES
#include<stdio.h>
#include<float.h>
#include<limits.h>
int main()
{

    printf("\n float precision is = %i",FLT_DIG);
    printf("\n double precision is = %i",DBL_DIG);
    printf("\n long double precision is = %i",LDBL_DIG);

    printf("\n\n\n");

    // RANGE OF DATA TYPES

    printf("\n char min = %i",CHAR_MIN);
    printf("\n char max = %i",CHAR_MAX);
    printf("\n signed char min = %i", SCHAR_MIN);
    printf("\n signed char max = %i",SCHAR_MAX);
    printf("\n unsigned char MAX = %i",UCHAR_MAX);

    printf("\n\n");

    printf("int min = %i",INT_MIN);
    printf("\n int max = %i", INT_MAX);
    printf("\n unsigned int max = %u",UINT_MAX);

    printf("\n\n");

    printf("\nshort int min = %i ",SHRT_MIN);
    printf("\nshort int max = %i",SHRT_MAX);
    printf("\nunsigned short int max = %u",USHRT_MAX);

    return 0;
}