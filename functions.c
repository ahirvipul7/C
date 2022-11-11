#include <stdio.h>

// user difined functions

int sum(int a, int b)
{
    int sum = 0;
    sum = a + b;
    printf("your sum is %d\n", sum);
}


int sub(int a, int b)
{
    int sub = 0;
    sub = a - b;
    printf("your subtraction is %d\n", sub);
}


int mul(int a, int b)
{
    int mul;
    mul=a*b;
    printf("your multiplication is %d\n", mul);
}


int div(int a, int b)
{
    int div;
    div=a/b;
    printf("your divide is %d\n", div);
}


// now main function

int main()
{
    sum(5,10);
    sub(10,5);
    mul(5,2);
    div(34,2);
}

