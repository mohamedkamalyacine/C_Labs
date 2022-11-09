#include <stdio.h>
#include <stdlib.h>

/*
Function IncreamentArray returns Fixed located Array;
*/
#define size 5

int* increamentArray();

int main()
{
    int* p;
    p = increamentArray();
    int i =0;
    for(i=0; i<size; i++)
    {
        printf("Element [%d] = %d\n", i, p[i]);
    }
    return 0;
}

int* increamentArray()
{
    int i = 0;
    int *ptr;
    ptr = (int*)malloc(sizeof(int));
    for(i=0; i<size; i++)
    {
        printf("Enter Element [%d]: ",i);
        scanf("%d",&ptr[i]);
    }
    return ptr;
}
