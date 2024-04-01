#include <stdio.h>

int main() {
    int num1 = 10;   
    int num2 = 5;   
    int result;

    printf("num1 = %d (Binary: 1010), num2 = %d (Binary: 0101)\n", num1, num2);


    result = num1 & num2;
    printf("Bitwise AND: %d & %d = %d (Binary: %04b)\n", num1, num2, result, result);


    result = num1 | num2;
    printf("Bitwise OR: %d | %d = %d (Binary: %04b)\n", num1, num2, result, result);

    result = num1 ^ num2;
    printf("Bitwise XOR: %d ^ %d = %d (Binary: %04b)\n", num1, num2, result, result);


    result = ~num1;
    printf("Bitwise NOT: ~%d = %d (Binary: %04b)\n", num1, result, result);

    result = num1 << 2;  
    printf("Bitwise left shift: %d << 2 = %d (Binary: %04b)\n", num1, result, result);

    result = num1 >> 2;  
    printf("Bitwise right shift: %d >> 2 = %d (Binary: %04b)\n", num1, result, result);

    return 0;
}
