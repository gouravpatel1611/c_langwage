#include <stdio.h>
#include <string.h>
#include <math.h>


int main()

{

    char name[10];
    

    for (int i = 0; i < 3; i++)
    {
        printf("Enter Your first  name ");
        

        gets(name);
        printf(" Your first  name is %s ", name);
        printf("\n");
        printf("\n");
    }

    return 0;
}