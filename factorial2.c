#include <stdio.h>
int main()

{
    int i, n, factorial=1;

    printf("enter value for factorial :\n");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        factorial = factorial * i;
    }
    printf("factorial is %d \n", factorial);
}