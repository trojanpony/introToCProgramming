// write a C program that
//     accepts, as input, an integer value which we will call N
//     if N is not positive (i.e., is not greater than zero), the program prints …
//         Sorry, no calculation is performed when the input is not positive.
//     if N is positive (i.e., is greater than zero), the program prints …
//         the sum of those positive integers that are ≤ N and that are multiples of 5 or of 7
#include <stdio.h>

int main(void)
{
    int i;
    int sum;
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    if (n <= 0)
    {
        printf("Sorry, no calculation is performed when the input is not positive.\n");
    }
    else
    {
        for (i = 1; i <= n; i++)
        {
            if (i % 5 == 0 || i % 7 == 0 || (i % 5 == 0 && i % 7 == 0))
            {
                printf("%d\n", i);
                sum += i;

            }
        }
        printf("The sum of those positive integers less than %d and that are multiples of 5, or of 7, or of both 5 and 7 is %d.\n", n, sum);
    }
    return 0;
}