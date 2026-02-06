#include <stdio.h>

int main() {
    int year;

    // Input the year
    printf("Enter a year: ");
    scanf("%d", &year);

    // Leap year logic using if-else
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
        printf("%d is a Leap Year\n", year);
    } 
    else
     {
        printf("%d is Not a Leap Year\n", year);
    }

    return 0;
}