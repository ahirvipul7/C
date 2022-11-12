//swapping of 2 numbers

#include <stdio.h>
int main()
{
    int a,b,temp;
    printf("enter two values for a and b : ");
    scanf("%d %d", &a ,&b);

    temp=a;                   //swapping of two numbers using thirs variable
    a=b;
    b=temp;       

    printf("%d\t%d", a,b);
}