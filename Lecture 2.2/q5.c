#include <stdio.h>
#define PI 3.14159
double calculatePerimeter(double radius) 
{
    return 2 * PI * radius;
}

void main() 
{
    double radius, perimeter;
    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);
    perimeter = calculatePerimeter(radius);
    printf("The perimeter of the circle with radius %.2lf is %.2lf\n", radius, perimeter);
    getch();
}

