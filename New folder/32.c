#include <stdio.h>

int main() 
{
    int number, count = 0;
    printf("Enter a number: ");
    scanf("%d", &number);
    // Count the digits
    while (number != 0)
    {
        number /= 10;  // Remove the last digit
        count++;       // Increment the digit count
    }

    // If the number was 0, it has 1 digit
    if (count == 0)
    {
        count = 1;
    }

    printf("The number of digits is: %d\n", count);

    return 0;
}
