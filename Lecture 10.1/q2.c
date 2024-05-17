#include <stdio.h>
int isDivisibleBy3And5(int num) 
{
    if (num % 3 == 0 && num % 5 == 0) {
        return 1;
    } else {
        return 0;
    }
}

void main() 
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    if (isDivisibleBy3And5(number)) 
    {
        printf("%d is divisible by both 3 and 5.\n", number);
    } else {
        printf("%d is not divisible by both 3 and 5.\n", number);
    }
    getch();
}
