#include <stdio.h>

int main() {
    float a, b, c, sum;

    printf("Enter three floating point numbers:\n");
    scanf("%f %f %f", &a, &b, &c);

    sum = a + b + c;

    printf("Sum = %.2f\n", sum);

    /*
    Time Complexity: O(1)
    Reason: Fixed number of arithmetic and I/O operations.

    Space Complexity: O(1)
    Reason: Uses a constant number of variables.
    */

    return 0;
}
