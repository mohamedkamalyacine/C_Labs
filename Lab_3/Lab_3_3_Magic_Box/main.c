#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>

void gotoxy(int x,int y)
{
    COORD coord= {0,0};
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

void delay(int number_of_seconds)
{
    // Converting time into milli_seconds
    int milli_seconds = 1000 * number_of_seconds;

    // Storing start time
    clock_t start_time = clock();

    // looping till required time is not achieved
    while (clock() < start_time + milli_seconds);
}

int main()
{
    int size = 0, row = 1, column = 0, i = 0;

    printf("Enter Box Size: ");
    scanf("%5d", &size);
    printf("\n");


    while(size%2 == 0)
    {
        printf("Error, Please enter an Odd number: ");
        scanf("%d", &size);
    }

    column = (size+1)/2;

    system("cls");


    for(i=1; i<=(size*size); i++)
    {
        gotoxy(column*5, row);
        printf("%d", i);

        delay(1);

        if(i%size == 0)
        {
            row++;
        }
        else
        {
            row--;
            column--;
            if( 0 == row)
            {
                row=size;
            }
            else if( 0 == column)
            {
                column = size;
            }
            else
            {
                //Do_Nothing
            }
        }
        printf("\n");
    }

    return 0;
}

















