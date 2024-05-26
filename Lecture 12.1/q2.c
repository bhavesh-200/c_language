#include <stdio.h>
#include <stdlib.h>
struct Employee {
    int emp_id;
    char emp_name[50];
    int emp_age;
    char emp_role[50];
    char emp_city[50];
    int emp_experience;
    char emp_company_name[50];
};

void inputEmployee(struct Employee *e) 
{
    printf("Enter Employee ID: ");
    scanf("%d", &e->emp_id);
    printf("Enter Employee Name: ");
    scanf("%s", e->emp_name);
    printf("Enter Employee Age: ");
    scanf("%d", &e->emp_age);
    printf("Enter Employee Role: ");
    scanf("%s", e->emp_role);
    printf("Enter Employee City: ");
    scanf("%s", e->emp_city);
    printf("Enter Employee Experience (in years): ");
    scanf("%d", &e->emp_experience);
    printf("Enter Employee Company Name: ");
    scanf("%s", e->emp_company_name);
}

void displayEmployee(struct Employee e) 
{
    printf("\nEmployee ID: %d\n", e.emp_id);
    printf("Employee Name: %s\n", e.emp_name);
    printf("Employee Age: %d\n", e.emp_age);
    printf("Employee Role: %s\n", e.emp_role);
    printf("Employee City: %s\n", e.emp_city);
    printf("Employee Experience: %d years\n", e.emp_experience);
    printf("Employee Company Name: %s\n", e.emp_company_name);
}

void main() 
{
    int N;
	int i;
    printf("Enter the number of employees: ");
    scanf("%d", &N);
    struct Employee *employees = (struct Employee *)malloc(N * sizeof(struct Employee));
    if (employees == NULL) 
	{
        printf("Memory allocation failed\n");
        return 1;
    }
    for (i = 0; i < N; i++) 
	{
        printf("\nEnter details for Employee %d\n", i + 1);
        inputEmployee(&employees[i]);
    }
    for (i = 0; i < N; i++)
	{
        printf("\nDetails of Employee %d\n", i + 1);
        displayEmployee(employees[i]);
    }
    free(employees);
    getch();
}

