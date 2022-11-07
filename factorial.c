#include <stdio.h>

int function(int num)
{
    if (num == 0 || num == 1)
    {
        return 1;
    }

    else
    {
        return (num * function(num - 1));
    }
}

int main()
{
    int num;
    printf("enter value for factorial :");
    scanf("%d", &num);
    printf("%d", function(num));
}