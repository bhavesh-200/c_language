#include<stdio.h>
#include<conio.h>
void main() 
{
    int n = 3;
    int i, j;
    for (i = 0; i < n; i++) 
	{
        for (j = 0; j <= i; j++) 
		{
            printf("* ");
        }
        printf("\n");
    }
    for (i = n - 1; i > 0; i--) 
	{
        for (j = 0; j < i; j++) 
		{
            printf("* ");
        }
        printf("\n");
    }
    getch();
}

