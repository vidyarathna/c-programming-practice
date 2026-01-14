#include <stdio.h>

float areaTriangle(float base, float height) {
    return 0.5 * base * height;
}

int main() {
    float base, height, area;

    printf("Enter base and height:\n");
    scanf("%f %f", &base, &height);

    area = areaTriangle(base, height);

    printf("Area of the triangle: %.2f\n", area);

    /*
    Time Complexity: O(1)
    Reason: Fixed number of arithmetic operations.

    Space Complexity: O(1)
    Reason: Constant number of variables.
    */

    return 0;
}
