#include <stdio.h>

int main() {

    // B pattern
    printf("BBBBB\n");
    printf("B    B\n");
    printf("BBBBB\n");
    printf("B    B\n");
    printf("BBBBB\n");

    printf("\n");

    // Y pattern
    printf("Y   Y\n");
    printf(" Y Y\n");
    printf("  Y\n");
    printf("  Y\n");
    printf("  Y\n");

    printf("\n");

    // E pattern
    printf("EEEEE\n");
    printf("E\n");
    printf("EEEEE\n");
    printf("E\n");
    printf("EEEEE\n");

    /*
    Time Complexity: O(1)
    Reason: Fixed number of printf statements, no input dependency.

    Space Complexity: O(1)
    Reason: No variables or dynamic memory used.
    */

    return 0;
}
