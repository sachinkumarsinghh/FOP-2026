#include <stdio.h>

int main() {
    int m1, m2, m3, m4, m5;
    int total;
    float percentage;

    // 1. Input marks
    printf("Enter marks for five subjects: ");
    scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);

    // 2. Check for failure (Less than 40 in any subject)
    if (m1 < 40 || m2 < 40 || m3 < 40 || m4 < 40 || m5 < 40) {
        printf("Result: FAIL\n");
        printf("Reason: Scored less than 40 in one or more subjects.\n");
    } 
    else {
        // 3. Calculate Total and Percentage
        total = m1 + m2 + m3 + m4 + m5;
        percentage = total / 5.0;

        printf("\nTotal Marks = %d\n", total);
        printf("Percentage = %.2f%%\n", percentage);
        printf