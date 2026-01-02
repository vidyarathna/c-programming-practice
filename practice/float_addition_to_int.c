#include <stdio.h>

int main() {
    float num1, num2;
    int result;

    printf("Enter two floating point numbers:\n");
    scanf("%f %f", &num1, &num2);

    result = num1 + num2;  // decimal part is truncated

    printf("First float value  : %.2f\n", num1);
    printf("Second float value : %.2f\n", num2);
    printf("Integer result     : %d\n", result);

    return 0;
}
