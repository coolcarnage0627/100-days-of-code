#include <stdio.h>

int main() {
    int num, i, isPrime = 1; // Assume the number is prime

    // Input a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // 0 and 1 are not prime numbers
    if (num <= 1) {
        printf("%d is not a prime number.\n", num);
        return 0;
    }

    // Check divisibility from 2 to num/2
    for (i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            isPrime = 0; // Found a divisor, not prime
            break;
        }
    }

    // Display result
    if (isPrime)
        printf("%d is a prime number.\n", num);
    else
        printf("%d is not a prime number.\n", num);

    return 0;
}