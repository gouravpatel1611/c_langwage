#include<stdio.h>


int main(){

    int a = 345;
    float b = 8.3;
    void *ptr;
    ptr = &a;

    printf("The value of a is %d",*((int*)ptr));
    printf("\n");
    ptr = &b;
    printf("The value of b is %f",*((float*)ptr));
    printf("\n");


 return 0;
}