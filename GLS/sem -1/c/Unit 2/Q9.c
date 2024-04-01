#include <stdio.h>

int main() {
    int num1, num2, num3, num4, num5;
    float average;

    printf("Enter five numbers, separated by spaces:\n");
    scanf("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);

    average = (float)(num1 + num2 + num3 + num4 + num5) / 5;

    printf("Average of the five numbers: %.2f\n", average);

    return 0;
}
