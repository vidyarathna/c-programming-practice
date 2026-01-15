#include <stdio.h>

int main() {
    char ch;
    int ascii;

    printf("Enter a character:\n");
    scanf(" %c", &ch);

    ascii = (int)ch;

    if (ascii >= 48 && ascii <= 57) {
        printf("It is a number.\n");
    } else {
        printf("It is a character.\n");

        if (ascii >= 65 && ascii <= 90)
            printf("It is an uppercase letter.\n");
        else if (ascii >= 97 && ascii <= 122)
            printf("It is a lowercase letter.\n");
        else
            printf("It is not an alphabetic character.\n");
    }

    printf("ASCII value: %d\n", ascii);

    /*
    Time Complexity: O(1)
    Reason: Fixed number of comparisons.

    Space Complexity: O(1)
    Reason: Only one character and one integer used.
    */

    return 0;
}
