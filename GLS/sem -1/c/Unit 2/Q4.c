#include <stdio.h>

int main() {
    float length, width, side, area_rectangle, area_square;

    // Input length and width for rectangle
    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);

    printf("Enter the width of the rectangle: ");
    scanf("%f", &width);


    printf("Enter the side length of the square: ");
    scanf("%f", &side);

    area_rectangle = length * width;
    area_square = side * side;

    printf("Area of the rectangle: %.2f square units\n", area_rectangle);
    printf("Area of the square: %.2f square units\n", area_square);

    return 0;
}
