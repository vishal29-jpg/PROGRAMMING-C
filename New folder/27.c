#include <stdio.h>

int main() {
    int number, i;

    // Taking user input
    printf("Enter the number for the multiplication table: ");
    scanf("%d", &number);

    // Printing multiplication table using for loop
    printf("\nMultiplication Table of %d:\n", number);
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", number, i, number * i);
    }

    return 0;
}