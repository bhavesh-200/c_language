#include<stdio.h>
#include<conio.h>
void main() 
{
    int n = 9;
    int i, j;
    for (i = 0; i < n; i++) 
	{
        for (j = 0; j < n; j++) 
		{
            if (i == n - 1 || i == j || j == 0 || j == n - 1 || j == n - i - 1) 
			{
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
    getch();
}

