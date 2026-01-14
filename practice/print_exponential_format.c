#include <stdio.h>

int main() {
    double num;

    printf("Enter a floating-point number:\n");
    scanf("%lf", &num);

    printf("Two decimal places   : %.2e\n", num);
    printf("Four decimal places  : %.4e\n", num);
    printf("Eight decimal places : %.8e\n", num);

    /*
    Time Complexity: O(1)
    Reason: Fixed number of formatting operations.

    Space Complexity: O(1)
    Reason: Only one variable is used.
    */

    return 0;
}
