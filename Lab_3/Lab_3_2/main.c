#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c = 0;
    printf("Select  A  for Alexandria\n");
    printf("Select  C  for Cairo\n");
    printf("Select  L  for Luxor\n");
    printf("Select ESC for exit\n");

    do
    {
        c = getch();

        switch(c)
        {
            case 'A'    :
            case 'a':
                system("cls");
                printf("Alexandria\n");
            break;

            case 'C':
            case 'c':
                system("cls");
                printf("Cairo\n");
            break;

            case 'L':
            case 'l':
                system("cls");
                printf("Luxor\n");
            break;

            case 27:
                system("cls");
                printf("Select  A  for Alexandria\n");
                printf("Select  C  for Cairo\n");
                printf("Select  L  for Luxor\n");
                printf("Select ESC for exit\n");
            break;

            default:
                system("cls");
                printf("Error\n");
            break;
        }
    }while(c != 13);

    return 0;
}
