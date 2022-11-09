#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c = 0;
    int countAlphabet = 0, countWord = 0, countSpace = 0, countNumber = 0;

    do
    {
        c= getchar();
        countAlphabet++;
        if( c>='0' && c<='9')
        {
            countAlphabet--;
        }
        else if(c == ' ')
        {
            countWord++;
            countAlphabet--;
        }
        /*else if(c>='0' && c<='9')
        {
            countNumber++;
        */
    }while(c != '\n');


    printf("Number of Alphabets : %d\n", countAlphabet-1);
    printf("Number of words: %d", countWord+1);
    return 0;
}
