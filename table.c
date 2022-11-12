#include <stdio.h>
int main()
{
    int a,i,result;

    printf("enter value for multiplication table :");
    scanf("%d", &a);
    
    printf("MULTIPLICATION TABLE :\n");

    for ( i = 1; i <= 100; i++)
    {
        result=a*i;
        printf("%d * %d = %d\n", a,i,result);
    }
    
}