#include<stdio.h>
#include<conio.h>
void findLeapYears(int start, int end, int leapYears[], int *count) 
{
	int year;
    *count = 0;
    for (year = start; year <= end; year++) 
	{
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) 
		{
            leapYears[*count] = year;
            (*count)++;
        }
    }
}

void main() 
{
    int start_year, end_year;
	int i;
    printf("Enter the start year: ");
    scanf("%d", &start_year);
    printf("Enter the end year: ");
    scanf("%d", &end_year);
    int max_leap_years = (end_year - start_year + 1) / 4;
    int leapYears[max_leap_years];
    int count;
    findLeapYears(start_year, end_year, leapYears, &count);
    printf("Leap years between %d and %d:\n", start_year, end_year);
    for (i = 0; i < count; i++) 
	{
        printf("%d\n", leapYears[i]);
    }
    getch();
}

