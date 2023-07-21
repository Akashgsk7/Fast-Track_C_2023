#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int main() {
    char char1, char2;

    printf("Enter the first character : ");
    scanf(" %c", &char1);

    printf("Enter the second character : ");
    scanf(" %c", &char2);

    // Assertions to check valid character inputs
    assert(char1 >= 0 && char1 <= 127);
    assert(char2 >= 0 && char2 <= 127);

    // Calculating the number of characters between char1 and char2
    int charDiff = abs(char2-char1)-1;

    printf("Number of characters between %c and %c is: %d\n", char1, char2, charDiff);

    return 0;
}