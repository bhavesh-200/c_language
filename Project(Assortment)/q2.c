#include <stdio.h>
#define ROWS 3
#define COLS 3
void main() 
{
    int arr[ROWS][COLS];
    int maxElement;
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
    maxElement = arr[0][0];
    for (i = 0; i < ROWS; i++) 
	{
        for (j = 0; j < COLS; j++) 
		{
            if (arr[i][j] > maxElement) 
			{
                maxElement = arr[i][j];
            }
        }
    }
    printf("The largest element in the 2D array is: %d\n", maxElement);
    getch();
}

