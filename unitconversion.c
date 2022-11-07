#include <stdio.h>

int main()
{
    char input;
    float kmstomiles = 0.621371;
    float inchestofoot = 0.0833333;
    float cmstoinches = 0.393701;
    float poundtokgs = 0.453592;
    float inchestometers = 0.0254;
    float first, second;

    while (1)
    {
        printf("Enter the input character or 'q' to quit\n    1. kms to miles\n    2. inches to foot\n    3. cms to inches\n    4. pound to kgs\n    5. inches to meteres\n");
        scanf("%c", &input);

        switch (input)
        {
        case 'q':
            printf("Quitting the program.....\n");
            goto end;
            break;

        case '1':
            printf(" Enter quantity in terms of first unit\n");
            scanf("%f", &first);
            second = first * kmstomiles;
            printf("%f Kms are equal to %f miles \n",first,second);
            break;

        case '2':
            printf(" Enter quantity in terms of first unit\n");
            scanf("%f", &first);
            second = first * inchestofoot;
            printf("%f Inches are equal to %f foots \n",first,second);
            break;

        case '3':
            printf(" Enter quantity in terms of first unit\n");
            scanf("%f", &first);
            second = first * cmstoinches;
            printf("%f Cms are equal to %f inches\n",first,second);
            break;

        case '4':
            printf(" Enter quantity in terms of first unit\n");
            scanf("%f", &first);
            second = first * poundtokgs;
            printf("%f Pounds are equal to %f Kgs \n",first,second);
            break;

        case '5':
            printf(" Enter quantity in terms of first unit\n");
            scanf("%f", &first);
            second = first * inchestometers;
            printf("%f Inches are equal to %f meters \n",first,second);
            break;

        default:
            printf("You entered incorrect value\n");
            goto end;
            break;
        }
    }

end:
    return 0;
}
