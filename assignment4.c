#include <stdio.h>

int main() {
    float basic_pay, hra, ta, gross_salary, prof_tax, net_salary;

     
    printf("Enter Basic Pay: ");
    scanf("%f", &basic_pay);

     
    hra = basic_pay * 0.10;      // 10% of Basic
    ta = basic_pay * 0.05;       // 5% of Basic
    gross_salary = basic_pay + hra + ta;
    prof_tax = gross_salary * 0.02;
    net_salary = gross_salary - prof_tax;
    printf("Basic Pay:      %.2f\n", basic_pay);