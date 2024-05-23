#include <stdio.h>
double calculateArea(double length, double breadth) 
{
    return length * breadth;
}

void main() 
{
    double length, breadth, area;
    printf("Enter the length of the rectangle: ");
    scanf("%lf", &length);
    printf("Enter the breadth of the rectangle: ");
    scanf("%lf", &breadth);
    area = calculateArea(length, breadth);
    printf("The area of the rectangle with length %.2lf and breadth %.2lf is %.2lf\n", length, breadth, area);
    getch();
}

