#include<stdio.h>
#include<conio.h>
void main() 
{
    float num1, num2;
    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);
    printf("Addition: %.2f + %.2f = %.2f\n", num1, num2, num1 + num2);
    printf("Subtraction: %.2f - %.2f = %.2f\n", num1, num2, num1 - num2);
    printf("Multiplication: %.2f * %.2f = %.2f\n", num1, num2, num1 * num2);
    if (num2 != 0) 
    {
        printf("Division: %.2f / %.2f = %.2f\n", num1, num2, num1 / num2);
        printf("Modulus: %.0f %% %.0f = %.0f\n", num1, num2, fmod(num1, num2));
    } else 
    {
        printf("Cannot perform division and modulus by zero.\n");
    }
    getch();
}
