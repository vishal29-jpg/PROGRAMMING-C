#include <stdio.h>

int main() {
    int number, originalNumber, reversedNumber = 0, remainder;

    // Input number from user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Store the original number to compare later
    originalNumber = number;

    // Reverse the number using a while loop
    while (number != 0) {
        remainder = number % 10;  // Get the last digit
        reversedNumber = reversedNumber * 10 + remainder;  // Build the reversed number
        number /= 10;  // Remove the last digit
    }

    // Check if the original number is equal to the reversed number
    if (originalNumber == reversedNumber) {
        printf("%d is a palindrome.\n", originalNumber);
    } else {
        printf("%d is not a palindrome.\n", originalNumber);
    }

    return 0;
}
