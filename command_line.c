#include<stdio.h>


int main(int argc, char const *argv[])
{
    printf("The value of argc is %d",argc);
    printf("\n");
    for (int i = 0; i < argc; i++)
    {
        printf("The argument number %d has value of %s",i,argv[i]);
        printf("\n");
    }
    
    return 0;
}
