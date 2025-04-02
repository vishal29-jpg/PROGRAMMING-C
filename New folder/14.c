#include<stdio.h>
#include<math.h>
int main()
{
    float a,b;
    printf("Enter a : ");
    scanf("%f", &a);
    printf("Enter b : ");
    scanf("%f", &b);
    printf("The ceil value of a is : %f\n", ceil(a));
    printf("The floor value of a is : %f\n", floor(a));
    printf("The ceil value of a is : %f\n", ceil(b));
    printf("The floor value of a is : %f\n", floor(b));
    return 0;

}