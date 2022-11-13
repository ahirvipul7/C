#include <stdio.h>
int main()                                           /*array[3][3] index=
                                                                (0,0)(0,1)(0,3)
                                                                (1,0)(1,1)(1,2)
                                                                (2,0)(2,1)(2,2) */
{                    
    // compile time initialization

    int a[2][3] = {2, 4, 5, 6, 7, 4};

    int b[][3] = {2, 3, 5, 3, 6, 3};                          // we can skip row size while compile time initialization

    int c[2][3] = { {2, 4, 3} , {3, 6, 9} };                  //we can initialization like this , first values in { } will be consider for first row  

    int d[3][3] = { {2,5,7},
                    {3,2,5},
                    {5,7,6} } ;                               // we can initialization in matrix form 
                                                              
                    
  //run time initialization
        int array[3][3];

  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
        printf("enter value for array[%d][%d] : ", i,j);
        scanf("%d", &array[i][j]);
    }
  }
   

   //to print this array 
    for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
            printf("array[%d][%d] = %d \n",i,j,array[i][j] );
    }
  }
}
