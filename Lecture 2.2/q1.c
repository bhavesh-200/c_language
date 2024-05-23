#include <stdio.h>
#define PI 3.14159
double calculateArea(double radius) 
{
    return PI * radius * radius;
}

void main() 
{
    double radius, area;
    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);
    area = calculateArea(radius);
    printf("The area of the circle with radius %.2lf is %.2lf\n", radius, area);
    getch();
}

