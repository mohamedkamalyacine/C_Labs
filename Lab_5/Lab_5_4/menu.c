#include <stdio.h>
#include <stdlib.h>
#include<windows.h>
#include <dos.h>
#include <dir.h>
#include "EmployeeIO.h"

char menuList[3][20] = {{"Add Employee"}, {"Display Employee"}, {"Exit"}};

void firstLine(void)
{
    system("cls");
    SetColor(19);
    printf("%5s\n", menuList[0]);
    SetColor(15);
    printf("%5s\n", menuList[1]);
    printf("%5s\n", menuList[2]);
}
void secondLine(void)
{
    system("cls");
    printf("%5s\n", menuList[0]);
    SetColor(19);
    printf("%5s\n", menuList[1]);
    SetColor(15);
    printf("%5s\n", menuList[2]);
}
void thirdLine(void)
{
    system("cls");
    SetColor(15);
    printf("%5s\n", menuList[0]);
    printf("%5s\n", menuList[1]);
    SetColor(19);
    printf("%5s\n", menuList[2]);
    SetColor(15);
}

