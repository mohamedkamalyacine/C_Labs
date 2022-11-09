#include <stdio.h>
#include <stdlib.h>

/*
Function IncreamentArray returns dynamically located Array;
*/
//#define N 5
int size;

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
    printf("Enter Array size: ");
    scanf("%d", &size);
    ptr = (int*)malloc(size*sizeof(int));
    for(i=0; i<size; i++)
    {
        printf("Enter element [%d]: ",i);
        scanf("%d",&ptr[i]);
    }
    return ptr;
}
