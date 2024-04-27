#include<stdio.h>
#include<conio.h>
void main() 
{
    float marks[5];
    float totalMarks = 0, average;
    int i;
    printf("Enter marks for five subjects:\n");
    for (i = 0; i < 5; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%f", &marks[i]);
        totalMarks += marks[i];
    }
    average = totalMarks / 5.0;
    printf("\nTotal Marks: %.2f\n", totalMarks);
    printf("Average Marks: %.2f\n", average);
    printf("\nGrade: ");
    if (average >= 90)
        printf("A+");
    else if (average >= 80)
        printf("A");
    else if (average >= 70)
        printf("B");
    else if (average >= 60)
        printf("C");
    else if (average >= 50)
        printf("D");
    else
        printf("F");
        
    printf("\n");
    getch();
}

