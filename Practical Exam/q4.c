#include <stdio.h>
void EvenElements(int *arr, int size);
void main() 
{
    int array[] = {12, 24, 35, 47, 57, 64, 78, 82, 94, 100};
    int size = sizeof(array) / sizeof(array[2]);

    printf("Even elements :");
    EvenElements(array, size);
    getch();
}
void EvenElements(int *arr, int size) 
{
	int i;
    for(i = 0; i < size; i++) 
	{
        if(*(arr + i) % 2 == 0) 
		{
            printf("%d ", *(arr + i));
        }
    }
}

