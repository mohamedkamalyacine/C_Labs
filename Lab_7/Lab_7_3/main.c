#include <stdio.h>
#include <stdlib.h>

int main()
{
    int studentNum = 0, subjectNum = 0, i=0, j=0;
    int sum = 0;
    float avg = 0;

    int** student;
    printf("Enter number of students: ");
    scanf("%d", &studentNum);

    student = (int**)malloc(studentNum*sizeof(int*));

    printf("Enter number of subjects: ");
    scanf("%d", &subjectNum);

    for(i=0; i<studentNum; i++)
    {
        student[i] = (int*)malloc(subjectNum*sizeof(int));
    }

    for(i=0; i<studentNum; i++)
    {
        printf("Student %d\n", i+1);
        printf("================================================\n");
        for(j=0; j<subjectNum; j++)
        {
            printf("Subject_degree %d: ", j+1);
            scanf("%d", &student[i][j]);
            //sum = sum + student[i][j];
        }
        printf("================================================\n");
    }

    int sumAvg[subjectNum];
    sumAvg[subjectNum] = (int)malloc(subjectNum*sizeof(int));

    for(i=0; i<studentNum; i++)
    {
        printf("\nStudent %d Data:\n", i+1);
        for(j=0; j<subjectNum; j++)
        {
            printf("Subject %d : %d\n", j+1, student[i][j]);
            sum = sum + student[i][j];
            //printf("sumAvg[%d] = %d\n", i, sumAvg[j]);
        }
        printf("Final Result: %d\n", sum);
        sum = 0;
    }

    //int sumAvg=0;
    //i=0; j=0;

    /*while(j<subjectNum)
    {
        sumAvg = sumAvg + student[i][j];
        if(i==studentNum)
        {
            avg = (float)sumAvg/studentNum;
            printf("Average of Subject %d: %f", j+1, avg);
            i=0;
            j++;
        }
        else
            i++;
    }*/
    /*for(j=0; j<subjectNum; j++)
    {
        sumAvg = sumAvg + student[i][j];
        if(i==studentNum)
        {
            avg = (float)sumAvg/studentNum;
            printf("Average of Subject %d: %f", j+1, avg);
            i=0;
            j++;
        }
        else
            i++;
    }*/
    /*int row = 0, col = 0, i = 0, j = 0;
    printf("Enter number of rows: ");
    scanf("%d", &row);

    printf("Enter number of columns: ");
    scanf("%d", &col);

    int **ptr = (int**)malloc(row*sizeof(int*));

    for(i=0; i<row; i++)
    {
        ptr[i] = (int*)malloc(col*sizeof(int));
    }

    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &ptr[i][j]);
        }
    }

    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("Element [%d][%d]: %d\n", i, j, ptr[i][j]);
        }
    }*/
    return 0;
}
