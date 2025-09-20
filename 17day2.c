#include <stdio.h>

int main() {
    int num1, num2, gcd, lcm;

    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);

    int a = num1, b = num2;

    // Calculate GCD using Euclidean algorithm
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    gcd = a;

    // Calculate LCM using formula: LCM = (num1 * num2) / GCD
    lcm = (num1 * num2) / gcd;

    printf("GCD of %d and %d = %d\n", num1, num2, gcd);
    printf("LCM of %d and %d = %d\n", num1, num2, lcm);

    return 0;
}
