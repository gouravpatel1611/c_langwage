#include<stdio.h>
#include <string.h>

//    <h1> This is a Heading.   </h1>

void parser(char t[]){
    int temp =0;
    int start ,end;
    for (int i = 0; i < strlen(t); i++)
    {
        if (t[i] == '>')
        {
            temp =1;
        }
        if (temp == 1)
        {
            if (t[i+1] != ' ')
            {
                start = i+1;
                temp =0;
                break;
            }
        }
        
    }
    
    for (int i = strlen(t); i >= 0; i--)
    {

        if (t[i] == '<')
        {
            temp =1;
        }
        if (temp == 1)
        {
            if (t[i-1] != ' ')
            {
                end = i-1;
                break;
            }
        }

    }
    

    for (int i = start; i < end+1; i++)
    {
        printf("%c",t[i]);
    }
    

}




int main(){

    char tag[50] = "<h1>      This is a Heading.   </h1>";

    parser(tag);


    printf("\n");
 return 0;
}