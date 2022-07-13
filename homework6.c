// Within file Exercise_02.c, write a C program that accepts two integer values as input, a and b. The program then on one line prints column headings a, b, (a/b)*b, a - (a/b)*b, and a%b, and on the following line prints the corresponding values.

#include <stdio.h>

int main(void)
{
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    printf("a\tb\ta/b\t(a/b)*b \t a-(a/b)*b\ta%b\n");
    printf("----------  ----------  ----------  ----------  ----------  ----------");
    printf("%d\t%d\t%d\t%d\t%d\t%d\n", a, b, a/b, (a/b)*b, a-(a/b)*b, a%b);
    return 0;
}

