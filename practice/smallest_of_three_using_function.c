#include <stdio.h>

int smallest(int x, int y, int z) {
    if (x <= y && x <= z)
        return x;
    else if (y <= x && y <= z)
        return y;
    else
        return z;
}

int main() {
    int a, b, c, result;

    printf("Enter three integers:\n");
    scanf("%d %d %d", &a, &b, &c);

    result = smallest(a, b, c);

    printf("Smallest number: %d\n", result);

    /*
    Time Complexity: O(1)
    Reason: Fixed number of comparisons.

    Space Complexity: O(1)
    Reason: Constant number of variables.
    */

    return 0;
}
