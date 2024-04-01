#include <stdio.h>

int main() {
    int num1 = 10;
    int num2 = 5;

    int sum = num1 + num2;
    printf("Addition: %d + %d = %d\n", num1, num2, sum);

    int difference = num1 - num2;
    printf("Subtraction: %d - %d = %d\n", num1, num2, difference);

    int product = num1 * num2;
    printf("Multiplication: %d * %d = %d\n", num1, num2, product);

    int quotient = num1 / num2;
    printf("Division: %d / %d = %d\n", num1, num2, quotient);

    int remainder = num1 % num2;
    printf("Modulus: %d %% %d = %d\n", num1, num2, remainder);

    return 0;
}
