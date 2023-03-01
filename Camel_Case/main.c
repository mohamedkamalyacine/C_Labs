#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

void camelCase(char * str);

int main()
{
    camelCase("Hello world");
    printf("\n");
    camelCase("Hello kamal");
    printf("\n");
    camelCase("cats AND*Dogs-are Awesome");
    printf("\n");
    camelCase("a b c d-e-f%g");
    return 0;
}

void camelCase(char * str)
{
    int len = strlen(str), i = 0;

    for(i=0; i<len; i++)
    {
        if( (str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z'))
        {
            if(str[i+1] >= 'a' && str[i] <= 'z')
            {
                printf("%c", str[i+1]-32);
            }
            else
            {
                printf("%c", str[i+1]);
            }
            i++;
            continue;
        }
        else if( (str[i] >= 'A' && str[i] <= 'Z') && i==0)
        {
            printf("%c", str[i]+32);
        }
        else if(str[i] >= 'A' && str[i] <= 'Z' && i>0)
        {
            printf("%c", str[i]+32);
        }
        else
        {
            printf("%c", str[i]);
        }
    }
}
