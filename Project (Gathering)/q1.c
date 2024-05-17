#include<stdio.h>
#include<conio.h>
float add(float a, float b) 
{
    return a + b;
}
float subtract(float a, float b) 
{
    return a - b;
}
float multiply(float a, float b) 
{
    return a * b;
}
float divide(float a, float b) 
{
    if (b != 0) 
    {
        return a / b;
    } else 
    {
        printf("Error! Division by zero.\n");
        return 0;
    }
}
int modulus(int a, int b) 
{
    if (b != 0) 
    {
        return a % b;
    } else 
    {
        printf("Error! Modulus by zero.\n");
        return 0;
    }
}

void main() 
{
    char choice;
    float num1, num2;
    while (1) 
    {
        printf("\nMenu:\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Modulus\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf(" %c", &choice);
        switch(choice) 
        {
            case '1':
                printf("Enter two numbers: ");
                scanf("%f %f", &num1, &num2);
                printf("Result: %.2f\n", add(num1, num2));
                break;
            case '2':
                printf("Enter two numbers: ");
                scanf("%f %f", &num1, &num2);
                printf("Result: %.2f\n", subtract(num1, num2));
                break;
            case '3':
                printf("Enter two numbers: ");
                scanf("%f %f", &num1, &num2);
                printf("Result: %.2f\n", multiply(num1, num2));
                break;
            case '4':
                printf("Enter two numbers: ");
                scanf("%f %f", &num1, &num2);
                printf("Result: %.2f\n", divide(num1, num2));
                break;
            case '5':
                printf("Enter two numbers: ");
                scanf("%f %f", &num1, &num2);
                printf("Result: %d\n", modulus((int)num1, (int)num2));
                break;
            case '6':
                printf("Exiting the program.\n");
                return 0;
            default:
                printf("Invalid choice! Please enter a valid option.\n");
        }
    }
    getch();
}
