#include<stdio.h>
int fact(int n);
int main()
{
    int i;
    printf("Enter the value of i : ");
    scanf("%d", &i);
    printf("Factorial of %d is : %d", i, fact(i));
}
int fact(int n)
{
if(n==1)
{
    return 1;
}
int factNum1=fact(n-1);
int factNum=factNum1*n;
return factNum;
}