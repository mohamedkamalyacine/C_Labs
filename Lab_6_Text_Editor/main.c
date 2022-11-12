#include <stdio.h>
#include <stdlib.h>
#include<windows.h>

void textattr(int ForgC);
void gotoxy(int x,int y);
void backSpace(void);

int main()
{
    char c = 0, temp = 0;
    int i =0, j=0, step = 0, vertical = 0, newStep =0;
    char text[400] = {'\0'};

    while(27 != c)
    {
        c=getch();
        if(-32==c)
        {
            c = getch();
            switch(c)
            {
            case 75:
                if(step != 0)
                {
                    step--;
                    gotoxy(step,0);
                }
                break;
            case 77:
                if(step<i)
                {
                    step++;
                    gotoxy(step, 0);
                }
                break;
            case 71:
                step = 0;
                gotoxy(step, 0);
                break;
            case 79:
                step = i;
                gotoxy(step,0);
                break;
            case 80:
                if(vertical != 0)
                {
                    vertical++;
                    gotoxy(i,vertical);;
                }
                break;
            default:
                break;
            }
        }
        else if(8==c && 0!=i && step==i)
        {
            step--;
            i--;
            gotoxy(step, 0);
            text[i] = ' ';
            printf(" \b");
        }
        else if(8==c && step<i && step>0)
        {
            step--;
            gotoxy(step,0);
            for(j=step; j<=i; j++)
            {
                text[j] = text[j+1];
                printf("%c", text[j]);
            }
            gotoxy(step,0);
        }
        else if(13==c)
        {
            newStep = 0;
            vertical++;
            gotoxy(newStep, vertical);
        }
        else if( (i==step) && (c>='a' && c<='z') || (c>='A' && c<='Z') || (c>='0' && c<='9') || (c==' '))
        {
            if(vertical != 0)
            {
                text[i] = c;
                gotoxy(newStep, vertical);
                printf("%c", text[i]);
                i++;
                step++;
                newStep++;
            }
            else
            {
                text[i] = c;
                gotoxy(step, vertical);
                printf("%c", text[i]);
                i++;
                step++;
            }
        }
        else if( (step<i) && (c>='a' && c<='z') || (c>='A' && c<='Z') || (c>='0' && c<='9') || (c==' '))
        {
            for(j=i; j!=step; j--)
            {
                text[j+1] = text[j];
            }
            text[j+1] = c;
            system("cls");
            printf("%s", text);
            gotoxy(step, 0);
            step++;
            i++;
        }
    }
    printf("\n");
    for(i=0; text[i] != '\0'; i++)
    {
        printf("%c", text[i]);
    }
    printf("\n");
    return 0;
}

void gotoxy(int x,int y)
{
    COORD coord= {0,0};
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

void textattr(int ForgC)
{
    //system("COLOR ForgC"); //system("COLOR FC");
    HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hStdOut, ForgC);
}
