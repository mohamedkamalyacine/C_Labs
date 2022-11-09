#include <stdio.h>
#include <stdlib.h>
#include<ctype.h>

int main()
{
    char x = 0;
    printf("Enter an Alphabet in lower case: ");
    x = getchar();

    if(x >= 'a' || x == 'z')
    {
        x-=32;
        printf("Alphabet in upper case: %c\n", x);
    }
    else
    {
        printf("Error\n");
    }
    return 0;
}
