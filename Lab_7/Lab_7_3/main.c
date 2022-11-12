#include <stdio.h>
#include <stdlib.h>

int main()
{
    int studentNum = 0, subjectNum = 0, i=0, j=0;
    int sum = 0, sumAvg=0;
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

    for(i=0; i<studentNum; i++)
    {
        printf("\nStudent %d Data:\n", i+1);
        for(j=0; j<subjectNum; j++)
        {
            printf("Subject %d : %d\n", j+1, student[i][j]);
            sum = sum + student[i][j];
        }
        printf("Final Result: %d\n", sum);
        sum = 0;
    }

    for(j=0; j<subjectNum; j++)
    {
        for(i=0; i<studentNum; i++)
        {
            sumAvg = sumAvg + student[i][j];
        }
        avg = (float)sumAvg/studentNum;
        printf("Average of Subject %d --> %0.2f\n", j, avg);
        sumAvg = 0;
    }
    return 0;
}
