#include <stdio.h>
int main()
{
    int a, input;

    while(1)
    {
        printf("enter number to know if it's even or odd \n press '0' to quit\n");
        scanf("%d", &a);

        if (a == '0')
            break;

        else if (a % 2 == 0)
        {
            printf("number is even !\n");
            break;
        }

        else if (a % 2 != 0)
        {
            printf("number is odd !\n");
            break;
        }
        else
        {
            printf("you entered wrong input odd\n");
            break;
        }
    }

    printf("end of program \n");
}