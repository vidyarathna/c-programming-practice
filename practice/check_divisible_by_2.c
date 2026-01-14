#include <stdio.h>

int isDivisibleBy2(int n) {
    if (n % 2 == 0)
        return 1;
    else
        return 0;
}

int main() {
    int num;

    printf("Enter an integer:\n");
    scanf("%d", &num);

    if (isDivisibleBy2(num))
        printf("The number is divisible by 2.\n");
    else
        printf("The number is not divisible by 2.\n");

    /*
    Time Complexity: O(1)
    Reason: Single modulo operation.

    Space Complexity: O(1)
    Reason: Uses a constant number of variables.
    */

    return 0;
}
