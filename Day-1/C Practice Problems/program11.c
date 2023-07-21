#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>

int main() {
    // Seed the random number generator with the current time
    srand(time(NULL));

    // Generate two random numbers between 1 and 100
    int num1 = rand() % 100 + 1;
    int num2 = rand() % 100 + 1;

    // Calculate the sum of the two random numbers
    int sum = num1 + num2;

    // Print the random numbers and their sum
    printf("Random Number 1: %d\n", num1);
    printf("Random Number 2: %d\n", num2);
    printf("Sum: %d\n", sum);

    // Verify that the sum is correct
    assert(sum == num1 + num2);

    return 0;
}