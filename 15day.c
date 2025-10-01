#include <stdio.h>

int main() {
    int num, original, reversed = 0, remainder;

    // Input a number
    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;  // Store the original number

    // Reverse the number
    while (num != 0) {
        remainder = num % 10;          // Get last digit
        reversed = reversed * 10 + remainder; // Build reversed number
        num /= 10;                     // Remove last digit
    }

    // Check if the original and reversed numbers are the same
    if (original == reversed) {
        printf("%d is a palindrome.\n", original);
    } else {
        printf("%d is not a palindrome.\n", original);
    }

    return 0;
}