#include <stdio.h>
#include <stdlib.h>
#include "EmployeeIO.h"

int countNewEmp = 0;

Employee addNewEmployee(void)
{
    system("cls");
    Employee emp;
    printf("Enter Employee Name: ");
    fflush(stdin);
    gets(emp.name);
    printf("Enter Employee ID: ");
    scanf("%d", &emp.ID);
    printf("Enter Employee Salary: ");
    scanf("%d", &emp.salary);
    countNewEmp++;
    return emp;
}

void displayEmployeeData(Employee emp[])
{
    system("cls");
    int i = 0;
    for(i=0; i<countNewEmp; i++)
    {
        printf("Name: %s\n", emp[i].name);
        printf("ID: %d\n", emp[i].ID);
        printf("Salary: %d\n", emp[i].salary);
    }
}
