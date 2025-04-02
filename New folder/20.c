#include<stdio.h>
int main()
{
    char toss,H,T;
    printf("Enter the result of toss : ");
    scanf("%c", &toss);
    if(toss=='H')
    {
    printf("Result of toss : Head");
    }
    else if(toss=='T')
    {
     printf("Result of toss : Tail");
    }
    return 0;
}