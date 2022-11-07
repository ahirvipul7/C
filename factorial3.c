#include <stdio.h>
int main()
{
    int i, n, f = 1;

    printf("enter value for factorial : ");
    scanf("%d", &n);

    for (i = n; i >= 1; i--)
    {
        f=f*i;
    }
    printf("YOUR FACTORIAL IS %d \n", f);
}
