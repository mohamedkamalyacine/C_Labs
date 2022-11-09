#include <stdio.h>
#include <stdlib.h>

int main()
{
    char source[50] = {'\0'}, ch = 0;
    int i = 0, length = 0;

    printf("Enter a string : ");

    while(ch != '\n')
    {
        ch = getchar();
        source[i] = ch;
        i++;
    }

    length = i-1;

    printf("Length of string : %d\n", length);

    return 0;
}
