#include <stdio.h>
#include <stdlib.h>
#include<windows.h>
#include <dos.h>
#include <dir.h>
#include "selections.h"

char options[3][10] = {{"Country"}, {"City"}, {"Team"}};
char country[3][15] = {{"Egypt"}, {"Spain"}, {"England"}};
char cities[3][10] = {{"Cairo"}, {"Madrid"}, {"London"}};
char teams[3][25] = {{"Al-Ahly"}, {"Barcelona"}, {"Manchester United"}};


void selectFirstLine(int choice)
{
    switch(choice)
    {
    case 0:
        defaultPage(); //selectOptionOne();
        break;
    case 1:
        selectFirstCountry();
        break;
    case 2:
        selectFirstCity();
        break;
    case 3:
        selectFirstTeam();
        break;
    default:
        break;
    }
}

void selectSecondLine(int choice)
{
    switch(choice)
    {
    case 0:
        selectOptionTow();
        break;
    case 1:
        selectSecondCountry();
        break;
    case 2:
        selectSecondCity();
        break;
    case 3:
        selectSecondTeam();
        break;
    default:
        break;
    }
}

void selectThirdLine(int choice)
{
    switch(choice)
    {
    case 0:
        selectOptionThree();
        break;
    case 1:
        selectThirdCountry();
        break;
    case 2:
        selectThirdCity();
        break;
    case 3:
        selectThirdTeam();
        break;
    default:
        break;
    }
}

void defaultPage(void)
{
    system("cls");
    SetColor(19);
    printf("%5s\n", options[0]);
    SetColor(15);
    printf("%5s\n", options[1]);
    printf("%5s\n", options[2]);
}

void selectOptionTow(void)
{
    system("cls");
    printf("%5s\n", options[0]);
    SetColor(19);
    printf("%5s\n", options[1]);
    SetColor(15);
    printf("%5s\n", options[2]);
}

void selectOptionThree(void)
{
    system("cls");
    SetColor(15);
    printf("%5s\n", options[0]);
    printf("%5s\n", options[1]);
    SetColor(19);
    printf("%5s\n", options[2]);
    SetColor(15);
}

void selectFirstCountry(void)
{
    system("cls");
    SetColor(19);
    printf("%5s\n", country[0]);
    SetColor(15);
    printf("%5s\n", country[1]);
    printf("%5s\n", country[2]);
}

void selectSecondCountry(void)
{
    system("cls");
    printf("%5s\n", country[0]);
    SetColor(19);
    printf("%5s\n", country[1]);
    SetColor(15);
    printf("%5s\n", country[2]);
}

void selectThirdCountry(void)
{
    system("cls");
    SetColor(15);
    printf("%5s\n", country[0]);
    printf("%5s\n", country[1]);
    SetColor(19);
    printf("%5s\n", country[2]);
    SetColor(15);
}

void selectFirstCity(void)
{
    system("cls");
    SetColor(19);
    printf("%5s\n", cities[0]);
    SetColor(15);
    printf("%5s\n", cities[1]);
    printf("%5s\n", cities[2]);
}

void selectSecondCity(void)
{
    system("cls");
    printf("%5s\n", cities[0]);
    SetColor(19);
    printf("%5s\n", cities[1]);
    SetColor(15);
    printf("%5s\n", cities[2]);
}

void selectThirdCity(void)
{
    system("cls");
    SetColor(15);
    printf("%5s\n", cities[0]);
    printf("%5s\n", cities[1]);
    SetColor(19);
    printf("%5s\n", cities[2]);
    SetColor(15);
}

void selectFirstTeam(void)
{
    system("cls");
    SetColor(19);
    printf("%5s\n", teams[0]);
    SetColor(15);
    printf("%5s\n", teams[1]);
    printf("%5s\n", teams[2]);
}

void selectSecondTeam(void)
{
    system("cls");
    printf("%5s\n", teams[0]);
    SetColor(19);
    printf("%5s\n", teams[1]);
    SetColor(15);
    printf("%5s\n", teams[2]);
}

void selectThirdTeam(void)
{
    system("cls");
    SetColor(15);
    printf("%5s\n", teams[0]);
    printf("%5s\n", teams[1]);
    SetColor(19);
    printf("%5s\n", teams[2]);
    SetColor(15);
}
/*
char cities[3][10] = {{"Cairo"}, {"Madrid"}, {"London"}};
char country[3][15] = {{"Egypt"}, {"Spain"}, {"England"}};
char teams[3][25] = {{"Al-Ahly"}, {"Barcelona"}, {"Manchester United"}};

void defaultPage(void)
{
    system("cls");
    SetColor(19);
    printf("%5s\n", options[0]);
    SetColor(15);
    printf("%5s\n", options[1]);
    printf("%5s\n", options[2]);
}

void selectLineTow(void)
{
    system("cls");
    printf("%5s\n", options[0]);
    SetColor(19);
    printf("%5s\n", options[1]);
    SetColor(15);
    printf("%5s\n", options[2]);
}

void selectLineThree(void)
{
    system("cls");
    SetColor(15);
    printf("%5s\n", options[0]);
    printf("%5s\n", options[1]);
    SetColor(19);
    printf("%5s\n", options[2]);
    SetColor(15);
}

void selectFirstCountry(void)
{
    system("cls");
    SetColor(19);
    printf("%5s\n", country[0]);
    SetColor(15);
    printf("%5s\n", country[1]);
    printf("%5s\n", country[2]);
}

void selectSecondCountry(void)
{
    system("cls");
    printf("%5s\n", country[0]);
    SetColor(19);
    printf("%5s\n", country[1]);
    SetColor(15);
    printf("%5s\n", country[2]);
}
*/
