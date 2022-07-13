// Write a program that accepts an input as miles and converts it to kilometers.
#include <stdio.h>

int main (void)
{
    float miles, kilometers;
    printf("Enter miles: ");
    scanf("%f", &miles);
    kilometers = miles * 1.609;
    printf("%f miles is %f kilometers.\n", miles, kilometers);
    return 0;
}