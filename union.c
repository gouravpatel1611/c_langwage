#include<stdio.h>
#include <string.h>

union Student
{
    int id;
    char name[50];
    int roll ;
} gourav,rahul,mehul;


int main(){

    gourav.id =1;
    strcpy(mehul.name,"mehul patel");
    strcpy(rahul.name,"Rahul patel");


    printf("gourav id %d",gourav.id);
    printf("\n");
    printf("mehul name = %s",mehul.name);
    printf("\n");
    printf("rahul name = %s",rahul.name);
    printf("\n");








 return 0;
}