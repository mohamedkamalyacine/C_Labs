#include <stdio.h>
#include <stdlib.h>

typedef struct St_employee_t
{
    int ID;
    int salary;
    char name[25];
}Employee;

int main()
{
    char c = 0;
    int i=0;
    Employee Emp_Arr[5];

    for(i=0; i<5; i++)
    {
        printf("Enter Employee %d Data \n", i+1);
        printf("Name: ");
        fflush(stdin);
        gets(Emp_Arr[i].name);
        printf("ID: ");
        scanf("%d", &Emp_Arr[i].ID);
        printf("Salary: ");
        fflush(stdin);
        scanf("%d", &Emp_Arr[i].salary);
    }

    for(i=0; i<5; i++)
    {
        printf("\nEmployee %d Data\n", i+1);
        printf("Name: %s - ID: %d - Salary: %d\n", Emp_Arr[i].name, Emp_Arr[i].ID, Emp_Arr[i].salary);
    }

    return 0;
}
