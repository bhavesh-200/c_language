#include<stdio.h>
#include<conio.h>
void main() 
{
	int i;
    int N;
    unsigned long long factorial = 1;
    printf("Enter a positive integer: ");
    scanf("%d", &N);
    if (N < 0) {
        printf("Error: Factorial of a negative number is undefined.\n");
    } 
    else {
        for(i = 1; i <= N; ++i) 
		{
            factorial *= i;
        }
        printf("Factorial of %d = %llu\n", N, factorial);
    }
    getch();
}

