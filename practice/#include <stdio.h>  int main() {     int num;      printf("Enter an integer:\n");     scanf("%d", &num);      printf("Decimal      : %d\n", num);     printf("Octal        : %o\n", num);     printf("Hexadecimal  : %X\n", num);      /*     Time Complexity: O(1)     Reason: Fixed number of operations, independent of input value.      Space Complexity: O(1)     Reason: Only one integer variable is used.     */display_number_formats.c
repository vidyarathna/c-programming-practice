#include <stdio.h>

int main() {
    int num;

    printf("Enter an integer:\n");
    scanf("%d", &num);

    printf("Decimal      : %d\n", num);
    printf("Octal        : %o\n", num);
    printf("Hexadecimal  : %X\n", num);

    /*
    Time Complexity: O(1)
    Reason: Fixed number of operations, independent of input value.

    Space Complexity: O(1)
    Reason: Only one integer variable is used.
    */

    return 0;
}
