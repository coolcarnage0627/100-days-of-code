#include <stdio.h>

int main() {
    int matrix[3][3], i, j, sum = 0;

    printf("Enter elements of 3x3 matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < 3; i++) {
        sum += matrix[i][i];
    }

    printf("Sum of diagonal elements: %d\n", sum);

    return 0;
}
