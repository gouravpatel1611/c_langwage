#include<stdio.h>


typedef struct Student
{
    int id;
    char name[50] ;
    int marks;
} st;

st gourav,mehul;

int main(){


    typedef int* intptr;

    int* a,b; // a is a pointer and b is not a pointer;
    intptr x,y ; // both x and y is pointer

    gourav.id = 1;
    mehul.id =2;


    typedef float fl;

    int a= 5;
    fl k = 5.550;

    printf("point is %f",k);
    printf("\n");





 return 0;
}