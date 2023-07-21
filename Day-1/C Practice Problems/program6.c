#include <stdio.h>
#include <assert.h>

int main() {
    float c,f;

    printf("Enter temperature in Celsius : ");
    scanf("%f", &c);

    // Assertion to check if Celsius temperature is within a reasonable range
    assert(c >= -273.15); // Absolute zero-the lowest possible temperature

    // Formula to convert Celsius to Fahrenheit
    f = (c * 9 / 5) + 32;

    printf("Temperature in Fahrenheit : %.2f\n", f);

    return 0;
}