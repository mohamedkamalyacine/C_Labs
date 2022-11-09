#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0, j=0, k=0;
    char firstName[20] = {'\0'}, lastName[20] = {'\0'};
    char fullname[100] = {'\0'};

    printf("Enter first Name: ");
    gets(firstName);
    //scanf("%s", firstName);

    for(i=0; firstName[i] != '\0'; i++)
    {
        fullname[i] = firstName[i];
    }

    fullname[i] = ' ';

    printf("Enter Last Name: ");
    fflush(stdin);
    gets(lastName);
    //scanf("%s", lastName);

    for(k=i + 1 ; lastName[j] != '\0'; k++)
    {
        //printf("%c", lastName[j]);
        fullname[k] = lastName[j];
        j++;
    }
    printf("Your Full name is ");
    for(i=0; fullname[i] != '\0'; i++)
    {
       printf("%c", fullname[i]);
    }
    return 0;
}
