#include <stdio.h>

int main() {
    int n, i, sum = 0;

    // Input the value of n
    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    // Calculate sum of first n odd numbers
    for (i = 1; i <= n; i++) {
        sum += (2 * i - 1);  // Formula for the i-th odd number
    }

    // Display the result
    printf("The sum of the first %d odd numbers is: %d\n", n, sum);

    return 0;
}