#include<stdio.h>
int main()
{
    int n,last_digit;
    printf("Enter the value of n : ");
    scanf("%d", &n);
    last_digit=n%10;
    printf("The last digit of the input number = %d", last_digit);
    return 0;
}