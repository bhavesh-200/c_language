#include<stdio.h>
#include<conio.h>
void main() 
{
    int number, firstDigit, lastDigit, sum;
    printf("Enter a number: ");
    scanf("%d", &number);
    firstDigit = number;
    while (firstDigit >= 10) {
        firstDigit /= 10;
    }
    lastDigit = number % 10;
    sum = firstDigit + lastDigit;
    printf("Sum of the first and last digit: %d\n", sum);
    getch();
}

