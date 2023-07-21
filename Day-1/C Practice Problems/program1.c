#include <stdio.h>
#include <ctype.h>
#include <assert.h>

int main() {
    char a;

    printf("Enter an uppercase character : ");
    scanf(" %c", &a);

    // To check if the input is an uppercase character
    assert(isupper(a));

    // Convert uppercase character to lowercase
    char lowercase = tolower(a);
    printf("Lowercase is : %c\n", lowercase);

    return 0;
}