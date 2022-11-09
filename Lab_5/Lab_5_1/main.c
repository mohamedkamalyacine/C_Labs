#include <stdio.h>
#include <stdlib.h>

typedef struct St_employee_t
{
    int ID;
    int salary;
    int bonus;
    int deduction;
    char name[25];
}Employee;

int main()
{
    Employee emp1;
    printf("Enter Employee Name: ");
    fflush(stdin);
    gets(emp1.name);
    printf("Enter Employee  ID : ");
    scanf("%d", &emp1.ID);
    printf("Enter Employee Salary: ");
    scanf("%d", &emp1.salary);
    printf("Enter Employee bonus: ");
    scanf("%d", &emp1.bonus);
    printf("Enter Employee deduction: ");
    scanf("%d", &emp1.deduction);

    printf("Employee Name is %s, Id: %d, Salary: %d.\n", emp1.name, emp1.ID, emp1.salary);
    /*printf("Employee code %d\n", emp1.ID);
    printf("Employee salary %d\n", emp1.salary);*/
    return 0;
}
