#include <stdio.h>
void OddElements(int arr[], int size);
void main() 
{
    int array[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    int size = sizeof(array) / sizeof(array[2]);
    printf("ODD elements :");
    OddElements(array, size);
    getch();
}

void OddElements(int arr[], int size) 
{
	int a;
    for(a = 0; a < size; a++) 
	{
        if(arr[a] % 2 != 0) 
		{
            printf("%d ", arr[a]);
        }
    }
}

