#include <stdio.h>
int main()

{
    int age,weight;
    
    printf("enter your age \n");
    scanf("%d", &age);

if (age<18&&age>24)
{
    printf("you'r age is too small for army\n");
}



    switch (age)
    {


    case 18:
        printf("enter your weight ");
        scanf("%d", &weight );

        switch (weight)
        {
        case 55:
            printf("CONGRATS ! you are eligible for indian army" );
            break;
        
        default:
        printf("your age and weight ratio doesn't match");
            break;
        }
        break;
         



           case 19:
               printf("enter your weight ");
        scanf("%d", &weight );

        switch (weight)
        {
        case 58:
            printf("CONGRATS ! you are eligible for indian army" );
            break;
        
        default:
        printf("your age and weight ratio doesn't match");
            break;
        }
           break;




            case 20:
               printf("enter your weight ");
        scanf("%d", &weight );

        switch (weight)
        {
        case 60:
            printf("CONGRATS ! you are eligible for indian army" );
            break;
        
        default:
        printf("your age and weight ratio doesn't match");
            break;
        }
        break;




             case 21:
               printf("enter your weight ");
        scanf("%d", &weight );

        switch (weight)
        {
        case 63:
            printf("CONGRATS ! you are eligible for indian army" );
            break;
        
        default:
        printf("your age and weight ratio doesn't match");
            break;
        }
        break;




              case 22:
               printf("enter your weight ");
        scanf("%d", &weight );

        switch (weight)
        {
        case 65:
            printf("CONGRATS ! you are eligible for indian army" );
            break;
        
        default:
        printf("your age and weight ratio doesn't match");
            break;
        }
        break;




            case 23:
              printf("enter your weight ");
        scanf("%d", &weight );

        switch (weight)
        {
        case 67:
            printf("CONGRATS ! you are eligible for indian army" );
            break;
        
        default:
        printf("your age and weight ratio doesn't match");
            break;
        }
        break;





             case 24:
               printf("enter your weight ");
        scanf("%d", &weight );

        switch (weight)
        {
        case 70:
            printf("CONGRATS ! you are eligible for indian army" );
            break;
        
        default:
        printf("your age and weight ratio doesn't match");
            break;
        }
        break;


    default:
    printf("SORRY ! YOU ARE NOT ELIGIBLE FOR ARMY\n");
        break;
    }
}