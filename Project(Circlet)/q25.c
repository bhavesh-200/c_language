#include <stdio.h>
int main() {
    int rows;
	int i,j,k,l;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) 
	{
        for (j = 1; j <= i; j++) 
		{
            printf("%d ", j);
        }
        for (k = 1; k <= 2 * (rows - i); k++) 
		{
            printf("   ");
        }
        for (l = i; l >= 1; l--) 
		{
            printf("%d ", l);
        }

        printf("\n");
    }

    return 0;
}

