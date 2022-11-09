#include <stdio.h>
#include <stdlib.h>

#define N 3
int main()
{
    int arr[N] = {0};
    int i = 0;
    int * ptr = arr;
    printf("Enter Array data\n");
    for(i=0; i<N; i++)
    {
        printf("Enter arr[%d] : ", i);
        scanf("%d", &arr[i]);
    }
    /*for(i=0; i<N; i++)
    {
        printf("arr[%d] = %d\n", i, arr[i]);
    }*/
    for(i=0; i<N; i++)
    {
        printf("arr[%d] = %d\n", i, *(ptr+i));
    }
    return 0;
}
