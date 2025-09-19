
#include <stdio.h>

int main() {
    int num; // Variable to store the integer input

    // Prompt user for input
    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("%d is even.\n", num);
    } else {
        printf("%d is odd.\n", num);
    }

    return 0;
}
