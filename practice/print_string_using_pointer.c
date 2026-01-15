#include <stdio.h>

int main() {
    char str[] = "programing in C is fun";
    char *ptr = str;

    while (*ptr != '\0') {
        printf("%c", *ptr);
        ptr++;
    }

    /*
    Time Complexity: O(n)
    Reason: Each character in the string is printed once.

    Space Complexity: O(1)
    Reason: Only one pointer variable is used.
    */

    return 0;
}
