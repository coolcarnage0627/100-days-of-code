#include <stdio.h>

int main() {
    int n, i;

    // Input the value of n
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Print numbers from 1 to n
    printf("Numbers from 1 to %d are:\n", n);
    for (i = 1; i <= n; i++) {
        printf("%d ", i);
    }

    printf("\n"); // For a clean newline at the end
    return 0;
}