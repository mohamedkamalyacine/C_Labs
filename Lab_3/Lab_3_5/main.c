#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c = 0;

    printf("Enter an alphabet: ");
    c = getchar();
    if( (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') )
    {
        printf("you entered : %c", c);
    }
    else
    {
        printf("Error");
    }
    return 0;
}
