#include <stdio.h>

int main() {
    int num1 = 10;
    int num2 = 5;

    printf("Initial values: num1 = %d, num2 = %d\n", num1, num2);

    num1 = 15;
    printf("After assignment: num1 = %d\n", num1);

    num1 += num2;
    printf("After addition assignment: num1 = %d\n", num1);

    num1 -= num2;
    printf("After subtraction assignment: num1 = %d\n", num1);

    num1 *= num2;
    printf("After multiplication assignment: num1 = %d\n", num1);

    num1 /= num2;
    printf("After division assignment: num1 = %d\n", num1);

    return 0;
}
