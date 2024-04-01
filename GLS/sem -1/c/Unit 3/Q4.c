
#include <stdio.h>

int main() {
    int n;
    printf("Enter the Number:- ");
    scanf("%d", &n);

    if (n % 2 == 0)
        printf("This is Prime...\n");
    else
        printf("This is not Prime...\n");
}
