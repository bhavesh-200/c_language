#include <stdio.h>

int main() 
{
	int i,j,k;
    for (i = 1; i <= 5; i++) 
	{
        for (j = 1; j <= 5 - i; j++) 
		{
            printf("  ");
        }
        for (k = 1; k <= i; k++) 
		{
            printf("%d", 5 - i + 1);
            if (k < i) {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}

