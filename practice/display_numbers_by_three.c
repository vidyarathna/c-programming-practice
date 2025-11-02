// File: display_numbers_by_three.c
// Description: Program to read 10 integers and display them
// printing 3 numbers per line separated by commas

#include <stdio.h>

int main() {
    int numbers[10];
    int i;

    // Step 1: Read 10 integers
    printf("Enter 10 integers:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &numbers[i]);
    }

    // Step 2: Display numbers (3 per line)
    printf("\nOutput:\n");
    for (i = 0; i < 10; i++) {
        printf("%d", numbers[i]);  // print the number

        // Print comma if it's not the last in the line and not the last overall
        if ((i % 3 != 2) && (i != 9)) {
            printf(",");
        }

        // Print newline after every 3 numbers
        if ((i + 1) % 3 == 0) {
            printf("\n");
        }
    }

    return 0;
}
