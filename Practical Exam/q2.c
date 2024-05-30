#include <stdio.h>
double calculateAverage(int rows, int cols, int array[rows][cols]) 
{
    int sum = 0;
    int totalElements = rows * cols;
	int a;
	int b;
    for (a = 0; a < rows; a++) 
	{
        for (b = 0; b < cols; b++) 
		{
            sum += array[a][b];
        }
    }
    return (double)sum / totalElements;
}

void main() 
{
    int rows, cols;
    int a , b;
    printf("Enter the rows: ");
    scanf("%d", &rows);
    printf("Enter the columns: ");
    scanf("%d", &cols);
    int array[rows][cols];
    printf("Enter the array:\n");
    for (a = 0; a < rows; a++) 
	{
        for (b = 0; b < cols; b++) 
		{
            scanf("%d", &array[a][b]);
        }
    }
    double average = calculateAverage(rows, cols, array);
    printf("Average of 2 element: %.2f\n", average);
    getch();
}

