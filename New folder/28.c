#include <stdio.h>

int main() {
    int i, sum = 0;

    // Using for loop to calculate sum of squares
    for (i = 1; i <= 10; i++) {
        sum += i * i;
    }

    // Display the result
    printf("The sum of the squares of the first 10 natural numbers is: %d\n", sum);

    return 0;
}