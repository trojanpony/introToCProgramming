#include <stdio.h>

// Write a C program that …

//     accepts two decimal integer values as input
//     prints a sentence describing the sum of the input values in two ways …
//         expressed in decimal
//         expressed in octal

int main(void)
{
    int a, b;
    printf("Enter the first decimal integer value :\n");
    scanf("%d", &a);
    printf("Enter the second decimal integer value : \n");
    scanf("%d", &b);
    printf("In decimal, we would say that the sum of %d and %d is %d.\n", a, b, a + b);
    printf("In octal, we would say that the sum of %#d and %#d is %#o.\n", a, b, a + b);
    printf("In hexadecimal, we would say that the sum of %#X and %#X is %#x.\n", a, b, a + b);
    return 0;
}