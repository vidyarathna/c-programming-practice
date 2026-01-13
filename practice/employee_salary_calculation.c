#include <stdio.h>

#define HRA_RATE 0.10
#define DA_RATE  0.05

int main() {
    float basicPay, hra, da, salary;

    printf("Enter Basic Pay:\n");
    scanf("%f", &basicPay);

    hra = basicPay * HRA_RATE;
    da  = basicPay * DA_RATE;
    salary = basicPay + hra + da;

    printf("Basic Pay : %.2f\n", basicPay);
    printf("HRA (10%%) : %.2f\n", hra);
    printf("DA  (5%%) : %.2f\n", da);
    printf("Total Salary : %.2f\n", salary);

    /*
    Time Complexity: O(1)
    Reason: Fixed number of calculations.

    Space Complexity: O(1)
    Reason: Uses constant memory.
    */

    return 0;
}
