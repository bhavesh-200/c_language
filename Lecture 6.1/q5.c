#include <stdio.h>
int isLeapYear(int year) {
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                return 1;
            } else {
                return 0;
            }
        } else {
            return 1;
        }
    } else {
        return 0;
    }
}

void main() {
    int startYear, endYear;
    printf("Enter the start year: ");
    scanf("%d", &startYear);
    printf("Enter the end year: ");
    scanf("%d", &endYear);
    if (startYear > endYear) {
        printf("Invalid range! Start year should be less than or equal to end year.\n");
        return 1;
    }
    int year = startYear;
    while (year <= endYear) {
        if (isLeapYear(year)) {
            printf("%d\n", year);
        }
        year++;
    }
    getch();
}

