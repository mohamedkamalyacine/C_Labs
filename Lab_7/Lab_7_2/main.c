#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "EmployeeIO.h"
#include "menu.h"

int employee_size;
int counter;

void gotoxy(int x,int y);
void SetColor(int ForgC);

int main()
{
    char c = 0;
    int line = 1, page = 0;
    int i = 0;
    Employee* empList[employee_size];
    Employee* ptr;
    //printf("Enter Number of Employees: ");
    //scanf("%d", &employee_size);

    //ptr = addemployeeList(employee_size);

    /*for(i=0; i<employee_size; i++)
    {
        displayEmployeeData(ptr, employee_size);
    }*/

    //Employee empList[5];
    //Employee* emp_ptr[Employee_size];
    //printf("Enter Employee Array Size: ");
    //scanf("%d", &Employee_size);

    firstLine();

    while(c != 27)
    {
        c = getch();
        switch(c)
        {
        case 80:
            if(1 == line && 0==page)
            {
                secondLine();
                line = 2;
            }
            else if(2==line && 0==page)
            {
                thirdLine();
                line = 3;
            }
            else if(3==line && 0==page)
            {
                firstLine();
                line = 1;
            }
            break;

        case 72:
            if(1 == line && 0==page)
            {
                thirdLine();
                line = 3;
            }
            else if(2==line && 0==page)
            {
                firstLine();
                line = 1;
            }
            else if(3==line && 0==page)
            {
                secondLine();
                line = 2;
            }
            break;

        case 13:
            if(1==line)
            {
                page = 1;
                system("cls");
                printf("Enter Number of Employees: ");
                scanf("%d", &employee_size);
                ptr = addemployeeList(employee_size);
                counter++;
                message();
            }
            else if(2==line && 0!=counter)
            {
                page = 2;
                displayEmployeeData(ptr, employee_size);
                message();
            }
            else if(3==line)
            {
                c = 27;
            }
            break;
        case 8:
            if(1==page || 2==page)
            {
                firstLine();
                line = 1;
                page = 0;
            }
            break;
        default:
            break;
        }
    }
    /*for(i=0; i<Employee_size; i++)
    {
        emp_ptr[i] = (Employee*)malloc(Employee_size*sizeof(Employee));
        printf("Enter Employee %d Id : ", i);
        scanf("%d", &emp_ptr[i]->ID);
        printf("Enter Employee %d Name : ", i);
        fflush(stdin);
        scanf("%s", emp_ptr[i]->name);
    }

    for(i=0; i<Employee_size; i++)
    {
        printf("Employee %d \t Name: %s \t Id = %d \n", i+1, emp_ptr[i]->name, emp_ptr[i]->ID);
    }*/
    return 0;
}

void gotoxy(int x,int y)
{
    COORD coord= {0,0};
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

void SetColor(int ForgC)
{
    WORD wColor;

    HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO csbi;

    //We use csbi for the wAttributes word.
    if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
    {
        //Mask out all but the background attribute, and add in the forgournd     color
        wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);
        SetConsoleTextAttribute(hStdOut, wColor);
    }
    return;
}
