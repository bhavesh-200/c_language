#include <stdio.h>
#define ROWS 3
#define COLS 3
void main() 
{
    int arr[ROWS][COLS], transpose[COLS][ROWS];
	int i;
	int j;
    printf("Enter the elements of the 2D array (%d x %d):\n", ROWS, COLS);
    for (i = 0; i < ROWS; i++) 
	{
        for (j = 0; j < COLS; j++) 
		{
            scanf("%d", &arr[i][j]);
        }
    }
    for (i = 0; i < ROWS; i++) 
	{
        for (j = 0; j < COLS; j++) 
		{
            transpose[j][i] = arr[i][j];
        }
    }
    printf("Transpose of the matrix:\n");
    for (i = 0; i < COLS; i++) 
	{
        for (j = 0; j < ROWS; j++) 
		{
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }
    getch();
}

