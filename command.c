#include <stdio.h>
#include <string.h>
#include <stdlib.h>






int main(int argc, char  *argv[])
{
    if (argc == 4)
    {
      

        if ( strcmp(argv[1],"add") == 0)
        {
            printf("%d",atoi(argv[2])+atoi(argv[3]));
        }
        else if ( strcmp(argv[1],"sub") == 0)
        {
            printf("%d",atoi(argv[2])-atoi(argv[3]));
        }
        else if ( strcmp(argv[1],"multi") == 0)
        {
           printf("%d",atoi(argv[2])*atoi(argv[3]));             
        }
        else if ( strcmp(argv[1],"div") == 0)
        {
            printf("%f",(float)atoi(argv[2])/(float)atoi(argv[3]));
        }
        else{
            printf("Input Error");
        }
    }
    else
    {
        printf("Input Error Use only fun x y,  Add, Sub , Div, multi");
        printf("\n");
        
    }

    
    printf("\n");
    return 0;
}
