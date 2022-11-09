#include <stdio.h>
#include <stdlib.h>
#include<windows.h>

void textattr(int ForgC);
void gotoxy(int x,int y);
void backSpace(void);
//void writeFromStart(char *, int);

int main()
{
    char c = 0;
    int i =0, j=0, step = 0;
    char text[400] = {'\0'};

    while(13 != c)
    {
        //step++;
        c=getch();
        if(-32==c)
        {
            c = getch();
            switch(c)
            {
            case 75:
                step--;
                gotoxy(step,0);
                break;
            case 77:
                step++;
                gotoxy(step, 0);
                break;
            case 71:
                step = 0;
                gotoxy(step, 0);
                break;
            case 79:
                step = i;
                gotoxy(step,0);
                break;
            default:
                break;
            }
        }
        else if(8==c && 0!=i)
        {
            step--;
            i--;
            gotoxy(step, 0);
            text[i] = ' ';
            printf(" \b");
            /*if(step<i)
            {
                for(j=step; j<i; j++)
                {
                    printf("%c", text[j]);
                }
            }*/
            //gotoxy(step, 0);
            //putch(text[i]);
            //i--;

        }
        else if((c>='a' && c<='z') || (c>='A' && c<='Z') || (c>='0' && c<='9'))
        {
            text[i] = c;
            //gotoxy(step, 0);
            printf("%c", text[i]);
            i++;
            step++;
        }
        /*if( (c>='a' && c<='z') || (c>='A' && c<='Z'))
        {
            printf("etghjk");
            text[i] = c;
            step++;
            i++;
        }*/
        /*else if(c==-32)
        {
            switch(c)
            {
            case :
                //writeFromStart(text, i-1);
                //printf("Home Key is pressed\n");
                //text[i] = '\0';
                break;
            default:
                break;
            }
        }*/
        /*else if(c==8)
        {
            step--;
            i--;
            gotoxy(step,0);
            text[step] = ' ';
            //printf("KKKKKKKKK");

            printf("%c", text[step]);
        }
        //i++;
        step++;*/

    }
    printf("\n%s\n", text);
    //gotoxy(50,5);
    //printf("\nYou entered:\n");
    //gotoxy(50,6);
    /*for(j=0; '\0'!=text[j]; j++)
    {
        printf("%c", text[j]);
    }
    printf("\n");*/

    return 0;
}

/*void writeFromStart(char *ptrText, int k)
{

}*/

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
