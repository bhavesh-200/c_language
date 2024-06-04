#include <stdio.h>
void main() 
{
    int i;
    printf("Even numbers from 50 to 70:\n");
    for (i = 50; i <= 70; i++) 
	{
        if (i % 2 == 0) 
		{
            printf("%d ", i);
        }
    }
    printf("\nOdd numbers from 50 to 70:\n");
    for (i = 50; i <= 70; i++) 
	{
        if (i % 2 != 0) 
		{
            printf("%d ", i);
        }
    }
    getch();
}

