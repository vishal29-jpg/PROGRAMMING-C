#include<stdio.h>
int fib(int n);
int main()
{ 
    int i;
    printf("Enter the value of i :  ");
    scanf("%d", &i);
    printf("Fibonacci series of %d is : %d", i, fib(i));
}
int fib(int n)
{
if(n==0 || n==1)
{
    if(n==1)
    {
        return 1;
    }
    if(n==0)
    {
        return 0;
    }
}

int fibNum1=fib(n-1);
int fibNum2=fib(n-2);
int fibNum=fibNum1+fibNum2;
return fibNum;
}