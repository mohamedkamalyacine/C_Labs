#include <stdio.h>
#include <stdlib.h>
#include "EmployeeIO.h"

Employee addNewEmployee(void)
{
    Employee emp;
    printf("Enter Employee Name: ");
    fflush(stdin);
    gets(emp.name);
    printf("Enter Employee ID: ");
    scanf("%d", &emp.ID);
    printf("Enter Employee Salary: ");
    scanf("%d", &emp.salary);

    return emp;
}

void displayEmployeeData(Employee emp)
{
    printf("Name: %s\n", emp.name);
    printf("ID: %d\n", emp.ID);
    printf("Salary: %d\n", emp.salary);
}
