#include <stdio.h>
double calculateSimpleInterest(double principal, double rate, double time) 
{
    return (principal * rate * time) / 100;
}

void main() 
{
    double principal, rate, time, interest;
    printf("Enter the principal amount: ");
    scanf("%lf", &principal);
    printf("Enter the interest rate (as a percentage): ");
    scanf("%lf", &rate);
    printf("Enter the time period (in years): ");
    scanf("%lf", &time);
    interest = calculateSimpleInterest(principal, rate, time);
    printf("The simple interest is: %.2lf\n", interest);
    getch();
}

