#include <stdio.h>

int main() {
    float base_salary, da, hra, pf, gross_salary;

    // Input basic salary, dearness allowance, house rent allowance, and provident fund
    printf("Enter basic salary: ");
    scanf("%f", &base_salary);

    printf("Enter dearness allowance (DA): ");
    scanf("%f", &da);

    printf("Enter house rent allowance (HRA): ");
    scanf("%f", &hra);

    printf("Enter provident fund (PF): ");
    scanf("%f", &pf);

    gross_salary = base_salary + da + hra - pf;

    printf("Gross Salary: %.2f\n", gross_salary);

    return 0;
}
