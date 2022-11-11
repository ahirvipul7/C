// program to print 2D array (in form of matrix) and calculate sum of all elements

#include <stdio.h>
int main()
{
    int array[2][3], sum = 0;

    printf("enter value for 2D array\n");                          //to initialization value for matrix(2*3)
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("array[%d][%d] : ",i,j);
            scanf("%d", &array[i][j]);
        }
    }

     for (int i = 0; i < 2; i++)                          //for printing 2D array in matrix form and calculate sum of all elements
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", array[i][j]);
           
            sum=sum+array[i][j];
        }
         printf("\n");                                  //to print 2nd row in next line
    }

    printf("sum= %d", sum);
}
