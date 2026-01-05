#include <stdio.h>

int main() {
    float num;
    int integerPart, rightmostDigit;

    printf("Enter a floating-point number:\n");
    scanf("%f", &num);

    // Truncate decimal part by type conversion
    integerPart = (int)num;

    // Handle negative numbers
    if (integerPart < 0) {
        integerPart = -integerPart;
    }

    // Extract rightmost digit
    rightmostDigit = integerPart % 10;

    printf("Rightmost digit of the integral part: %d\n", rightmostDigit);

    /*
    Time Complexity: O(1)
    Reason: Fixed number of operations regardless of input value.

    Space Complexity: O(1)
    Reason: Uses a constant amount of memory.
    */

    return 0;
}
