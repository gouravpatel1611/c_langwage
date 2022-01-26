#include<stdio.h>
#include <string.h>

struct Student
{
    int id;
    char name[50] ;
    int marks;
} gourav,mehul,rahul;


// struct Student gourav, rahul, mehul ;   //Global variable

int main(){

    // struct Student gourav, rahul, mehul ;   //Local variable
        gourav.id = 1;
        strcpy(gourav.name, "Gourav Patel");
        gourav.marks = 8;

        rahul.id = 2;
        strcpy(rahul.name, "Rahul patel");
        rahul.marks = 9;

        mehul.id =3;
        strcpy(mehul.name, "Mehul Patel");
        mehul.marks = 5;




    printf("The marks of gourav is %d",gourav.marks);
    printf("\n");


 return 0;
}