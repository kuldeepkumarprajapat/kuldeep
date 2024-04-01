#include <stdio.h>

int main() {
    int marks[5];
    int total = 0;
    float percentage;

    printf("Enter marks for 5 subjects:\n");
    for (int i = 0; i < 5; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%d", &marks[i]);
        total += marks[i];
    }

    percentage = (float)total / 5;

    printf("Total marks: %d\n", total);
    printf("Percentage: %.2f%%\n", percentage);

    return 0;
}
