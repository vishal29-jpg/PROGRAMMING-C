#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d", &num);
    if(num>=0&&(int)num==num)
    {
        printf("%d is a whole number", num);
    }
    else
    {
        printf("%d not a whole number", num);
    }
    return 0;
}