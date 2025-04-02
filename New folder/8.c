#include<stdio.h>
int main()
{
    float f1,c1,f2,c2;
    printf("Enter the temp in feh. : ");
    scanf("%f", &f1);
    c1=((f1-32)*5/9);
    printf("The temp in cel. is : %f\n", c1);
    printf("Enter the temp in cel. : ");
    scanf("%f", &c2);
    f2=((c2*9/5)+32);
    printf("The temp in feh. is : %f", f2);
    return 0;

}