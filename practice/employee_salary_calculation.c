#include <stdio.h>

#define HRA_RATE 0.10
#define TA_RATE  0.05

int main() {
    float basicPay, hra, ta, salary;

    printf("Enter Basic Pay:\n");
    scanf("%f", &basicPay);

    hra = basicPay * HRA_RATE;
    da  = basicPay * TA_RATE;
    salary = basicPay + hra + ta;

    printf("Basic Pay : %.2f\n", basicPay);
    printf("HRA (10%%) : %.2f\n", hra);
    printf("TA  (5%%) : %.2f\n", ta);
    printf("Total Salary : %.2f\n", salary);

    /*
    Time Complexity: O(1)
    Reason: Fixed number of calculations.

    Space Complexity: O(1)
    Reason: Uses constant memory.
    */

    return 0;
}
