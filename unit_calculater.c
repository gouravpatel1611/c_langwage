#include <stdio.h>

void exits();
void unit();

void option()
{
    int num;
    printf("    Salect Optation for calculate :-");
    printf("\n");
    printf("    Salect 0 for Km To Miles");
    printf("\n");
    printf("    Salect 1 for Inches To Feet");
    printf("\n");
    printf("    Salect 2 for Cm To Inches");
    printf("\n");
    printf("    Salect 3 for Pound To Kg");
    printf("\n");
    printf("    Salect 4 for Inches To Meter");
    printf("\n");
    printf("Enter your Optiton you want to calculate:- ");
    scanf("%d", &num);
    printf("\n");
    unit(num);
    printf("\n");
}

void exits()
{
    printf("\n");
    int exit_value = 0;
    printf("If yhou want to Exit Press 0 or press 1 to Continue :- ");
    scanf("%d", &exit_value);
    if (exit_value == 0)
    {
        printf("Thank you !");
        printf("\n");
    }
    else if (exit_value == 1)
    {
        option();
    }
    else
    {
        printf("Inpurt Error !! Try again");
        printf("\n");
        exits();
    }
}

void unit(int a)
{
    if (a == 0)
    {
        float km;
        printf("Enter value in Km :- ");
        scanf("%f", &km);
        printf("\n");
        printf("%f km  = %f Miles", km, 0.621371 * km);
        printf("\n");
        exits();
    }
    else if (a == 1)
    {
        float inch;
        printf("Enter value in Inch :- ");
        scanf("%f", &inch);
        printf("\n");
        printf("%f inch  = %f Feet", inch, 0.0833333 * inch);
        printf("\n");
        exits();
    }
    else if (a == 2)
    {
        float cm;
        printf("Enter value in Cm :- ");
        scanf("%f", &cm);
        printf("\n");
        printf("%f Cm = %f Inch", cm, 0.393701 * cm);
        printf("\n");
        exits();
    }
    else if (a == 3)
    {
        float pound;
        printf("Enter value in pound :- ");
        scanf("%f", &pound);
        printf("\n");
        printf("%f Pound = %f Kg", pound, 0.453592 * pound);
        printf("\n");
        exits();
    }
    else if (a == 4)
    {
        float inch;
        printf("Enter value in inch :- ");
        scanf("%f", &inch);
        printf("\n");
        printf("%f inch = %f meter", inch, 0.0254 * inch);
        printf("\n");
        exits();
    }
    else
    {
        printf("Input Error !!!");
        printf("\n");
        printf("Try again ");
        printf("\n");
        exits();
    }
}

int main()
{
    printf("~~ Welcome to Units calculetar ~~");
    printf("\n");
    option();

    return 0;
}