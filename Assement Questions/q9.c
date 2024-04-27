#include<stdio.h>
#include<conio.h>
void main() 
{
    char operator;
    float num1, num2, result;
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operator);
    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);
    if (operator == '+') {
        result = num1 + num2;
        printf("%.2f + %.2f = %.2f\n", num1, num2, result);
    } else if (operator == '-') {
        result = num1 - num2;
        printf("%.2f - %.2f = %.2f\n", num1, num2, result);
    } else if (operator == '*') {
        result = num1 * num2;
        printf("%.2f * %.2f = %.2f\n", num1, num2, result);
    } else if (operator == '/') {
        // Check if divisor is zero
        if (num2 == 0)
            printf("Error! Division by zero.\n");
        else {
            result = num1 / num2;
            printf("%.2f / %.2f = %.2f\n", num1, num2, result);
        }
    } else {
        printf("Error! Invalid operator.\n");
    }
    getch();
}

