// program to read two arrays of size 5 and store sum of those two arrays into 3rd array

#include <stdio.h>
int main()
{
    int arr1[5], arr2[5], res[5];

    for (int i = 0; i < 5; i++)
    {
        printf("enter value's for arr1 : ");                         //will take value for first array
        scanf("%d", &arr1[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("enter value's for arr2 : ");                         //will take value for second array
        scanf("%d", &arr2[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        res[i] = arr1[i] + arr2[i];                                     //will store value in result array after sum
    }

    printf("result array is :\n");
    for (int i = 0; i < 5; i++)
    {

        printf("res[%d]=%d\n", i, res[i]);                              //for printing result array
    }
}