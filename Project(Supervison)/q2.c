#include <stdio.h>
#define NUM_STUDENTS 5
struct Student {
    int roll_no;
    char name[50];
    int chem_marks;
    int maths_marks;
    int phy_marks;
};

void main() 
{
    struct Student students[NUM_STUDENTS];
    int i;
    float percentage;
    for(i = 0; i < NUM_STUDENTS; i++) 
	{
        printf("Enter details for student %d:\n", i + 1);
        printf("Roll No: ");
        scanf("%d", &students[i].roll_no);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Chemistry Marks: ");
        scanf("%d", &students[i].chem_marks);
        printf("Mathematics Marks: ");
        scanf("%d", &students[i].maths_marks);
        printf("Physics Marks: ");
        scanf("%d", &students[i].phy_marks);
        printf("\n");
    }
    printf("Mark sheets:\n");
    for(i = 0; i < NUM_STUDENTS; i++) 
	{
        percentage = (students[i].chem_marks + students[i].maths_marks + students[i].phy_marks) / 3.0;
        printf("Roll No: %d\n", students[i].roll_no);
        printf("Name: %s\n", students[i].name);
        printf("Chemistry Marks: %d\n", students[i].chem_marks);
        printf("Mathematics Marks: %d\n", students[i].maths_marks);
        printf("Physics Marks: %d\n", students[i].phy_marks);
        printf("Percentage: %.2f%%\n\n", percentage);
    }
    getch();
}

