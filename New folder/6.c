#include<stdio.h>
int main()
{
    float p,r,t,si;
    printf("Enter the Principle number : ", p);
    scanf("%f", &p);
    printf("Enter the rate of interest: ", r);
    scanf("%f", &r);
    printf("Enter the Time period : ", t);
    scanf("%f", &t);
    si=p*r*t/100;
    printf("Simple interest=%f", si);
    return 0;
}