#include <stdio.h>
int main()                                                            //program to add marks of 5 students then count sum and average marks 
{
    int marks[5];

    float avg;
    int sum = 0;

    for (int i = 1; i < 6; i++)
    {
        printf("enter marks for roll number %d : ", i);
        scanf("%d", &marks[i - 1]);
        sum = sum + marks[i - 1];
    }

    avg = sum / 5;

    for (int i = 1; i < 6; i++)
    {
        printf("marks of roll number  %d = %d \n", i, marks[i - 1]);
    }

    printf("sum of total marks = %d\n", sum);
    printf("avg marks = %f\n", avg);

    return 0;
}