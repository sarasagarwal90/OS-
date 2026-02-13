#include <stdio.h>

int main() {
    int num, reverse = 0, remainder;

    printf("Enter an integer: ");
    scanf("%d", &num);

    while (num != 0) {
        remainder = num % 10;        // Get last digit
        reverse = reverse * 10 + remainder; // Add digit to reversed number
        num = num / 10;              // Remove last digit
    }

    printf("Reversed number: %d\n", reverse);

    return 0;
}

