// File: count_vowels_in_text.c
// Description: Program to count the number of vowels in a given text

#include <stdio.h>

int main() {
    char text[200];
    int i, count = 0;

    // Step 1: Read text from user
    printf("Enter a line of text: ");
    fgets(text, sizeof(text), stdin);  // safer than gets()

    // Step 2: Loop through each character
    for (i = 0; text[i] != '\0'; i++) {
        char ch = text[i];

        // Step 3: Check if the character is a vowel
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            count++;
        }
    }

    // Step 4: Display the result
    printf("Number of vowels in the text: %d\n", count);

    return 0;
}
