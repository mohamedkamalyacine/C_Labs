#include <stdio.h>
#include <stdlib.h>
#include<windows.h>
#include <dos.h>
#include <dir.h>

void gotoxy(int x,int y)
{
    COORD coord= {0,0};
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

void SetColor(int ForgC){
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

void defaultPage(void);
void pageOne(void);


char options[3][10] = {{"New"}, {"Display"}, {"Exit"}};

int main()
{
    char c = 0;
    int line = 1;

    defaultPage();

    while(1)
    {
        c = getch();
        switch(c)
        {
        case 80:
            pageOne();
            break;

        }
    }

    return 0;
}

void defaultPage(void)
{
    SetColor(19);
    printf("%5s\n", options[0]);
    SetColor(15);
    printf("%5s\n", options[1]);
    printf("%5s\n", options[2]);
}

void pageOne(void)
{
    system("cls");
    printf("%5s\n", options[0]);
    SetColor(19);
    printf("%5s\n", options[1]);
    SetColor(15);
    printf("%5s\n", options[2]);
}
