#include<stdio.h>
#include <string.h>


int main(){
    char name[10];
    char temp[10];
    printf("Enter Your Number:- ");
    gets(name);
    printf("\n");

    strcpy(temp,name);
    strrev(name);


    if(strcmp(name,temp)==0){
        printf("Your Number is pelindrom");
        printf("\n");
    }
    else{
        printf("your number is not a pelindrom");
        printf("\n");
    }


 return 0;
}