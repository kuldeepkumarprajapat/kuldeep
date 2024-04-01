#include <stdio.h>

int main() {
    char charVar;
    int intVar;

    printf("Enter a character: ");
    scanf(" %c", &charVar);

    intVar = (int)charVar;

    printf("Integer value of %c is %d\n", charVar, intVar);

    return 0;
}
