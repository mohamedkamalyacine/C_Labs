#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <dos.h>
#include <dir.h>
#include "EmployeeIO.h"
#include "menu.h"

int counter = 0;

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

int main()
{
    char c = 0, ch = 0;
    int line = 1, i=0, page = 0;

    Employee empList[5];

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
            if(1==line && counter<5)
            {
                page = 1;
                empList[counter] = addNewEmployee();
                counter++;
            }
            else if(2==line && counter<5 && 0!=counter)
            {
                page = 2;
                displayEmployeeData(empList);
            }
            else if(3==line && counter<5)
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
    return 0;
}















