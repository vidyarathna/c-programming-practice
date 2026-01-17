#include <stdio.h>

float add(float *a, float *b) {
    return (*a + *b);
}

int main() {
    float x, y, sum;

    printf("Enter two floating point numbers:\n");
    scanf("%f %f", &x, &y);

    sum = add(&x, &y);

    printf("Sum = %.2f\n", sum);

    /*
    Time Complexity: O(1)
    Reason: Single function call and addition.

    Space Complexity: O(1)
    Reason: Constant number of variables and pointers.
    */

    return 0;
}
