#include <stdio.h>
#include <stdlib.h>
#include "EmployeeIO.h"

int countNewEmp = 0;

/*Employee addNewEmployee(void)
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
}*/
Employee* addemployeeList(int size)
{
    int i=0;
    Employee* p;
    //system("cls");
    p = (Employee*)malloc(size*sizeof(Employee));
    for(i=0; i<size; i++)
    {
        printf("Employee [%d] ID: ", i+1);
        scanf("%d", &p[i].ID);
        printf("Employee [%d] Salary: ", i+1);
        scanf("%d", &p[i].salary);
        printf("Employee [%d] Name: ", i+1);
        fflush(stdin);
        scanf("%s", p[i].name);
    }
    return p;
    //Employee_size = 0;
}
void displayEmployeeData(Employee* emp, int size)
{
    system("cls");
    int i = 0;
    for(i=0; i<size; i++)
    {
        printf("\nEmployee %d ID: %d\n", i+1, emp[i].ID);
        printf("Employee %d Salary: %d\n", i+1, emp[i].salary);
        printf("Employee %d Name: %s\n", i+1, emp[i].name);
    }
}

void message(void)
{
    printf("\n[Backspace] to return Main Menu\n");
    printf("[esc] to exit\n");
}
