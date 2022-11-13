// program to convert other country's currency into INR
// this program helps to convert currency like "AMERICA , RUSSIA , AUSTRALIA , CHINA , SPAIN , FRANCE , ITALY , PAKISTAN , NEPAL ,KUWAIT , INDONESIA "                                                                       */
// DATE : 7/8/2022

#include <stdio.h>
int main()
{
    int m;
    float a, INR;

cont:

    printf("enter 1 to know american currency rate \n");
    printf("enter 2 to know russian currency rate \n");
    printf("enter 3 to know australian currency rate \n");
    printf("enter 4 to know china currency rate \n");
    printf("enter 5 to know spain currency rate \n");
    printf("enter 6 to know indonesia currency rate \n");
    printf("enter 7 to know kuwait currency rate \n");
    printf("enter 8 to know pakistan currency rate \n");
    printf("enter 9 to know nepal currency rate \n");
    printf("enter 10 to know bangladesh currency rate \n");

    scanf("%d", &m);

    switch (m)
    {

    case 1:
    {
        printf("enter USD to convert : ");
        scanf("%f", &a);
        INR = a * 79.3762;
        printf("%f\n", INR);
    }
     break;
    

    case 2:
    {
        printf("enter russian rubels to convert : ");
        scanf("%f", &a);
        INR = a * 1.3144;
        printf("%f\n", INR);
    }
    break;

    case 3:
    {
        printf("enter australian dollar to convert : ");
        scanf("%f", &a);
        INR = a * 54.85;
        printf("%f\n", INR);
    }
    break;

    case 4:
    {
        printf("enter chinese yuan to convert : ");
        scanf("%f", &a);
        INR = a * 11.74;
        printf("%f\n", INR);
    }
    break;

    case 5:
    {
        printf("enter spain euro to convert : ");
        scanf("%f", &a);
        INR = a * 80.85;
        printf("%f\n", INR);
    }
    break;

    case 6:
    {
        printf("enter indonesian rupiah to convert : ");
        scanf("%f", &a);
        INR = a * 0.0053;
        printf("%f\n", INR);
    }
    break;

    case 7:
    {
        printf("enter kuwaiti dinar to convert : ");
        scanf("%f", &a);
        INR = a * 257.88;
        printf("%f\n", INR);
    }
    break;

    case 8:
    {
        printf("enter pakistani rupee to convert : ");
        scanf("%f", &a);
        INR = a * 0.35;
        printf("%f\n", INR);
    }
    break;

    case 9:
    {
        printf("enter nepalese rupee to convert : ");
        scanf("%f", &a);
        INR = a * 0.62;
        printf("%f\n", INR);
    }
    break;

    case 10:
    {
        printf("enter bangladeshi taka to convert : ");
        scanf("%f", &a);
        INR = a * 0.83;
        printf("%f\n", INR);
    }
    break;
    }
    {
    end:
        printf("end of program \n");
    }
}