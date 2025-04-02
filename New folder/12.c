#include<stdio.h>
#include<math.h>
int main()
{
    float p,r,t,ci;
    printf("Enter the Principle number : ", p);
    scanf("%f", &p);
    printf("Enter the rate of interest: ", r);
    scanf("%f", &r);
    printf("Enter the Time period : ", t);
    scanf("%f", &t);
    ci=p*(pow((1+r/100),t));
    printf("Compound interest=%f", ci);
    return 0;
}