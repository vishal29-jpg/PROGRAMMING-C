#include<stdio.h>
int main()
{
    int length,breath,area,perimeter;
    printf("Enter length : ");
    scanf("%d", &length);
    printf("Enter breath : ");
    scanf("%d", &breath);
    area=length*breath;
    perimeter=2*(length+breath);
    printf("The area and perimeter of the rectangle is :\n area=%d\n perimeter=%d\n", area, perimeter);
    return 0;
}