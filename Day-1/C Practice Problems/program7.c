#include <stdio.h>
#include <assert.h>

int main() {
    int n;

    printf("Enter an integer: ");
    scanf("%d", &n);

    // Assertion to check if the entered number is an integer
    assert(n == (int)n);

    // Check if the number is even or odd
    if (n % 2 == 0) 
    {
        printf("%d is an even number \n", n);
    }
     
    else 
    {
        printf("%d is an odd number \n", n);
    }

    return 0;
}