#include <stdio.h>
struct Student {
    int stu_id;
    char stu_name[50];
    int stu_age;
    char stu_course[50];
    char stu_city[50];
    int stu_standard;
    char stu_school[50];
};

void inputStudent(struct Student *s) 
{
    printf("Enter Student ID: ");
    scanf("%d", &s->stu_id);
    printf("Enter Student Name: ");
    scanf("%s", s->stu_name);
    printf("Enter Student Age: ");
    scanf("%d", &s->stu_age);
    printf("Enter Student Course: ");
    scanf("%s", s->stu_course);
    printf("Enter Student City: ");
    scanf("%s", s->stu_city);
    printf("Enter Student Standard: ");
    scanf("%d", &s->stu_standard);
    printf("Enter Student School: ");
    scanf("%s", s->stu_school);
}

void displayStudent(struct Student s) {
    printf("\nStudent ID: %d\n", s.stu_id);
    printf("Student Name: %s\n", s.stu_name);
    printf("Student Age: %d\n", s.stu_age);
    printf("Student Course: %s\n", s.stu_course);
    printf("Student City: %s\n", s.stu_city);
    printf("Student Standard: %d\n", s.stu_standard);
    printf("Student School: %s\n", s.stu_school);
}

void main() 
{
	int i;
    struct Student students[3];
    for (i = 0; i < 3; i++) 
	{
        printf("\nEnter details for Student %d\n", i + 1);
        inputStudent(&students[i]);
    }
    for (i = 0; i < 3; i++) 
	{
        printf("\nDetails of Student %d\n", i + 1);
        displayStudent(students[i]);
    }
    getch();
}

