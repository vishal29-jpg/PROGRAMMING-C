#include <stdio.h>

int main() {
    int number, reverse = 0, remainder;

    // Input number from user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Reverse the number using a while loop
    while (number != 0) {
        remainder = number % 10;  // Get the last digit
        reverse = reverse * 10 + remainder;  // Append the digit to the reverse number
        number /= 10;  // Remove the last digit
    }

    // Output the reversed number
    printf("The reversed number is: %d\n", reverse);

    return 0;
}
