#include <stdio.h>

int main() {
    char item[50];
    int quantity;
    float price, amount;

    printf("Enter item name:\n");
    fgets(item, sizeof(item), stdin);

    printf("Enter quantity:\n");
    scanf("%d", &quantity);

    printf("Enter price per unit:\n");
    scanf("%f", &price);

    amount = quantity * price;

    printf("\n*************** BILL ***************\n");
    printf("Item            Quantity    Price     Amount\n");
    printf("--------------------------------------------\n");
    printf("%-15s %8d %10.2f %10.2f\n", item, quantity, price, amount);
    printf("--------------------------------------------\n");
    printf("Total Amount to be Paid: %.2f\n", amount);
    printf("--------------------------------------------\n");

    /*
    Time Complexity: O(1)
    Reason: Fixed number of operations for one item.

    Space Complexity: O(1)
    Reason: Uses constant memory.
    */

    return 0;
}
