#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[200] = {'\0'}, ch = 0;
    int i = 0;

    printf("Enter a string : ");

    while(ch != '\n')
    {
        ch = getchar();
        if( (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') )
        {
            str[i] = ch;
            i++;
        }
    }

    printf("Your string with characters only --> %s\n", str);

    return 0;
}
