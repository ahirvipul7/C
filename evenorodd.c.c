#include <stdio.h>
int main()                       // program to read an array of 10 integers and count no.of even and odd integers
{
    int array[10];
    int even=0, odd=0;
    printf("enter values for array\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &array[i]);
        printf("array[%d]=%d\n", i, array[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        if (array[i] % 2 == 0)               // remender (bhangakar karta malti shesh)
            even++;
        else
            odd++;
    }
    printf("even elements are = %d\n", even);
    printf("odd elements are = %d\n", odd);
}