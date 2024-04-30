#include<stdio.h>
#include<conio.h>
void main() 
{
	int i;
    int N, sum = 0;
    printf("Enter the value of N: ");
    scanf("%d", &N);
    for(i=1; i <= N; i++) 
	{
        sum += i;
    }
    printf("The sum of all numbers from 1 to %d is: %d\n", N, sum);
    getch();
}

