#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c = 0, str[100];
    int i = 0;

    while(c != '\n' && i != 100)
    {
        c = getchar();
        str[i] = c;
        i++;
    }

    str[i] = '\0';

    printf("%s\n", str);
    return 0;
}
