#include <stdio.h>

int main() {
    char str[100], reversed[100];
    int i, length = 0, j = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    // Find length of string
    while (str[length] != '\0') {
        length++;
    }

    // Reverse the string
    for (i = length - 1; i >= 0; i--) {
        reversed[j] = str[i];
        j++;
    }
    reversed[j] = '\0';

    printf("Original string: %s\n", str);
    printf("Reversed string: %s\n", reversed);

    // Check if palindrome
    int isPalindrome = 1;
    for (i = 0; i < length; i++) {
        if (str[i] != reversed[i]) {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome)
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");

    return 0;
}
