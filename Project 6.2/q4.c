#include<stdio.h>
#include<conio.h>
void main() 
{
    int N, i;
    int first = 0, second = 1, next;
    printf("Enter the value of N: ");
    scanf("%d", &N);
    printf("Fibonacci series up to %d numbers: \n", N);
    printf("%d %d ", first, second);
    for (i = 3; i <= N; i++) {
        next = first + second;
        printf("%d ", next);
        first = second;
        second = next;
    }
    getch();
}

