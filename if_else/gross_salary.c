/*
8. Write a C program to input basic salary of an employee and calculate its Gross salary according to following: (Hard)
Basic Salary <= 10000 : HRA = 20%, DA = 80%
Basic Salary <= 20000 : HRA = 25%, DA = 90%
Basic Salary > 20000 : HRA = 30%, DA = 95%
*/
#include <stdio.h>

int main(void)
{
    float basic_salary = 0;
    printf("Basic Salary: ");
    scanf("%f", &basic_salary);

    float gross_salary = 0;
    float HRA = 0;
    float DA = 0;

    if (basic_salary <= 10000)
    {
        HRA = 0.2 * basic_salary; // percentage calculate: 80 percent *10000 = (80/100)*10000
        DA = 0.8 * basic_salary;
        gross_salary = basic_salary + HRA + DA;
    }
    else if (basic_salary <= 20000)
    {
        HRA = 0.25 * basic_salary;
        DA = 0.9 * basic_salary;
        gross_salary = basic_salary + HRA + DA;
    }
    else if (basic_salary > 20000)
    {
        HRA = 0.3 * basic_salary;
        DA = 0.95 * basic_salary;
        gross_salary = basic_salary + HRA + DA;
    }
    printf("%.2f\n", gross_salary);
}