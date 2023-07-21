#include <stdio.h>
#include <assert.h>

int main() {
    int n;
    unsigned int result;

    printf("Enter the value of n : ");
    scanf("%d", &n);

    // Assertion to check if N is non-negative
    assert(n >= 0);

    // Calculate 2^n using left shift operator
    result = 1 << n;

    printf("2^%d is: %u\n", n, result);

    return 0;
}