#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch = 0;

    while(1)
    {
        ch = getch();
        printf("%d\n", ch);
        if(ch == -32)
        {
            ch = getch();
            printf("%d\n", ch);
            printf("Extended Key\n");
        }
        else
        {
            printf("Normal key\n");
        }
    }

    return 0;
}
