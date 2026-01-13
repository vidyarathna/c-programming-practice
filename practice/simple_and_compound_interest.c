#include <stdio.h>
#include <math.h>

int main() {
    float principal, rate, time;
    int n;
    float simpleInterest, compoundInterest, amount;

    printf("Enter Principal Amount:\n");
    scanf("%f", &principal);

    printf("Enter Rate of Interest (in %%):\n");
    scanf("%f", &rate);

    printf("Enter Time (in years):\n");
    scanf("%f", &time);

    printf("Enter Number of times interest is compounded per year:\n");
    scanf("%d", &n);

    // Simple Interest calculation
    simpleInterest = (principal * rate * time) / 100;

    // Compound Interest calculation
    amount = principal * pow((1 + rate / (100 * n)), n * time);
    compoundInterest = amount - principal;

    printf("Simple Interest   : %.2f\n", simpleInterest);
    printf("Compound Interest : %.2f\n", compoundInterest);

    /*
    Time Complexity: O(1)
    Reason: Fixed number of arithmetic operations.

    Space Complexity: O(1)
    Reason: Constant memory usage.
    */

    return 0;
}
