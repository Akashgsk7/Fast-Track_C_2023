#include <stdio.h>
#include <string.h>
#include <assert.h>

int main() {
    char input[10];

    printf("Enter a character or an integer (0-9): ");
    scanf("%s", input);

    // Check if the input is a character or an integer within the range 0-9

    assert(strlen(input) == 1); // Input should have length 1

    if (input[0] >= '0' && input[0] <= '9') 
    {
        printf("Input is an integer within the range 0-9.\n");
    } 
    else 
    {
        printf("Input is a character.\n");
    }

    return 0;
}