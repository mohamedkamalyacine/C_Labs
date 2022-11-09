#ifndef EMPLOYEEIO_H_INCLUDED
#define EMPLOYEEIO_H_INCLUDED

typedef struct St_employee_t
{
    int ID;
    int salary;
    char name[25];
}Employee;

Employee addNewEmployee(void);
void displayEmployeeData(Employee);

#endif // EMPLOYEEIO_H_INCLUDED
