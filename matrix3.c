//program to print transpose of a matrix    (rows will change into column)

#include <stdio.h>
int main()

{
    int array[2][3];
    
    for (int i = 0; i < 2; i++)                                       //intialization of matrix
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d",&array[i][j]);
        }
    }

    printf("your entered matrix is : \n");                     //to print main matrix
     for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t",array[i][j]);
        }
        printf("\n");
    }


    printf("transpose matrix is : \n");                                //to print transpose matrix
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d\t",array[j][i]);
        }
        printf("\n");
    }
    


    
}