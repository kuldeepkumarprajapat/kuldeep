#include <stdio.h>
#include <math.h>

int main() {
    double radius, area, circumference;
    const double PI = 3.14159265359;


    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);

    area = PI * pow(radius, 2);
    circumference = 2 * PI * radius;

    printf("Area of the circle: %.2lf square units\n", area);
    printf("Circumference of the circle: %.2lf units\n", circumference);

    return 0;
}
