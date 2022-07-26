// program that takes (following argv[0]) either zero command-line arguments or one command-line argument. If there is one command-line argument following argv[0], it is interpreted as the name of a text file. If there is no argument following argv[0], then standard input (stdin) is to be used for input. Assuming that the input consists entirely of integers, have your program calculate the sum of those odd integers that precede the first even integer or follow the last even integer. You may assume that there is at least one even integer in the file.

#include <stdio.h>

int main(int argc, char *argv[]) {
    if (argc == 1) {
        int sum = 0;
        int num;
        while (scanf("%d", &num) == 1) {
            if (num % 2 != 0) {
                sum += num;
            }
            else if (num % 2 == 0) {
                break;
            }
        }
        printf("%d\n", sum);
    } else {
        FILE *file = fopen(argv[1], "r");
        int sum = 0;
        int num;
        while (scanf("%d", &num) == 1) {
            if (num % 2 != 0) {
                sum += num;
            }
            else if (num % 2 == 0) {
                break;
            }
        printf("%d\n", sum);
        fclose(file);
    }
}