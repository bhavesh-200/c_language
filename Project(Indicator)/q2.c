#include <stdio.h>
void cubeElements(int *arr, int rows, int cols) 
{
	int i,j;
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            int index = i * cols + j;
            *(arr + index) = (*(arr + index)) * (*(arr + index)) * (*(arr + index));
        }
    }
}

void printArray(int *arr, int rows, int cols) 
{
	int i,j;
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", *(arr + i * cols + j));
        }
        printf("\n");
    }
}

void main() 
{
	int i,j;
    int rows, cols;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);
    int arr[rows][cols];
    printf("Enter the elements of the array:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Original array:\n");
    printArray((int *)arr, rows, cols);
    cubeElements((int *)arr, rows, cols);
    printf("Array after cubing elements:\n");
    printArray((int *)arr, rows, cols);
    getch();
}

