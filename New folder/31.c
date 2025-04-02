#include <stdio.h>

int main() 
{
    int n, first = 0, second = 1, next;
     printf("Enter the number of terms: ");
    scanf("%d", &n);

    // Handle edge case when n is 1
    if (n >= 1) 
    {
        printf("Fibonacci Series: ");
        printf("%d ", first);  // Print first term
    }
    
    if (n >= 2) {
        printf("%d ", second);  // Print second term
    }

    // Generate the Fibonacci series using a while loop
    int count = 3;  // Start from the 3rd term
    while (count <= n) 
    {
        next = first + second;  // The next term is the sum of the previous two terms
        printf("%d ", next);     // Print the next term
        first = second;          // Update first to the second term
        second = next;           // Update second to the next term
        count++;                 // Move to the next term
    }

    printf("\n");
    return 0;
}
