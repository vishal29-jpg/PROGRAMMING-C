#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter a : ");
    scanf("%d", &a);
    printf("Enter b : ");
    scanf("%d", &b);
    printf("Value of a and b before swapping : a=%d, b=%d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("Value of a and b after swapping : a=%d, b=%d",a,b);
    return 0;

}