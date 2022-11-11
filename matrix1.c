// program to print two 2D array(2*3) and calculate sum of those two arrays

#include <stdio.h>
int main()
{
    int arr1[2][3];
    int arr2[2][3];
    int sum[2][3];

    for (int i = 0; i < 2; i++)                        // intialization of first array
    {
        for (int j = 0; j < 3; j++)
        {
            printf("enter value for arr1[%d][%d] : ",i,j);
            scanf("%d", &arr1[i][j]);
        }
    }

    for (int i = 0; i < 2; i++)                        // initialization of second array
    {
        for (int j = 0; j < 3; j++)
        {
            printf("enter value for arr2[%d][%d] : ",i,j);
            scanf("%d", &arr2[i][j]);
            sum[i][j]=arr1[i][j]+arr2[i][j];
        }
    }

    for (int i = 0; i < 2; i++)                            //to print result array 
    {
        for (int j = 0; j < 3; j++)
        {
          printf(" sum[%d][%d]=%d\n", i,j,sum[i][j]);
        }
    }
}