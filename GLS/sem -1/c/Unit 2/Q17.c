#include <stdio.h>

int main() {
    int num1 = 5;
    int num2 = 10;

    printf("Initial values: num1 = %d, num2 = %d\n", num1, num2);
    
    ++num1;
    printf("After prefix increment (++num1): num1 = %d, num2 = %d\n", num1, num2);

    --num2;
    printf("After prefix decrement (--num2): num1 = %d, num2 = %d\n", num1, num2);

    num1 = 5;
    num2 = 10;

    printf("Initial values: num1 = %d, num2 = %d\n", num1, num2);

    num1++;
    printf("After postfix increment (num1++): num1 = %d, num2 = %d\n", num1, num2);

    num2--;
    printf("After postfix decrement (num2--): num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}
