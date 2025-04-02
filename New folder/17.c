#include<stdio.h>
int main()
{
    int roll_number;
    printf("Enter the roll number : ");
    scanf("%d", &roll_number);
    if(roll_number==100)
    printf("Roll number 100 is preset");
    if(roll_number!=100)
    printf("Roll number 100 absent");
    return 0;
}