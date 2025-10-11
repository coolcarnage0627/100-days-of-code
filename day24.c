#include <stdio.h>

int main() {
    int i, j;

    // Outer loop for rows
    for(i = 1; i <= 5; i++) {
        // Inner loop for columns (stars in each row)
        for(j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n"); // Move to next row
    }

    return 0;
}