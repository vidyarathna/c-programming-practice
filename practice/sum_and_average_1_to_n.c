#include <stdio.h>

int main() {
    int n, i;
    int sum = 0;
    float average;

    printf("Enter the value of n:\n");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum = sum + i;
    }

    average = (float)sum / n;

    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", average);

    /*
    Time Complexity: O(n)
    Reason: Loop runs from 1 to n.

    Space Complexity: O(1)
    Reason: Only a few variables are used.
    */

    return 0;
}
