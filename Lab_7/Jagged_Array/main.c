#include <stdio.h>
#include <stdlib.h>

int main()
{
    int studentNum = 0, subjectNum = 0, i=0, j=0;
    int sum = 0;
    float avg = 0;
    int* sumArr;
    int sumAvg[15] = {0};

    int** student;
    printf("Enter number of students: ");
    scanf("%d", &studentNum);

    student = (int**)malloc(studentNum*sizeof(int*));
    sumArr = (int*)malloc(studentNum*sizeof(int));


    for(i=0; i<studentNum; i++)
    {
        printf("Student %d Subjects: ", i+1);
        scanf("%d", &subjectNum);
        student[i] = (int*)malloc(subjectNum*sizeof(int));
        sumArr[i] = (int*)malloc(studentNum*sizeof(int));
        sumArr[i] = 0;
        printf("================================================\n");
        for(j=0; j<subjectNum; j++)
        {
            printf("Subject_degree %d: ", j+1);
            scanf("%d", &student[i][j]);
            sumArr[i] = sumArr[i] + student[i][j];
            sumAvg[j] = sumAvg[j] + student[i][j];
        }
        printf("Final Result: %d\n", sumArr[i]);
        printf("================================================\n");
    }

    for(i=0; i<studentNum; i++)
    {
        avg = (float)sumAvg[i]/studentNum;
        printf("Average of subject %d --> %f \n", i+1, avg);
    }
    return 0;
}
