#include <stdio.h>

int main() {
    int i;
    
    printf("Prime numbers between 1 and 50:\n");
    
    for (i = 2; i <= 50; i++) {
        int isPrime = 1;
        int j;
        
        for (j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }
        
        if (isPrime) {
            printf("%d ", i);
        }
    }
    
    printf("\n");
    return 0;
}
