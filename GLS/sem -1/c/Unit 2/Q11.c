#include <stdio.h>

int main() {
    int rollNumber;
    char studentName[50];

    printf("Enter roll number: ");
    scanf("%d", &rollNumber);

    while (getchar() != '\n');

    printf("Enter student name: ");
    fgets(studentName, sizeof(studentName), stdin);

    printf("Roll Number: %d\n", rollNumber);
    printf("Student Name: %s", studentName);

    return 0;
}
