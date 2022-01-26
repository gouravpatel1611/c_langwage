#include<stdio.h>



void print_str(char st[]){
    int i =0;
        printf("\n");
    while (st[i] != '\0')
    {
        printf("%c",st[i]);
        i++;
    }
    
        printf("\n");

}

int main(){

    // char str[] = {'g','o','u','r','a','v','\0'};
    char str[] = "gourav";
    print_str(str);

    char name[100];
    printf("\n");
    printf("Enter your name :- ");
    gets(name);
    printf("\n");
    printf("Your name is %s",name);
    printf("\n");
    puts(name );
    printf("\n");





 return 0;
}