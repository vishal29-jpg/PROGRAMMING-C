#include <stdio.h>

int main() {
    int num, sum = 0, original, digit;
    
    printf("Enter a three-digit number: ");
    scanf("%d", &num);

    original = num;
    while (num != 0) {
        digit = num % 10;
        sum += (digit * digit * digit); // Cubing each digit
        num /= 10;
    }

    if (sum == original)
        printf("Armstrong Number\n");
    else
        printf("Not an Armstrong Number\n");

return 0;
}