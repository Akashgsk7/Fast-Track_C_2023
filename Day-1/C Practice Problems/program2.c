#include <stdio.h>

#define PI 3.14159

int main() {
    float r, area;

    printf("Enter the radius of the circle : ");
    scanf("%f", &r);

    // Formula to calculate the area of the circle
    area = PI * r * r;

    printf("The area of the circle is: %lf\n", area);

    return 0;
}