#include <stdio.h>

int main() {
    int i, sum = 0;

    // Using for loop to calculate sum of first 10 odd numbers
    for (i = 1; i <= 19; i += 2) {
        sum += i;
    }

    // Display the result
    printf("The sum of the first 10 odd natural numbers is: %d\n", sum);

    return 0;
}