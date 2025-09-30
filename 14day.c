#include <stdio.h>

int main() {
    int n, i;
    unsigned long long factorial = 1;  // Use long long to handle large results

    // Input a number
    printf("Enter a number: ");
    scanf("%d", &n);

    // Check for negative input
    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } 
    else {
        // Calculate factorial using a loop
        for (i = 1; i <= n; i++) {
            factorial *= i;
        }

        // Display the result
        printf("Factorial of %d = %llu\n", n, factorial);
    }

    return 0;
}