#include <stdio.h>
int main()
{
    int n, count=0;
    printf("enter number to know if it's prime or not : ");
    scanf("%d", &n);

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        count++;
    }

     if(count==0)
    printf("number is prime");

     if(count>0)
    printf("number is not prime");
    
}