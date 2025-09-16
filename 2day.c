// Date: 16/09/2025
#include <stdio.h>

int main() {
    float length, breadth, area, perimeter; // Variables to store length, breadth, area, and perimeter

    // Prompt user for length
    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);

    // Prompt user for breadth
    printf("Enter the breadth of the rectangle: ");
    scanf("%f", &breadth);

    // Calculate area
    area = length * breadth;
    perimeter = 2 * (length + breadth);

    // Display the results
    printf("\nArea of the rectangle = %.2f\n", area);
    printf("Perimeter of the rectangle = %.2f\n", perimeter);

    return 0;
}
