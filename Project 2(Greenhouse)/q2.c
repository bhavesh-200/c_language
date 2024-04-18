#include<stdio.h>
#include<conio.h>
void main() 
{
    float basic_salary, hra_rate, da_rate, ta_rate;
    float gross_salary;
    printf("Enter basic salary: ");
    scanf("%f", &basic_salary);
    printf("Enter HRA rate (in percentage): ");
    scanf("%f", &hra_rate);
    printf("Enter DA rate (in percentage): ");
    scanf("%f", &da_rate);
    printf("Enter TA rate (in percentage): ");
    scanf("%f", &ta_rate);
    float hra = basic_salary * (hra_rate / 100);
    float da = basic_salary * (da_rate / 100);
    float ta = basic_salary * (ta_rate / 100);
    gross_salary = basic_salary + hra + da + ta;
    printf("HRA: %.2f\n", hra);
    printf("DA: %.2f\n", da);
    printf("TA: %.2f\n", ta);
    printf("Gross Salary: %.2f\n", gross_salary);
    getch();
}

