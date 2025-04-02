#include<stdio.h>
int gcd(int a, int b)
{
    if(b==0)
    return a;
    return gcd(b,a%b);
}
int main()
{
    int num1,num2;
    printf("\nEnter num1 and num2 : \n");
    scanf("%d %d", &num1,&num2);

    int result=gcd(num1,num2);
    printf("\nGCD of %d and %d is : %d\n", num1,num2,result);
    return 0;
}