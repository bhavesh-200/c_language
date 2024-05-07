#include<stdio.h>
#include<conio.h>
void main() 
{
	int i;
    int array[5] = {2, 4, 6, 8, 10};
    int size = 5;
    int min, max;
    min = max = array[0];
    for (i = 1; i < size; i++) 
	{
        if (array[i] < min) 
		{
            min = array[i];
        }
        if (array[i] > max) 
		{
            max = array[i];
        }
    }
    printf("Minimum element: %d\n", min);
    printf("Maximum element: %d\n", max);
    getch();
}

