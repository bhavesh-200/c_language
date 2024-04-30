#include<stdio.h>
#include<conio.h>
void main() 
{
	int i;
    int N;
    printf("Enter a number to print its multiplication table: ");
    scanf("%d", &N);
    printf("Multiplication table of %d:\n", N);
    for(i = 1; i <= 10; ++i) 
	{
        printf("%d x %d = %d\n", N, i, N * i);
    }
    getch();
}

