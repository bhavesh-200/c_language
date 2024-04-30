#include<stdio.h>
#include<conio.h>
void main() 
{
    float unit_charges, total_bill, surcharge = 0.2;
    printf("Enter the electricity unit charges: ");
    scanf("%f", &unit_charges);
    if (unit_charges <= 50) {
        total_bill = unit_charges * 0.50;
    } else if (unit_charges <= 150) {
        total_bill = (50 * 0.50) + ((unit_charges - 50) * 0.75);
    } else if (unit_charges <= 250) {
        total_bill = (50 * 0.50) + (100 * 0.75) + ((unit_charges - 150) * 1.20);
    } else {
        total_bill = (50 * 0.50) + (100 * 0.75) + (100 * 1.20) + ((unit_charges - 250) * 1.50);
    }
    total_bill += total_bill * surcharge;
    printf("Total electricity bill: Rs. %.2f\n", total_bill);
    getch();
}

