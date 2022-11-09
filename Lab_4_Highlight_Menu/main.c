#include <stdio.h>
#include <stdlib.h>
#include<windows.h>
#include <dos.h>
#include <dir.h>
#include "selections.h"

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
    char ch = 0;
    int line = 1, page = 0;
    defaultPage();
    while(ch != 27)
    {
        ch = getch();
        switch(ch)
        {
        case 80:
            if(1 == line && 0==page)
            {
                selectSecondLine(0);
                line = 2;
            }
            else if(2==line && 0==page)
            {
                selectThirdLine(0);
                line = 3;
            }
            else if(3 == line && 0==page)
            {
                selectFirstLine(0);
                line = 1;
            }
            else if(1 == line && 1==page)
            {
                selectSecondLine(1);
                line = 2;
            }
            else if(2==line && 1==page)
            {
                selectThirdLine(1);
                line = 3;
            }
            else if(3==line && 1==page)
            {
                selectFirstLine(1);
                line = 1;
            }
            else if(1 == line && 2==page)
            {
                selectSecondLine(2);
                line = 2;
            }
            else if(2==line && 2==page)
            {
                selectThirdLine(2);
                line = 3;
            }
            else if(3==line && 2==page)
            {
                selectFirstLine(2);
                line = 1;
            }
            else if(1 == line && 3==page)
            {
                selectSecondLine(3);
                line = 2;
            }
            else if(2==line && 3==page)
            {
                selectThirdLine(3);
                line = 3;
            }
            else if(3==line && 3==page)
            {
                selectFirstLine(3);
                line = 1;
            }
            break;
        case 72:
            if(1 == line && 0==page)
            {
                selectThirdLine(0);
                line = 3;
            }
            else if(2==line && 0==page)
            {
                selectFirstLine(0);
                line = 1;
            }
            else if(3 == line && 0==page)
            {
                selectSecondLine(0);
                line = 2;
            }
            else if(1==line && 1==page)
            {
                selectThirdLine(1);
                line = 3;
            }
            else if(2==line && 1==page)
            {
                selectFirstLine(1);
                line = 1;
            }
            else if(3==line && 1==page)
            {
                selectSecondLine(1);
                line = 2;
            }
            else if(1==line && 2==page)
            {
                selectThirdLine(2);
                line = 3;
            }
            else if(2==line && 2==page)
            {
                selectFirstLine(2);
                line = 1;
            }
            else if(3==line && 2==page)
            {
                selectSecondLine(2);
                line = 2;
            }
            else if(1==line && 3==page)
            {
                selectThirdLine(3);
                line = 3;
            }
            else if(2==line && 3==page)
            {
                selectFirstLine(3);
                line = 1;
            }
            else if(3==line && 3==page)
            {
                selectSecondLine(3);
                line = 2;
            }
            break;

        case 13:
            if(1==line && 0==page)
            {
                page = 1;
                selectFirstLine(1);
            }
            else if(2==line && 0==page)
            {
                page = 2;
                line = 1;
                selectFirstLine(2);
            }
            else if(3==line && 0==page)
            {
                page = 3;
                line = 1;
                selectFirstLine(3);
            }
            break;

        case 8:
            selectFirstLine(0);
            line = 1;
            page = 0;
            break;
        default:
            break;
        }
    }
    return 0;
}
