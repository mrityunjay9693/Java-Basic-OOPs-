#include<stdio.h>
#define pi 3.14

int main()
{
    float radius, area, perimeter;

    printf("Enter Radius of Cirecle: ");
    scanf("%f",&radius);

    area = pi*radius*radius;
    perimeter = 2*pi*radius;

    printf("Area of Cirecle: %.2f sq unit\n",area);
    printf("Area of Cirecle: %.2f sq unit\n",perimeter);
    return 0;
}



