#include<stdio.h>
int main()
{
    int num1,num2;
    printf("The value of num1 is : ");
    scanf("%d", &num1);
    printf("The value of num2 is : ");
    scanf("%d", &num2);
    if(num1>num2)
    printf("%d is greater than %d", num1,num2);
    if(num2>num1)
    printf("%d is greater than %d", num2,num1);
    return 0;


}
