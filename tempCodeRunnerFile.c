#include <stdio.h>

// write a C program that finds the sum of those positive integers that divide a given positive integer evenly. You may assume that the user of your program will enter one positive integer.

int main(void) {
    int n, sum = 0;
    printf("This program finds the sum of\n those positive integers that divide\n a given positive integer evenly.")
    printf("Enter a positive integer : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }
    printf("The sum of those positive integers that are divisors of %d is %d.\n", n, sum);
    return 0;
}