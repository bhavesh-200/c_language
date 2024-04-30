#include<stdio.h>
#include<conio.h>
void main() 
{
    int N;
    printf("Enter the value of N: ");
    scanf("%d", &N);
    int i = 1;
    printf("Even numbers from 1 to %d are: ", N);
    do {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
        i++;
    } while (i <= N);
    getch();
}

