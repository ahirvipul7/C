#include <stdio.h>
int main()
{
    int a=56,b=98;
    printf("before swap a=%d  b=%d", a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nafter swapping a=%d b=%d",a,b);
}