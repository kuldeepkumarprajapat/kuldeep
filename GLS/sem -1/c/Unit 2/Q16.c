#include <stdio.h>

int main() {
    int intVar;
    float floatVar;

    printf("Enter an integer: ");
    scanf("%d", &intVar);

    floatVar = (float)intVar;

    printf("Float value of %d is %.2f\n", intVar, floatVar);

    return 0;
}
