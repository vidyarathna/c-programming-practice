// File: count_and_sum_even_1_to_200.c
// Description: Program to count and find the sum of even numbers between 1 and 200

#include <stdio.h>

int main() {
    int i, count = 0, sum = 0;

    // Loop from 1 to 200
    for (i = 1; i <= 200; i++) {
        // Check if the number is even
        if (i % 2 == 0) {
            count++;        // Increment count
            sum += i;       // Add even number to sum
        }
    }

    // Display results
    printf("Count of even numbers between 1 and 200: %d\n", count);
    printf("Sum of even numbers between 1 and 200: %d\n", sum);

    return 0;
}
