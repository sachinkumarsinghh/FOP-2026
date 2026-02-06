#include <stdio.h>

int main() {
    int num, i;

    // Input the number for the table
    printf("Enter a number to generate its multiplication table: ");
    scanf("%d", &num);

    printf("\nMultiplication Table of %d:\n", num);
    printf("---------------------------\n");

    // Loop from 1 to 10
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}