#include <stdio.h>

int main()
{

    FILE *ptr = NULL;
    FILE *ptr1 = NULL;
    char str[34];
    char c;
    char name[25];
    char item[50];
    char date[11];
    ptr = fopen("my_file.txt", "r");
    ptr1 = fopen("demo.txt", "a");

    
    

    printf("~~ Welcome To recept maker ~~");
    printf("\n");
    printf("\t Name:- ");
    gets(name);
    printf("\t Item:- ");
    gets(item);
    printf("\t Date:- ");
    gets(date);
    printf("\n");












    c = fgetc(ptr);
    int value = 1;
    int counter = 0;

    printf("\n");
    while (c != EOF)
    {
        // for open tag
        if (c == '{')
        {
            c = fgetc(ptr);
            if (c == '{')
            {
                value = 0;
                switch (counter)
                {
                case 0:
                    fprintf(ptr1,"%s",name);
                    break;
                case 1:
                    fprintf(ptr1,"%s",item);
                    break;
                case 2:
                    fprintf(ptr1,"%s",date);
                    break;
                }
                counter++;
            }
            else{
                // printf("{");
                fprintf(ptr1,"%c",'{');
            }
           
        }

        // for close tag
        if (value == 0)
        {
            if (c == '}')
            {
                c = fgetc(ptr);
                value =1;
            }

        }
        else{
        // printf("%c", c);   
        fprintf(ptr1,"%c",c);
         }

        c = fgetc(ptr);
    }
        printf("\n");
        fclose(ptr);
        printf("Name Added SucsessFully !!");
        printf("\n");
        return 0;
}