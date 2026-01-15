#include <stdio.h>

int main() {
    char ch;

    while (1) {
        printf("\nEnter a character (* to stop): ");
        scanf(" %c", &ch);   // space before %c ignores newline

        if (ch == '*')
            break;

        printf("Character: %c\n", ch);
        printf("ASCII value: %d\n", ch);

        if (ch >= 'a' && ch <= 'z') {
            printf("Uppercase: %c\n", ch - 32);
        } 
        else if (ch >= 'A' && ch <= 'Z') {
            printf("Lowercase: %c\n", ch + 32);
        } 
        else {
            printf("No case change: %c\n", ch);
        }
    }

    /*
    Time Complexity: O(n)
    Reason: Each character entered is processed once until '*' appears.

    Space Complexity: O(1)
    Reason: Uses only one character variable.
    */

    return 0;
}
