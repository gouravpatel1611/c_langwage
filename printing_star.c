#include <stdio.h>

void print_star(int num)
{
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
void print_rev_star(int num)
{
    for (int i = 0; i < num; i++)
    {
        for (int j = (num - i); j > 0; j--)
        {
            printf("*");
        }
        printf("\n");
    }
}

int main()
{
    int value,star_num;
    printf("~~ welcome to Star print function ~~");
    printf("\n");
    printf("select your option for star print :-");
    printf("\n");
    printf("Select 0 for normal print");
    printf("\n");
    printf("Select 1 for reverse print");
    printf("\n");
    printf("Select your chois :- ");
    scanf("%d",&value);
    printf("\n");
    printf("Enter The number of Star you want to print:- ");
    scanf("%d",&star_num);
    if (value == 0)
    {
    print_star(star_num);
    }
    else if (value == 1)
    {
    print_rev_star(star_num);
    }
    else
    {
    printf("Input Error !!");
    }
    
    
    

    return 0;
}