
#include <stdio.h>
#include <math.h>


unsigned long int f ( unsigned long int N ) 
{
    int i;
    float tmp;

    float n1 = (1 + sqrt(5)) / 2 ;
    float n2 = (1 - sqrt(5)) / 2 ;

    for ( i = 0 ; i <= N; i++ ) 
    {
        tmp = (pow(n1, i) - pow(n2, i)) / sqrt(5) ;
        printf("%.0f ", round(tmp)) ;
    }

    printf("\n") ; 
    return tmp;
}