#include <stdio.h>
#include <stdlib.h>

int main()
{
    char source[50] = {'\0'}, copied[50] = {'\0'}, ch = 0;
    int i = 0;

    printf("Enter a string : ");

    while(ch != '\n')
    {
        ch = getchar();
        source[i] = ch;
        i++;
    }

    for(i=0; source[i] != '\0'; i++)
    {
        copied[i] = source[i];
    }

    printf("You have written : %s\n", copied);

    return 0;
}
