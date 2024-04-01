#include <stdio.h>

int main() {
    int num1 = 10;
    int num2 = 5;

    printf("num1 = %d, num2 = %d\n", num1, num2);
    
    if (num1 > 0 && num2 > 0) {
        printf("Both num1 and num2 are positive.\n");
    } else {
        printf("At least one of num1 and num2 is not positive.\n");
    }


    if (num1 > 0 || num2 > 0) {
        printf("At least one of num1 and num2 is positive.\n");
    } else {
        printf("Both num1 and num2 are not positive.\n");
    }


    if (!(num1 > 0)) {
        printf("num1 is not positive.\n");
    } else {
        printf("num1 is positive.\n");
    }

    return 0;
}
