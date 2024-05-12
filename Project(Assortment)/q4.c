#include <stdio.h>
#define ROWS 3
#define COLS 3
void main() 
{
    int arr[ROWS][COLS];
    int rowSum, colSum;
    int row, col;
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
    printf("Enter the row index to find sum: ");
    scanf("%d", &row);
    printf("Enter the column index to find sum: ");
    scanf("%d", &col);
    rowSum = 0;
    for (j = 0; j < COLS; j++) 
	{
        rowSum += arr[row][j];
    }
    colSum = 0;
    for (i = 0; i < ROWS; i++) 
	{
        colSum += arr[i][col];
    }
    printf("Elements of row %d: ", row);
    for (j = 0; j < COLS; j++) 
	{
        printf("%d ", arr[row][j]);
    }
    printf("\n");
    printf("Sum of elements of row %d: %d\n", row, rowSum);
    printf("Elements of column %d: ", col);
    for (i = 0; i < ROWS; i++) 
	{
        printf("%d ", arr[i][col]);
    }
    printf("\n");
    printf("Sum of elements of column %d: %d\n", col, colSum);
    getch();
}

