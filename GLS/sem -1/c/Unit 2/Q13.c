#include <stdio.h>

int main() {
    int employee_id;
    char employee_name[50];
    char employee_dept[50];

    printf("Enter Employee ID: ");
    scanf("%d", &employee_id);

    printf("Enter Employee Name: ");
    scanf("%s", employee_name);

    printf("Enter Employee Department: ");
    scanf("%s", employee_dept);

    printf("Employee ID: %d\n", employee_id);
    printf("Employee Name: %s\n", employee_name);
    printf("Employee Department: %s\n", employee_dept);

    return 0;
}
