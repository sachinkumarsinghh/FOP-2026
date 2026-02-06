#include <stdio.h>
int main() {
    int num, original_num, remainder, result = 0;
    printf("Enter a three-digit integer: ");
    scanf("%d", &num);

    original_num = num;

    // 2. Loop to calculate the sum of cubes of digits
    while (num != 0) {
        // remainder contains the last digit
        remainder = num % 10;
        result += remainder * remainder * remainder;
        num /= 10;
    }

     
    if (result == original_num)
        printf("%d is an Armstrong number.\n", original_num);
    else
        printf("%d is not an Armstrong number.\n", original_num);

    return 0;
}