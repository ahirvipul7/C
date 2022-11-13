#include <stdio.h>
int main()                                                   // arrays index is always start from '0'
{                                                            // ex: if size=10 then index will be 0 to 9 ,
    int array1[4] = {2, 3, 4, 5};                                           // size of array = 4 ,

    int array2[] = {3, 4, 6, 2, 3, 5, 5};                    // size of array will be considered as 7 because of initilization ,

    int array3[5];
    array3[0] = 1;
    array3[1] = 2;
    array3[2] = 3;                                            //we can update value of array's block  'ex:update'
    array3[3] = 4;                                              
    array3[4] = 5;

    int array4[10] = {0, 1, 2, 3, 4, 5, 6};                  // here in array 4 remaining all values will be considered as '0' ,

    printf("%d\n", array4[8]);


    printf("**********ex:update************\n");
    array4[7]=7;
    array4[7]=8;

    printf("updated value will be printed , value = %d \n", array4[7]);

                  
printf("*************new*************");

    printf("run time intialization\n");                        //if you want to take input from user ,you can do it with for loop 
    int array[10];
    printf("enter 10 values for array[10] \n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &array[i]);
        printf("array[%d] = %d\n",i,array[i]);                  //input will be stored in array
        printf("array[%d] = %d\n",i,array[i]);                  //input will be stored in array
    }
    

    

}